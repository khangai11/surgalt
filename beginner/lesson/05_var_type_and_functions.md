## Стандарт функцууд ##

1. `max(a,b);`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // a,b -н ихийг буцаана
2. `min(a,b);`     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // a,b -н багыг буцаана

3. `printf("Hello World");` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// Hello World гэж хэвлэнэ
4. `scanf("%d",&a);`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // a хувьсагчид гараас утга уншина
5. `swap(a,b);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; //a, b тоонуудын утгыг солино
6. `sqrt(a);`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  //a тооны язгуурыг бодож буцаана
7. `pow(a,b);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  //a -гийн b зэргийг бодож буцаана 
8. `sin(a);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; //a тооны синус (Радианаар)
9. `cos(a);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;//a тооны косинус (Радианаар)
10. `abs(a);` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;//a тооны абсолют утга
11. `sizeof(int);` &nbsp;&nbsp;&nbsp;//Хувьсагчийн хэмжээг буцаана. Жишээ нь int гэвэл 4 буюу 4 Byte


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

