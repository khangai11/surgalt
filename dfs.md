# Depth-first search(DFS)
Граф дээр хайлт хийх, алхах хамгийн энгийн бөгөөд түгээмэл ашиглагддаг алгоритм.
DFS нь очоогүй байгаа элемент олдох л юм бол хамгийн түрүүнд тэр орой дээрээ очдог алгоритм.

Доорхи байдлаар ажиллана.
1. Графын эхлэлийн цэгийг сонгоно.
2. Одоо байгаа оройтой холбоотой, очоогүй байгаа орой байвал тэр орой луу шилжинэ.
3. Одоо байгаа оройтой холбоотой оройнуудад бүгдэд нь очсон бол, өмнөх орой луугаа шилжинэ.
4. Эхлэлийн цэгтэй холбоотой бүх орой дээр очсон бол дуусгана.

![Alt](/images/dfs.png)

Яаж програм бичих вэ
1. Stack ашиглах
   1. Орой болгон дээр очсон эсэхээ visited[N] дээр хадгалах. Дараагын удаа очих оройнуудаа хадгалах stack<int> s бэлдэнэ.
   2. s дотор эхлэлийн цэгээ нэмнэ.
   3. s рүү хамгийн сүүлд нэмсэн орой(u-гэе)-г сонгож аваад, тэр оройг s-ээс хасна.
   4.  u-тэй холбоотой бүх оройн хувьд очоогүй байгаа орой(v-гэе) нуудаа s дотор нэмээд, visited[v]=true болгоно.
   5.  s дотор элемент байвал iii-ийн үйлдэл рүү буцна.
   ```cpp
   //n ширхэг оройтой граф өгөгдсөн гэж бодоё.
   // хөршүүдийн жагсаалт хэлбэрээр e  дотор хадгалсан гэж үзье.
   vector<vector<int>> e(n);
   stack<int> s;
   vector<bool> visited(n,false);
   //ehleh oroi
   int start = 0;
   s.push(start);
   while(!s.empty()){
    //daraagiin songoh oroi
    int u = s.top();
    s.pop();
    //holbootoi oroinuudiig stack ruugaa nemne.
    for(auto v:e[u]){
        if(!visited[v]){
            s.push(v);
            visited[v] = true;
            cout<<v<<" ";
        }
    }
   }
   ```
2. Recursive function ашиглах
   1. stack ашиглах аргатай адилхан графын хөршүүдийн жагсаалт e болон очсон эсэхийг тэмдэглэх visited ашиглана.
   2. dfs(u) гэсэн функц тодорхойльё. Энэ функц нь u-тэй холбоотой очоогүй байгаа оройнууд дээр очдог функц гэе.
   3. dfs(эхлэлийн цэг) гэхэд бүх орой дээр очиж чадна.
   ```cpp
   void dfs(int u){
        if(visited[u]) return;
        visited[u] = true;
        for(auto v:e[u]){
            if(visited[v]) continue;
            dfs(v);
        }
   }
   ```
