
# stl::string
string нь vector\<char\> л гэсэн үг. vector-ийн фунцуудыг бүгдийг нь ашиглаж болно.

| код | тайлбар |
| --- | --- |
| string s; | string төрлийн s хувьсагч зарлах |
| cin>>s; | гараас string төрлийн хувьсагч унших |
| cout<<s; | string төрлийн хувьсагчыг хэвлэх |
| string a = "hello";<br>string b=" world";<br>string c = a+b; | string-үүдийг залгаж болдог.O(size) |
| s.substr(start,size); | s-ийн start индексээс эхлэн size хэмжээтэй string-ийг буцаана. |