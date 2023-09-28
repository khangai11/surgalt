# stl::set,multiset
Set,multiset,map нь элементүүдийг хадгалах өгөгдлийн бүтэц. Элемент нэмэх, хайх,устгах үйлдэл хийж болдог. Дотроо balanced binary search tree гэх өгөгдлийн бүтэц ашиглаж нэмэх,хайх,устгах үйлдлүүд нь тус бүр O(log(N))-д ажилладаг.(N нь set дотор байгаа элементийн тоо).

set - Адилхан утгатай элемент бол зөвхөн нэг л элемент хадгална.
multiset - Адилхан утгатай элемент олонги хадгалж болдог өгөгдлийн бүтэц.

vector-ээс ялгаатай нь дотор нь хадгалж байгаа элемент нь дандаа өсөх эрэмбээр хадгалагдсан байдаг.

| код | тайлбар |
| --- | --- |
| set\<int\> a; | int төрлийн элемент хадгалах set зарлах |
| a.insert(5); | a-д x-ийн утгыг нэмнэ. Мultiset-ийн хувьд а дотор 5 байвал дахиж нэмэгдэнэ, set-ийн хувьд 5 өмнө нь байсан бол нэмэгдэхгүй. |
| a.erase(5); | a-д 5 гэсэн утга байвал устгана. |
| a.erase(y); | y нь iterator бол тухайн зааж байгаа элементийг устгана. |
| a.lower_bound(x); | vector-ийн lower_bound-тай адилхан. х-тэй тэнцүү эсвэл их элементүүдээс хамгийн бага элементийг зааж байгаа iterator-ийг нь буцаана. |
| a.upper_bound(x); | vector-ийн upper_bound-тай адилхан. х-ээс их элементүүдээс хамгийн бага элементийг зааж байгаа iterator-ийг нь буцаана. |
| a.clear(); | a-г хоосон болгоно. |
| a.size(); | set дотор байгаа элементийн тоог буцаана. |
| itr = a.find(x); | set х гэсэн утга байвал түүнийг заасан iterator буцаана. Байхгүй бол a.end()-ийг буцаана. |
| a.count(x); | a дотор хичнээн х байгааг буцаана. |

```cpp
set<int> a;
a.insert(5);
a.insert(1);
a.insert(100);
a.insert(5);
for(int v:a){
    cout<<v<<" ";//1 5 100 (5 ni set учир зөвхөн 1 удаа л байна)
}
set<string> b;
b.insert("hello");
b.insert("world");
for(string v:b){
    cout<<v<<" ";//hello world
}
b.insert("a");
b.insert("b");
b.insert("c");
b.insert("de");
auto itr = b.lower_bound("ca");
cout<<(*itr);//de
```