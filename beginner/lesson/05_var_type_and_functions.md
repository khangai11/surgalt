# Бүхэл, бутархай тоон хувьсагчийн төрөл ба зарим стандарт функцууд

<br>
Компьютерт мэдээлэл хадгалах хамгийн бага нэгжийг бит(bit) гэдэг. Нэг бит нь зөвхөн 0 эсвэл 1 гэсэн утга авч чадна. 8 ширхэг бит 1 Байт(Byte)-тай тэнцүү.


### Бүхэл тоон төрөл ###

- `int`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - 4 Byte  хэмжээтэй ($-2\times10^{9}$ ; $2\times10^{9}$)
- `long long`  &nbsp;&nbsp;&nbsp; - 8 Byte хэмжээтэй ($-9\times10^{18}$ ; $9\times10^{18}$)


### Бутархай тоон төрөл ###

- `float`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - 4 Byte  хэмжээтэй ($-3.4\times10^{38}$ ; $3.4\times10^{38}$ ; тасаллаас хойш 7 орон)
- `double`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - 8 Byte хэмжээтэй ($-1.7\times10^{308}$ ; $1.7\times10^{308}$ ; тасаллаас хойш 16 орон)

#### Бутархай тоон арифметик: ####   
- `+`  Нэмэх 
- `-`  Хасах
- `*`  Үржих
- `/` Хуваах

Бутархай тоон нарийвчлалыг тохируулж хэвлэж болно. Жишээ нь таслалаас хойш 3 орны нарийвчлалтай хэвлэе.
```c
int main(){
    double PI = 3.14159265359;
    cout<<fixed<<setprecision(3);
    return 0;
}
```

Хувьсагчийг зөвхөн эерэг тэмдэгтэйгээр зарлаж болно. Жишээ нь: 
`unsigned int A;` ($0$ ; $4\times10^{9}$)
`unsigned float A;` ($0$ ; $6.8\times10^{38}$; тасаллаас хойш 7 орон)


## Стандарт функцууд ##

### Бидний судалсан функцууд ###
1. `printf("Hello World");` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// Hello World гэж хэвлэнэ
2. `scanf("%d",&a);`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // a хувьсагчид гараас утга уншина
3. `max(a,b);`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // a,b -н ихийг буцаана
4. `min(a,b);`     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // a,b -н багыг буцаана


### Шинэ функцууд ###
1. `swap(a,b);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; //a, b тоонуудын утгыг солино
2. `sqrt(a);`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  //a тооны язгуурыг бодож буцаана
3. `pow(a,b);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  //a -гийн b зэргийг бодож буцаана 
4. `sin(a);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; //a тооны синус (Радианаар)
5. `cos(a);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;//a тооны косинус (Радианаар)
6. `abs(a);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;//a тооны абсолют утга
7. `sizeof(int);` &nbsp;&nbsp;&nbsp;//Хувьсагчийн хэмжээг буцаана. Жишээ нь int гэвэл 4 буюу 4 Byte


### Жишээ - Функцууд

```c
int main(){
    int a=25,b=49;
    //a = 25   b = 49 гэж хэвлэгдэнэ
    cout<<"a = "<<a<<"  "<<"b = "<<b<<'\n';
    swap(a,b);
    //a = 49   b = 25 гэж хэвлэгдэнэ
    cout<<"Swapped: a = "<<a<<"  "<<"b = "<<b<<'\n';
    cout<<"sqrt(a) = "<<sqrt(a)<<'\n'; //sqrt(a) = 7 
    cout<<"pow(3,2)  = "<<pow(3,2)<<'\n'; //pow(3,2) = 9
    double pi = 3.141592654;
    cout<<fixed<<setprecision(2); 
    cout<<"sin(pi/2) = "<<sin(pi/2)<<'\n';
    cout<<"cos(pi/2) = "<<cos(pi/2)<<'\n';
    cout<<"abs(-10) = "<<abs(-10)<<'\n';
    cout<<"abs(10) = "<<abs(10)<<'\n';
    cout<<"sizeof(a) = "<<sizeof(a)<<'\n';
	return 0;
}
```



## Дасгал ажлууд ##

<br>1. Гараас өгсөн 2 тооны утгуудыг swap() ашиглахгүйгээр соль.
<br>2. Гараас өгсөн 2 тооны утгуудыг swap() функц ашиглан соль.
<br>3. Тэгш өнцөгтийн катетууд өгөгдсөн бол гипотензыг ол.
<br>4. x тоо өгөгдөнө. sin(x)+cos(x)=? бодож хэвлэ.
<br>5. x тоо өгөгдөнө. (sin(x))^2+(cos(x))^2=1 гэдгийг шалга.
<br>6. Өгсөн тооны 1.5 зэргийг бодож хэвлэ.
<br>7. Гараас өгсөн 3 тооны хамгийн их болон бага утгуудыг соль.

<br>8. https://www.spoj.com/HOME/problems/HO2008/
<br>9. https://www.spoj.com/HOME/problems/HO1031/
<br>10. https://www.spoj.com/HOME/problems/HO1032/
<br>11. https://www.spoj.com/HOME/problems/HO1033/
<br>12. https://www.spoj.com/HOME/problems/HO1034/
<br>13. https://www.spoj.com/HOME/problems/CP006/
<br>14. https://www.spoj.com/HOME/problems/HO1042/
<br>15. https://www.spoj.com/HOME/problems/HO1043/
<br>16. https://www.spoj.com/HOME/problems/HO1044/
<br>17. https://www.spoj.com/HOME/problems/CP006/

