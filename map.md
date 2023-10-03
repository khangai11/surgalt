# stl::map
map нь ямар хаягт ямар дата хадгалагдаж байгааг хадгалдаг өгөгдлийн бүтэц.
Set-тэй адилхан Balanced binary search tree ашиглаж хийсэн өгөгдлийн бүтэц.
Энгийн vector-ийн индекс-д харгалзах тоо нь хаяг, дотор хадгалагдаж байгаа нь дата. vector-т хаяг нь дандаа дараалласан тоо байдаг бол map-д хаяг нь заавал тоо байх албагүй, дараалласан ч байх албагүй.
|map(a)|vector(b)|
|---|---|
| a[5] = 5; | a[5]=5; |
| a[1e9]=6; | a[4]=1; |
| a["abc"]=5; | a[0] = 5; |
| a[make_pair(4,5)=4;] | a[1]=4; |

| код | O(?) |тайлбар |
|---|---|---|
| map\<int,int\> a;<br>map\<string,double\> b; | O(1) |map<хаягын төрөл, датаны төрөл> гэж зарлана. |
| int v = a[x]; | O(log(n)) | a-ийн x гэсэн хаягт байгаа датаг унших, x гэсэн хаягт дата байхгүй бол датаны төрлийн default утгыг нь буцаана. |
| a.clear() | O(1) | a-г хоосон болгоно. |
| a[5] = 100;<br>b["hello"] = 0.123f;| O(log(n)) | дата оруулахдаа vector-той адилхан хандана. |
| a.find(x); | O(log(n)) | a дотор х гэсэн хаяг дээр дата байвал тухайн элементийг заасан iterator буцаана. байхгүй бол a.end()-ийг заасан iterator буцаана. |
| a.count(x); | O(log(n)) | a дотор х гэсэн хаяг дээр дата байвал 1, байхгүй бол 0-ийг буцаана.|

map дотор элементүүд нь хаягныхаа өсөх эрэмбээр байрласан байдаг. 
Мөн map руу ямар нэгэн хаягаар хандалт хийхэд тухайн хаяг дээр дата байхгүй бол шинээр үүсдэг учир хэмжээ нь ихэсдэг.

```
map<int,int> a;
map<int,string> b;
map<string,int> c;
a[100] = 4;
a[1e5] = 5;
b[4] = "hi";
b[100] = "dwww";
c["hi"] = 123;
c["toi"] = 1;
c["khan"] = 11111;
cout<<a[100];   //4
cout<<a[99];    //0(99 gesen hayagt data baihgui uchir default utga)
cout<<b[4];     //"hi"
cout<<b[8];     //""(8 gesen hayagt data baihgui uchir hooson string)
cout<<c["khan"];//11111
cout<<"c["kk"]; //0("kk" gesen hayagt data baihgui uchir hooson string)

for(auto v:c){
    cout<<v.first<<" "<<v.second<<"\n";
}
//map дотор элементүүд нь pair хэлбэрээр хадгалаастай байдаг.
//Output:
//hi 123
//khan 11111
//toi 1
```

```cpp
//Map, set, vector-т нийтлэг ашиглаж болох давталт
map<int,int> mp;
for(auto v:mp){
    //v.first дотор map-Т ашиглаж байгаа хаяг нь
    //v.second дотор map-т утга нь орсон байна.
    // өөрөөр хэлбэл mp[v.first]=v.second гэсэн дата mp дотор байгаа гэсэн үг.
    cout<<v.first<<v.second<<"\n";
}

for(auto itr = mp.begin();itr!=mp.end();itr++){
    cout<<(*itr).first<<(*itr).second<<"\n";
}

```
