# Арифметик операторууд 

Арифметик операторууд: 
</p>+ (Нэмэх үйлдэл)
</p>- (Хасах үйлдэл)
</p>* (Үржих үйлдэл) 
</p>/ (Хуваах үйлдэл - Бүхэл хэсэг)
</p>% (Хуваах үйлдэл - Үлдэгдэл хэсэг)

### Жишээ1
```c
int main() {
    int a,b;
    a=18;
    b=10;

    int nemeh;
    int hasah;
    int urjih;
    int huvaah_buhel;
    int huvaah_uldeg;

    nemeh = a+b;
    hasah = a-b;
    urjih = a*b;
    huvaah_buhel = a/b;
    huvaah_uldeg = a%b;

    printf("a+b = %d\n",nemeh); //28 гарна
    printf("a-b = %d\n",hasah); //8 гарна
    printf("a*b = %d\n",urjih); //180 гарна
    printf("a/b = %d\n",huvaah_buhel); //1 гарна
    printf("a%b = %d\n",huvaah_uldeg); //8 гарна

    return 0;
}
```

### Жишээ2
```c
int main() {
    int a,b;
    a=30;
    b=5;

    int nemeh;
    int hasah;
    int urjih;
    int huvaah_buhel;
    int huvaah_uldeg;

    nemeh = a+b;
    hasah = a-b;
    urjih = a*b;
    huvaah_buhel = a/b;
    huvaah_uldeg = a%b;

    printf("a+b = %d\n",nemeh); //35 гарна
    printf("a-b = %d\n",hasah); //25 гарна
    printf("a*b = %d\n",urjih); //150 гарна
    printf("a/b = %d\n",huvaah_buhel); //6 гарна
    printf("a%b = %d\n",huvaah_uldeg); //0 гарна

    return 0;
}
```


### Жишээ3
```c
int main() {
    int a;
    a=30; // a хувьсагчийн утга

    a = a+10;
    a = a-10;
    a = a*10;
    a = a/10;
    a = a%10;

    printf("%d = a+10 \n",a); //40 гарна
    printf("%d = a-10 \n",a); //20 гарна
    printf("%d = a*10 \n",a); //300 гарна
    printf("%d = a/10 \n",a); //3 гарна
    printf("%d = a%10 \n",a); //0 гарна

    return 0;
}
```
### Жишээ4 - товчлол

a хувьсагчийн утгыг 10 -аар нэмэгдүүлэх бол өмнөх жишээнд бичснээр a=a+10; гэж бичихэд хангалттай. Тэгвэл үүнийг илүү товчоор a+=10; гэж бичиж болдог. Бусад - * / % операторуудын хувьд ч адил товчлол ашиглаж болно.

```c
int main() {
    int a=30; // a хувьсагчийн утга 30

    a +=10;
    printf("a = %d \n",a); 
    
    a -=10;
    printf("a = %d \n",a); 
    
    a *=10;
    printf("a = %d \n",a); 
    
    a /=10;
    printf("a = %d \n",a); 
    
    a %=10;
    printf("a = %d \n",a); 
    
    return 0;
}
```


### Жишээ5 - товчлол
```c
int main() {
    int a,b;
    a=30;
    b=5;

    a = a+b;
    printf("a = %d \n",a);
    a = a-b;
    printf("a = %d \n",a);
    a = a*b;
    printf("a = %d \n",a);
    a = a/b;
    printf("a = %d \n",a);
    a = a%b;
    printf("a = %d \n",a);

    return 0;
}

```

### Жишээ6 - Хувьсагчийн утга 1-ээр нэмэгдүүлэх
Өмнөх жишээнүүдэд харуулсанчлан бид жишээ нь a хувьсагчийн утгыг дараах байдлаар нэмэгдүүлж болно.<br>
Хэрэв 3-аар нэмье гэвэл:<br>
a=a+3;<br>
a+=3; //Арай товчоор бичвэл<br> 

Хэрэв 1-ээр нэмье гэвэл:<br>
a=a+1;<br>
a+=1; //Арай товчоор бичвэл<br> 
**a++; //Бүр товчоор<br>**
Хувьсагчийн утгыг **зөвхөн** 1-ээр нэмж байгаа тохиолдолд **a++;** ингэж болно. 




```c
int main() {
    int a=0;
    
    a = a+1;
    printf("a = %d \n",a); //a=1 болно
    a+=1;
    printf("a = %d \n",a); //a=2 болно
    a++;
    printf("a = %d \n",a); //a=3 болно
    return 0;
}

```
