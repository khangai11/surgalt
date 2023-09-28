# stl::pair
2 төрлийн хувьсагчыг нэг болгож хадгалдаг төрөл.
pair-ийн эхний хувьсагч руу хандахдаа first, 2 дох хувьсагч руу хандахдаа second гэж хандана.

| код | тайлбар |
| --- | --- |
| pair\<int,char\> a; | Эхний хувьсагчын төрөл нь int, 2 дох хувьсагчын төрөл нь char гэвэл дараахь байдлаар зарлана. |
| a = make_pair(10,'z'); | a гэдэг хувьсагчид эхний хувьсагчид 10 гэсэн утга, 2дох хувьсагчид 'z' гэсэн утга онооно. |
| int c = a.first; | pair-ийн эхний хувьсагч руу хандахад first гэж хандана. |
| char ch = a.second; | pair-ийн 2дох хувьсагч руу хандахад second гэж хандана. |
| pair\<int,int\> a,b;<br>a = make_pair(4,5);<br>b=make_pair(8,10);<br>if(a<b) <br>  cout<<"a baga"<br> else cout<<"b baga"; | харьцуулахдаа эхний элементийг нь харьцуулна. Тэнцүү байвал 2дох элементийг нь харьцуулна. |
 ```cpp
 pair<int, string> a;
 pair<string, long long> b;
 vector<pair<string,int>> c;
 c.push_back(make_pair("hello",4));
 c.push_back(make_pair("world",10));
 for(auto v:c){
    cout<<v.first<<" "<<v.second<<"\n";
 }
 //hello 4
 //world 10

 pair<int,pair<int,int> > d;
 d = make_pair(10,make_pair(20,30));
 ```

# stl::tuple

2-оос олон хувьсагчийг нэг дор нэг хувьсагчид хадгалдаг төрөл.pair нь зөвхөн 2 хувьсагч хадгалдаг бол tuple-д 2-оос олон хувьсагч хадгалж болдог.

| код | тайлбар |
| --- | --- |
| tuple\<int,int,string\> a; | int,int,string төрлийн 3 хувьсагч хадгалах tuple зарлах |
| a = make_tuple(1,2,"hi"); | tuple хувьсагчид утга оноох |
| cout<<get<0>(a);<br>cout<<get<2>(a); | утгыг нь уншихдаа get<index> гэж ашиглана. |