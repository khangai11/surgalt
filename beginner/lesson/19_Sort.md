# C++ эрэмблэх функц

## Vector, Massive, String эрэмблэх жишээ
```c++
int main()
{
    vector<int> a = {1,5,2,300,4,3,2};
    //vector-ийг өсөх эрэмбээр нь сорт хийхдээ
    sort(a.begin(),a.end());    //\{1,2,2,3,4,5,300\}
    //vector-ийг буурах эрэмбээр нь сорт хийхдээ
    sort(a.rbegin(),a.rend());  //\{300,5,4,3,2,2,1\}

    int b[7] = {1,5,2,300,4,3,2};
    //array-г өсөх эрэмбээр сорт хийхдээ
    sort(b,b+7);        //{1,2,2,3,4,5,300}

    string s = "khangai";
    //string-ийг өсөх эрэмбээр нь сорт хийхэд
    sort(s.begin(),s.end());    //"aaghikn"
    return 0;
}
```

## Харьцуулах үйлдлийг өөрийн хүссэнээр тодорхойлох

Дараах жишээнд string-үүдийг хамгийн бага урттайгаас нь их урттай руу нь, урт нь адилхан үед цагаан толгойн дарааллаар нь эрэмбэлэхийг үзүүлэв.

```c++

bool comp(string a, string b){
    if(a.size()==b.size()) return (a<b);
    else return (a.size()<b.size());
}

vector<string> s = {"some","aaaaaaaaa","text","for","sorting"};
sort(s.begin(),s.end(),comp);
//s = {for,some,text,sorting,aaaaaaaaa};

```
```c++
## pair өгөгдлийн бүтэц

//Хоёр өгөгдлийн төрлийн хослолыг pair -т хадгалдаг. Жишээ нь:
pair<int,int> a;
pair<int,string> b;
pair<int,float> c; //гэх мэт

// Тухайн элементүүд рүү хандахдаа .first .second ашиглана
b.first = 1;
b.second = "Car";

```
## Бие даах дасгалууд

<br/>1. Гараас өгсөн n ширхэг тоог өсөхөөр, буурахаар эрэмблэ.
<br/> 10
<br/> 1 2 44 2 1 5 5 99 10 11

<br/> 1 1 2 2 5 5 10 11 44 99

<br/> 99 44 11 10 5 5 2 2 1 1 

<br/>2. Гараас өгсөн n>5 ширхэг тооны эхний 5 элементийг өсөхөөр эрэмблэ.

<br/> 10
<br/> 1 2 44 2 1 5 5 99 10 11

<br/> 1 1 2 2 44 5 5 99 10 11


<br/>3. Гараас өгсөн string-ийн тэмдэгтүүдийг эрэмблэ.

<br/> stringisthecharacters

<br/> aacceeghhiinrrrsssttt


<br/>4. Гараас өгсөн n ширхэг дор хаяж 2 урттай string өгөгдөнө. Тэднийг 2 дахь тэмдэгтээр нь эрэмблэ. Хэрэв 2 дахь тэмдэгт нь адил бол уртын хувьд өсөх дарааллаар эрэмблэ. 

<br/> 5
<br/> aaaaaaaa
<br/> bdab
<br/> abababa
<br/> bababab 
<br/> cccccccccccc

<br/>bababab
<br/>aaaaaaaa
<br/>abababa
<br/>cccccccccccc
<br/>bdab

<br/>5. Хичээлийн төгсгөлд бичсэн pair өгөгдлийн бүтэц болон sort ашиглан дараах бодлогыг бодно уу.

Танд n хүний нэр болон нас өгөгдөнө. Тэдний нэрсийг насны дарааллаар нь хэвлэнэ үү. 

<br/>7
<br/>Temuge 38
<br/>Nandia 1000000000
<br/>Orkhon 12
<br/>Erkhes 1000
<br/>Temuulen 17
<br/>Anu-Ujin 10
<br/>Tsenguun 7


<br/>Tsenguun 
<br/>Anu-Ujin 
<br/>Orkhon 
<br/>Temuulen 
<br/>Temuge
<br/>Erkhes 
<br/>Nandia
