# Binary search

Бодлого: Үл буурах n ширхэг натурал тоо өгөгдсөн. Энэ тоон дунд x тоо байгаа эсэхийг ол.

## бодох арга
X-ээс бага эсвэл тэнцүү хамгийн том тоог олно. Тэр тоо нь Х-тэй тэнцүү байвал Х тоо байна гэсэн үг.
<br>

Үл буурах вектор A-ийн i дахь элемент нь Х-ээс их байвал (A[i]>X) бидний хайж байгаа тоо i-аас урд талд байж таарна.
Харин A[i]<=X байвал бидний хайж байгаа тоо нь i-ээс хойш эсвэл i дугаар байрлалд байж таарна.
<br>

A[i], X-ыг харьцуулахад бидний хайж байгаа тоо i-аас урд, эсвэл хойно байгааг мэдэж авна.
i-ийг байх боломжтой газрынхаа яг голын цэгийг сонгосноор байх боломжтой газрын тоог 2 дахин багасгаж болно.

9 байгаа эсэхийг шалгасан жишээ: 
<br>
![Alt](images/binary_search_image.png)


```cpp
vector<long long> A(n);
long long x = 9;
long long ok = -1;
long long ng = n;
while(ng-ok>1){
    int mid = (ok+ng)/2;
    if(A[mid]<=x)
        ok = mid;
    else
        ng = mid;
}
if(A[ok]==x){
    //x too oldson
} else {
    //x too oldoogui
}
```

Үл буурах(үл өсөх) шинж чанартай f(x)-ийн хувьд binary search ашиглаж болно.

Binary search-ийг ерөнхий тохиолдолд кодыг нь бичвэл
```cpp
int ok = -1;// нөхцлийг биелүүлэх нь илэрхий тоо
int ng = n;//нөхцлийг биелүүлэхгүй нь илэрхий тоо
while(ng-ok>1){
    int mid = ok+(ng-ok)/2; //голын тоог нь сонгож авна.
    if(check(mid)){         //нөхцлийг биелүүлж байвал ok-ийг шинэчлэнэ.
        ok = mid;
    } else {
        ng = mid;           //нөхцлийг биелүүлэхгүй байвал ng-г шинэчлэнэ.
    }
}

bool check(x){
    //нөхцлийг хангаж байвал True
    //бусад үед False буцаадаг функц.
    //Дээрхи жишээний хувьд
    //return arr[x]<=x
}
```
дээрхи код ажиллаж дуусахад
* ok - нөхцлийг хангах хамгийн том тоо нь
* ng - нөхцлийг хангахгүй хамгийн бага тоо нь 
орсон байна.

## C++ lower_bound(), upper_bound()

stl дотор lower_bound(), upper_bound() гэсэн 2 binary search хйидэг функц бий.

| function | explanation |
|---|---|
|lower_bound(arr.begin(),arr.end(),x)| үл буурах arr вектор дотроос x-ээс их юм уу тэнцүү хамгийн бага гишүүнийг заасан iterator(pointer) буцаана. |
|upper_bound(arr.begin(),arr.end(),x)| үл буурах arr вектор дотроос x-ээс эрс их, хамгийн бага гишүүнийг заасан iterator(pointer) буцаана. |


<br>
<br>
Бодлого1: https://atcoder.jp/contests/abc322/tasks/abc322_c
<br>
Бодлого2: https://atcoder.jp/contests/abc231/tasks/abc231_c
<br>
Бодлого3: https://atcoder.jp/contests/abc326/tasks/abc326_b
<br>
Бодлого4: https://atcoder.jp/contests/abc212/tasks/abc212_c
<br>
Бодлого5: https://atcoder.jp/contests/abc255/tasks/abc255_b
<br>
Бодлого6: 
<br>
Өгсөн N тооны гурван зэргийн язгуурыг ол.(1<=N<=10<sup>9</sup>).

Хариугаа таслалаас хойш 6-н орны нарийвчлалтай гарга.

Жишээ нь: 
оролт:  27

гаралт: 3.000000

оролт: 10

гаралт: 2.154435


Нэмэлт бодлогууд

<br>
<br>
Бодлого7(800): https://codeforces.com/problemset/problem/750/A
<br>
Бодлого8(800): https://codeforces.com/problemset/problem/1566/A
<br>
Бодлого9: Өгөгдсөн эерэг бүхэл тооны куб зэргийн язгуурыг ол. Алдаа нь 10<sup>-6</sup>-ээс бага байх хэрэгтэй.
<br>
Бодлого10(1600): https://codeforces.com/problemset/problem/1730/B


https://kenkoooo.com/atcoder/#/contest/show/9542f709-9054-4204-954e-f5ab20720b35

https://kenkoooo.com/atcoder/#/contest/show/1a30d2ce-7cdf-463e-b76c-2ffa09a4c8d3