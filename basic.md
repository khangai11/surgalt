# Эхлэх код

Ихэвчлэн доорхи кодыг ашигладаг.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    //bodolt end
}
```

Олон test case-тэй бодлогыг доорхи кодыг ашиглавал илүү эмх цэгцтэй болдог.

```cpp
#include <bits/stdc++.h>

using namespace std;

void solve(){
    //bodolt end
    //dund hesegt ni hariu garsan bol shuud return hiihed
    //daraagiin testcase-ruu oroh davuu taltai.
}

int main(){
    int t = 1;
    cin>>t; //хэрвээ нэг testcase-тэй бодлого байвал энэ хэсгийг comment болгоход хангалттай.
    for(int i=0;i<t;i++)
        solve();
}
```

# Оролт гаралт

c++ дээр гараас оруулсан утгыг уншихад cin, scanf, getline, үр дүнгээ хэвлэхэд cout,printf ашигладаг.

cin ашиглаж уншихад хоосон зайгаар тусгаарлагдсан эсвэл шинэ мөрөнд бичигдсэн оролтыг тус тусад нь уншдаг.

```cpp
// 2 int, 1 string уншихад
//input: 1932 43455 nand
int a,b;
string x;
cin>>a>>b>>x;
// a = 1932, b=43455, x = "nand"
cout<<a<<" "<<b<<" "<<x;
//1932 43455 nand
```

scanf, printf ашиглавал cin,cout-ийг ашигласнаас бага зэрэг хурдан ажиллана. Бүр хурдан оролтыг унших хэрэгтэй бол getchar() функцыг ашиглаж өөрөө Implement хийж болдог.

Олон мөр юм хэвлэх шаардлагатай бол std::endl аль болох ашиглахгүй оронд нь "\n" ашиглах хэрэгтэй.
endl нь гаргалтаа бүгдийг нь гаргасны дараа дараагын мөр ажилладаг, харин "\n" нь buffer-т хийгээд гаргалтыг хүлээлгүй шууд дараагын код ажилладаг.

програмынхаа эхэнд нь дараахь кодыг нэмбэл оролт гаралт нь бага зэрэг хурдан болдог.

```cpp
ios::sync_with_stdio(0);
cin.tie(0);
```

```cpp
vector<long long> a(100);
for(int i=0;i<100;i++){
    cout<<a[i]<<"\n";
}

//space-ийг оролцуулаад бүтэн мөрийг унших хэрэгтэй бол 
string s;
getline(cin,s);
```

(a/b) mod m = ((a mod m) * inverse(b) mod m) mod m
inverse(b) = b^(phi(m)-2)
phi(m) = Euler's totient function
```
