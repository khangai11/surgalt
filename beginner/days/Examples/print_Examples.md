# Жишээ 1 - Хэвлэлт 

```c
int main() {
    //Ene bol comment
    pritnf("One Two Three Four");  
     return 0; //Ene bol comment
     //Ene bol comment
}
```
**Гаралт :** 

One Two Three Four


# Жишээ 2 - Шинэ мөрнөөс хэвлэх
```c
int main() {
    /* Ene bol 
    olon murtei 
    comment*/
    pritnf("One\nTwo\nThree\nFour");  
    return 0;
}
```
**Гаралт :** <br>
One <br>
Two <br>
Three <br>
Four<br>

# Жишээ 3 - Хувьсагчид 100 гэсэн анхны утга оноож хэвлэх
```c
int main() {
    int var = 100;
    pritnf("var huvisagchiin anhnii utga ni = %d",var);

    return 0;
}
```

# Жишээ 4 - Гараас утга уншиж хэвлэх
```c
int main() {
    int var;
    
    printf("Ta garaas buhel too oruulna uu : ");
    scanf("%d",&var);

    pritnf("Tanii oruulsan too = %d\n",var);

    return 0;
}
```

# Жишээ 5 - 2 тооны ихийг олох
```c
int main() {
    int var1, var2;

    printf("Ta garaas 2 buhel too oruulna uu : ");
    scanf("%d",&var1);
    scanf("%d",&var2);

    int ih_utga = max(var1, var2);

    pritnf("Ih utga ni = %d\n",ih_utga);

    return 0;
}
```
# Жишээ 6 - 2 тооны багыг олох
```c
int main() {
    int var1, var2;

    printf("Ta garaas 2 buhel too oruulna uu : ");
    scanf("%d",&var1);
    scanf("%d",&var2);

    int baga_utga = min(var1, var2);

    pritnf("Baga utga ni = %d\n",baga_utga);

    return 0;
}
```

# Жишээ 7 - 2 тооны нийлбрийг олох
```c
int main() {
    int var1, var2;

    printf("Ta garaas 2 buhel too oruulna uu : ");
    scanf("%d",&var1);
    scanf("%d",&var2);

    int niilber = var1 + var2;
    pritnf("Niilber ni = %d\n",niilber);

    return 0;
}
```

# Жишээ 8 - Өгсөн тоог нэгээр нэмж хэвлэх
```c
int main() {
    int var;

    printf("Ta garaas buhel too oruulna uu : ");
    scanf("%d",&var);
    int inc = var + 1;
    pritnf("Niilber ni = %d\n",inc);

    return 0;
}
```