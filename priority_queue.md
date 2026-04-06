# stl::priority_queue

Priority queue нь multiset-тэй төстэй, Гэхдээ balanced binary search tree биш heap structure ашигладаг. Heap нь binary search tree-г бодвол арай хурдан.

| код | O(?) |тайлбар |
|---|---|---|
| priority_queue\<int\> q; | O(1) | int төрлийн утга хадгалах, хамгийн том элементээс нь авч болдог queue үүсгэх |
| priority_queue\<int,vector\<int\>,greater\<int\>\> q; | O(1) | int төрлийн утга хадгалах, хамгийн жижиг элементээс нь авч болдог queue үүсгэх |
| q.push(x); | log(n) | priority_queue рүү х элемент нэмнэ. |
| q.pop(); | log(n) | priority_queue-ээс хамгийн том элементийг нь авч хаях. |
| int a = q.top(); | O(1) | Priority_queue-ийн хамгийн том элементийн утгыг нь буцаана. |

```cpp
//n ширхэг тооны эхний i ширхэг элементийн хамгийн томыг нь хэвлэх
#define ll long long
vector<ll> a(n);
priority_queue<ll> q;
for(int i=0;i<n;i++){
    q.push(a[i]);
    cout<<q.top()<<"\n";
}
```

Дасгал1. Өгсөн N ширхэг натурал тоонуудын хамгийн том 5н тоог хэвлэ.
Жишээ оролт: <br>
10 <br>
4 5 3 9 3 11 34 3 8 8 <br>
гаралт:<br>
34 11 9 8 8<br>
