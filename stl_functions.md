# stl functions
|function|Тайлбар|
|---|---|
| abs(x) | x-ийн Absolute утгыг нь буцаана |
| min(x,y) | x,y 2-ийн бага утгыг нь буцаана |
| max(x,y) | x,y 2-ийн их утгыг нь буцаана |
| swap(x,y) | x,y 2-н утгыг нь солино.<br> a=3,b=5 байгаад swap(a,b) хийвэл a=5,b=3 болно |
| __gcd(x,y) | x,y 2-ийн ХИЕХ-ийг буцаана. stl функц биш, GCC compiler-Т байдаг функц. C++17-оос хойшхи version ашиглаж байгаа бол gcd() гэсэн функцийг ашиглах нь зөв. |
| reverse(a,a+n);<br>reverse(a.begin(),a.end()); | int a[]-г урвуулна. a={1,2,3,4} байвал a={4,3,2,1} болно. |
| lower_bound(a,a+n,x);<br>lower_bound(a.begin(),a.end(),x); | a дотроос x-тэй тэнцүү юм уу их тоонуудын хамгийн бага тооны pointer-ийг буцаана. |
| upper_bound(a,a+n,x);<br>upper_bound(a.begin(),a.end(),x) | a дотроос x-ээс их тоонуудын хамгийн бага тооны pointer-ийг буцаана. |
| count(a,a+n,x);<br>count(a.begin(),a.end(),x); | a дотор x тоо хэд байгааг олно. |
| find(a,a+n,x)<br>find(a.begin(),a.end(),x) | a дотроос хамгийн эхэнд байгаа x-ийн pointer-ийг нь буцаана. байхгүй бол &a[n]-ийг буцаана. |
| next_permutation(a,a+n);<br>next_permutation(a.begin(),a.end()); | a-ийн сэлгэмлүүд дундаас а-аас их хамгийн бага сэлгэмлийг а-д байрлуулна. хэрвээ тийм сэлгэмэл олдохгүй бол false, олдвол true буцаана. |
| __builtin_popcount(x) | x-тоог 2тын тооллоор бичихэд хэдэн ширхэг 1 байгааг буцаана. stl функц биш, GCC compiler-Т байдаг функц|
| sort(a,a+n);<br>sort(a.begin(),a.end()); | өгөгдсөн дарааллыг үл буурах байдлаар эрэмбэлнэ. |

# C++ version өөрчлөх
"dev c++" тохируулга хийгээгүй бол c++ 98 version ашигладаг.
dev c++ дээр c++ 11-г ашиглахын тулд тохируулга хийх хэрэгтэй.
Tools->Compiler Options -> Settings tab -> Code generation tab -> Language standard(-std): GNU C++11 болгож өөрчлөнө.
