# ХИЕХ

Евклидийн алгоритм
```
 2 бодит тоо a, b-гийн (a>=b) хувьд a-г b-д хуваахад гарах үлдэгдлийг r гэвэл a ба b-гийн хамгийн их ерөнхий хуваагч нь b ба r-ийн хамгийн их ерөнхий хуваагчтай тэнцүү байдаг.*
```
C++ дээр 2 тооны ХИЕХ олох бэлэн функц байдаг.

```cpp
long long a = 40,b=15;
long long c = gcd(a,b); //C++ 17-оос хойш ашиглаж болно.
long long d = __gcd(a,b);   //gcc compiler ашиглаж байгаа үед ашиглаж болно.
cout<<c<<" "<<d;

cout<<gcd(0,100);//100 гарна
```

# Тооны хуваагчууд

N тооны бүх хуваагчуудыг ольё.
N = a * b байдаг гэвэл a эсвэл b 2-ын аль нэг нь sqrt(N)-ээс бага юм уу тэнцүү байх ёстой. 
<details>
<summary> <b>Яагаад вэ?</b> </summary>
  2уулаа том гэвэл үржвэр нь N-ээс эрс их болчих учир
</details>
<br>
a>=b гэж үзвэл sqrt(N) >= b болж таарна. 
Бид b-г олж чадвал N/b=a байх учир а-г ч мөн адил олж чадна гэсэн үг.
<br>
Тэгэхээр бид sqrt(N)-ээс хэтрэхгүй хуваагчуудыг нь олж чадвал И-ийн бүх хуваагчуудыг нь олж чадна гэсэн үг.

<br>
<details>
<summary> <b>Асуулт: 1 секундын дотор бид хамгийн том ямар тооны бүх хуваагчуудыг олж чадах вэ?</b> </summary>
  бид sqrt(N) болтол бүх тоог N-ийг хуваадаг эсэхийг шалгахад хангалттай. 
  1 секунд дотор 10<sup>8</sup> үйлдэл хийж чадна гэж үзвэл sqrt(N)=10<sup>8</sup> гэдгээс N<=10<sup>16</sup> тооны бүх хуваагчуудыг олох боломжтой.
</details>
<br>
<details>
<summary> <b>өгсөн N(<=10<sup>16)</sup> тооны хуваагчуудын тоог ол.</b> </summary>

  ```cpp
    #define ll long long
    int main(){
        ll n;
        ll ans = 0;//хуваагчуудын тоог хадгална.
        cin>>n;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                if(i*i==n){
                    ans++;  //i == n/i үед хуваагчын тоо 1-ээр нэмэгдэнэ.
                } else {
                    ans = ans+2;//i болон n/i гэсэн 2 хуваагч байгаа тул 2оор нэмнэ
                }
            }
        }
        cout<<ans;
    }
  ```

</details>
<br>

# Анхны тоо

## Тодорхойлолт:
 Өөртөө болон 1-т л хуваагддаг натурал тоо.
 <br>

Анхны тоо нь маш олон бодлогод ашиглагддаг. Анхны тоон үржигдэхүүнд задлах, ХБЕХ олох, анхны тоонд хуваахад хэд үлдэх вэ гээд олон төрлийн бодлогуудад ашиглагддаг.

## Анхны тоо мөн эсэхийг олох

<details>
<summary> <b>Өгсөн N тоо нь анхны тоо эсэхийг ол.</b> </summary>
  Бүх хуваагчуудыг нь олдогтой төстэй. Хэрвээ N тоог хуваадаг тоо байгаа бол ядаж нэг нь sqrt(N)-ээс бага юм уу тэнцүү байх ёстой. Эсрэгээрээ sqrt(N)-ээс бага эсвэл тэнцүү хуваагч олдохгүй бол уг тоо нь анхны тоо гэсэн үг.

<details>
<summary> <b>C++ code</b> </summary>
  
```cpp
#define ll long long
int main(){
    ll n;
    cin>>n;
    bool isprime = true;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        cout<<"it is prime number";
    } else {
        cout<<"it is not prime number";
    }
}

```

</details>

</details>




## N-ээс бага бүх анхны тоонуудыг олох

### Sieve of Eratosthenes algorithm

* n+1 урттай p вектор үүсгэнэ. Анхны утга нь бүгд 1-тэй тэнцүү
* i нь 2-оос эхлээд n болтол доорхи үйлдлийг давтана.
  * хэрвээ p[i] нь 1-тэй тэнцүү бол i нь анхын тоо гэсэн үг.<br> i тоогоо анхны тоонуудыг хадгалах вектортоо нэмнэ.
     * i<sup>2</sup>-ээс n болтолхи i-д хуваагддаг j тоонуудыг анхы тоо биш гэж тэмдэглэнэ. <br>жишээ нь p[j] = i
  * хэрвээ p[i] нь 1-ээс их бол i нь анхы тоо биш гэсэн үг. 
  
<br>


![Alt](images/Sieve_of_Eratosthenes_animation.gif)

Дээрхи алгоритмын time complexity нь O(N * log(N)) байдаг учир N<=10<sup>6</sup> үед ч хангалттай хурдан ажилладаг.

<details>
<summary> C++ code </summary>
<details>
<summary> өөрөө эхлээд бичих гээд үзэх үү?! </summary>
<details>
<summary> үнэхээр бэлэн код хармаар байна уу? </summary>
<details>
<summary> өөрөө бичих гээд үз л дээ </summary>
<details>
<summary> код байхгүй ээ. Өөрсдөө бич </summary>
<details>
<summary></summary>
<details>
<summary></summary>
<details>
<summary></summary>
<details>
<summary></summary>

```cpp
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll> p(n+1,1);
    vector<ll> primes;
    for(ll i=2;i<=n;i++){
        if(p[i]==1){
            primes.push_back(i);
            for(ll j=i*i;j<=n;j=j+i){
                p[j] = i;
            }
        }
    }
    for(ll i=0;i<primes.size();i++){
        cout<<primes[i]<<" ";
    }
}
```
</details>
</details>
</details>
</details>
</details>
</details>
</details>
</details>

# Бодлогууд
* https://atcoder.jp/contests/arc110/tasks/arc110_a
* https://atcoder.jp/contests/abc162/tasks/abc162_c
* https://atcoder.jp/contests/arc017/tasks/arc017_1
  <br>Орчуулга: Өгсөн N(<=10<sup>6</sup>) тоо нь анхны тоо бол "YES" үгүй бол "NO" гэж хэвлэ. Хариугаа хэвлэсний дараа шинэ мөр лүү шилжүүлээрэй.("\n" хэвлэх)
* https://atcoder.jp/contests/abc149/tasks/abc149_c
* https://atcoder.jp/contests/abc239/tasks/abc239_d
* https://atcoder.jp/contests/tenka1-2012-qualC/tasks/tenka1_2012_9
  <br>Орчуулга: Өгсөн N(<=10<sup>6</sup>) тооноос эрс бага анхны тоонуудын тоог хэвлэ.Хариугаа хэвлэсний дараа шинэ мөр лүү шилжүүлээрэй.("\n" хэвлэх)