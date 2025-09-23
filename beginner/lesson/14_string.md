# string (Тэмдэгтийн цуваа)

- string бол c++ хэлний стандарт классуудын нэг юм. Дараах хэсэгт түүний гишүүн функцүүдийг тайлбарлая.
 

*Дараах тайлбаруудад string-г s-ээр , char -г c -ээр 
илэрхийлэв.*

<br/>
**Оролт, гаралтын функцүүд** 

| Function|  Тайлбар  |
|------|-------| 
| cin>>s |  string унших |
| cout<<s |  string хэвлэх |
| getline(cin,s)|  Тэмдэгтийн мөрийг унших |
| s.push_back(c)|  string-н ард тэмдэгт залгах |
| s.pop_back()  |  string-н сүүлийн тэмдэгтийг устгах|

<br/>
**Эхний ба төгсгөлийн элеметрүү хандах**

| Функцүүд |Тайлбар|
|-----|-----|
|s.front()| string-н эхний тэмдэгтийг буцаана |
|s.back()|  string-н сүүлийн тэмдэгтийг буцаана |


<br/>
**Хэмжээтэй холбоотой функцүүд**

| Функцүүд | Тайлбар|
|-----|-----|
|s.length()| string-н тэмдэгтийн тоо |
|s.empty()| string хоосон бол 1 үгүй бол 0 буцаана|
|s.clear()| string-н тэмдэгтүүдийг устгаж цэвэрлэнэ|
|s.erase(i,len)| i индексээс хойш len урт хэсэгт байгаа тэмдэгтүүдийг устгана |
|s.substr(i,len)| i индексээс хойш len урттай дэд string-г буцаана |
|s.find(c)| string -ээс с тэмдэгтийг хайна. Олдсон эхний индексийг нь буцаана. Олдохгүй бол -1 буцаана. |


<br/>
**2 string хоорондын үйлдлүүд **

| Функцүүд |Тайлбар|
|-----|-----|
|s1=s2| s2-г s1 рүү хуулна |
|`s = s1+s2`| s1 ба s2 -г нийлүүлээд(залгаад) s рүү хадгална. |
|s1.swap(s2)| s1, s2 -г солино  |
|s1==s2| Адилхан эсэхийг шалгана |
|s1>s2|  Lexicographic(Толь бичгийн) харьцуулалт  |
|s1<s2|  Lexicographic(Толь бичгийн) харьцуулалт  |


``` c++

int main() {
    string s;

    // 1 мөр текст string -д хадгалах
    cout << "Enter a line of text: ";
    getline(cin, s);
    cout<<"Your line : "<<s<<endl;

    // string -г гараас авах
    cout << "Enter a string: ";
    cin >> s;

    // string -г хэвлэж харуулах
    cout << "You entered: " << s << endl;

    // string -н төгсгөлд char залгах
    char c = 'X';
    s.push_back(c);
    cout<<"Char added at the end: " << s << endl;

    // Сүүлийн тэмдэгтийг устгах
    s.pop_back();
    cout<<"Removed last char: " << s << endl;

    // String -ийн эхний болон сүүлийн тэмдэгтийг хэвлэх
    char firstChar = s.front();
    char lastChar = s.back();
    cout<<"First char: "<<firstChar<< endl;
    cout<<"Last char: "<<lastChar<< endl;
    
    // string -н уртыг хэвлэх
    int length = s.length();
    cout<<"Length: "<<length<< endl;

    // string хоосон эсэхийг шалгах
    if(s.empty()){
      cout<< "String is empty " << endl;
    }else{
      cout<< "String is not empty " << endl;
    }

    // string -г цэвэрлэх
    s.clear();
    if(s.empty()){
      cout<< "String is empty after clear " << endl;
    }

    // 2 string залгах
    string s1 = "Apple, ";
    string s2 = "Bond!";
    s = s1 + s2;
    cout <<endl << s << endl;
    cout<<"Appended words: " << s << endl;
    
    // 2 string харьцуулах
    if (s1 == s2) {
        cout << "s1 and s2 are equal." << endl;
    } else if (s1 > s2) {
        cout << "s1 is greater than s2." << endl;
    } else {
        cout << "s1 is less than s2." << endl;
    }

    // 2 string солих
    s1.swap(s2);
    s = s1 + s2;
    cout<<"After swapping: " << s << endl<<endl;
    cout<<"s.substr(1,3) = "<<s.substr(1,3)<<endl;

    return 0;
  }

**Output:**

Enter a line of text: Hello from Mongolia
Your line : Hello from Mongolia
Enter a string: World
You entered: World
Char added at the end: WorldX
Removed last char: World
First char: W
Last char: d
Length: 5
String is not empty
String is empty after clear

Apple, Bond!
Appended words: Apple, Bond!
s1 is less than s2.
After swapping: Bond!Apple,
s.substr(1,3) = ond
```

## Дасгал ажлууд ##

<br>1. Гараас тэмдэгтийн цуваа өгөгдөнө. Тэмдэгтийн тоог хэвлэ.
<br/> hadgalagdah
<br/> 11

<br>2. Гараас тэмдэгтийн цуваа өгөгдөнө. Түүнийг эргүүлэн хэвлэ.
<br/> hadgalagdah
<br/> hadgalagdah

<br>3. Гараас тэмдэгтийн цуваа өгөгдөнө. Түүний тэмдэгтүүдийг урвуугаар хэвлэ.
<br/> Simplylearn
<br/> nraelylpmiS

<br>4. Гараас тэмдэгтийн цуваа өгөгдөнө. Палиндром бол Yes үгүй бол No гэж хэвлэ.
<br/> Simplylearn
<br/> No

<br/> hadgalagdah
<br/> Yes

<br>5. Гараас n мөр тэмдэгтийн цуваа өгөгдөнө. Цорын ганц байгаа '1' тэмдэгтийн мөр баганын индексийг хэвлэ. Эхлээд n тоо өгөгдөнө.

<br/> 5
<br/>
<br/> 0000000000000000000
<br/> 2234424242342423424
<br/> asdfasdfasdfasdfasdfasdf
<br/> 0000001000000000000
<br/> qqqq

<br/> 3  6

<br>6. https://atcoder.jp/contests/abc060/tasks/abc060_a 
  *back(), front() ашиглаж бодно*

<br>7. https://accepted.mn/it/problems/309/
  *getline(cin,s) ашиглаж бодно*

<br>8. https://www.spoj.com/NAND1248/problems/OLAI1/ (Олимпиадын бодлого)

<br>9. 
(23  дахь бодлого буюу `Diagonal string` бодлогоос хойш)<br>https://kenkoooo.com/atcoder/#/contest/show/3cef52ea-e433-49c0-b319-c523c46886b4 
 