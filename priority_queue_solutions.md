# priority_queue — жишээ бодлогуудын бодолт

[← priority_queue хичээл рүү буцах](priority_queue.md)

> Эхлээд өөрөө бодож үзээд, дараа нь энд шалгаарай.

## Бодлого 1: Чулуу мөргөлдүүлэх

[Бодлогын өгүүлбэр](priority_queue.md#жишээ-бодлого-1-чулуу-мөргөлдүүлэх)

**Санаа:** Алхам бүрт "хамгийн хүнд хоёрыг" авах хэрэгтэй, дээр нь шинэ чулуу буцаж орно. Массивыг алхам бүрт дахин эрэмбэлбэл O(N² log N) — хэтэрхий удаан. **Max-heap** бол яг энэ үйлдэлд зориулагдсан: `top()` хоёр удаа, `push()` нэг удаа → алхам бүр O(log N).

![чулуу мөргөлдүүлэх](images/pq_ex1_stones.gif)

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    priority_queue<long long> q;          // max-heap
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        q.push(x);
    }
    while(q.size() > 1){
        long long a = q.top(); q.pop();   // хамгийн хүнд
        long long b = q.top(); q.pop();   // 2 дахь хүнд (a >= b)
        if(a != b) q.push(a - b);         // хэлтэрхий үлдвэл буцааж хийнэ
    }
    cout << (q.empty() ? 0 : q.top()) << "\n";
}
```
Алхам бүрт дор хаяж нэг чулуу багасна → хамгийн ихдээ N алхам. Нийт **O(N log N)**.

---

## Бодлого 2: Олс холбох

[Бодлогын өгүүлбэр](priority_queue.md#жишээ-бодлого-2-олс-холбох)

**Санаа:** Эхэлж холбосон олс дараа дараагийн холболт бүрт дахин тооцогдоно. Тиймээс урт олсыг аль болох **хожуу** холбох нь ашигтай → алхам бүрт **хамгийн богино хоёрыг** холбоно (Huffman-ий санаа). Хамгийн богиныг авах тул **min-heap** (`greater`) хэрэгтэй.

Харьцуулахад: `4 3 2 6`-г дарааллаар нь холбовол `7 + 9 + 15 = 31`, харин хамгийн богиноос нь холбовол `5 + 9 + 15 = 29`.

![олс холбох](images/pq_ex2_ropes.gif)

```cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> q;   // min-heap
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        q.push(x);
    }
    ll ans = 0;
    while(q.size() > 1){
        ll a = q.top(); q.pop();   // хамгийн богино
        ll b = q.top(); q.pop();   // 2 дахь богино
        ans += a + b;              // холбох зардал
        q.push(a + b);             // шинэ олс буцаж орно
    }
    cout << ans << "\n";
}
```
Хариу нь `2·10^5 · 10^9`-ээс их болж болно → заавал **`long long`**. Нийт **O(N log N)**.

---

[← priority_queue хичээл рүү буцах](priority_queue.md)
