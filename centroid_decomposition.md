# Centroid
Тухайн модны массын төв гэж хэлж болохоор.
Тухайн оройг устгахад үлдсэн граф нь салангид хэдэн connected component болж задрах ба аль нь ч N/2 оройгоос бага байдаг орой.

<img src="images/centroid.gif" width="789" height="447" />

Шинж чанар:
1. Ямар ч мод нь дор хаяж нэг centroid-той байна.
2. Centroid-г устгахад 2 өөр connected component-д орж байгаа 2 оройг холбосон path нь заавал centroid-ийг дайрна.

# Centroid  decomposition
Модны centroid нь түүний root байна. 
Түүний child нь centroid-ыг устгахад үүсэх дэд моднуудын centroid нь байна. Гэх мэтчилэн бүх оройг centroid болтол дээрхи үйлдлийг гүйцэтгэхэд үүсэх модыг Centroid decomposition гэнэ.

<img src="images/centroid_decomposition.png" width="958" height="411" />

Шинж чанар:
1. Анхны модны оройг агуулсан байна.
2. Centroid decomposition-ий өндөр нь хамгийн ихдээ log(N) байна.
   Өндөр нь 1-ээр буурахад оройн тоо нь дор хаяж 2 дахин багасах учраас өндөр нь log(N)-ээр буурахад оройн тоо нь 1-ээс бага болсон байна.
3. a болон b оройн хоорондох зай нь Centroid decomposition мод дээрх LCA(a,b) оройг с гэвэл dist(a,b) = dist(a,c)+dist(c,b)-тэй тэнцүү байна.
   LCA(a,b)-г устгахад a болон b салангид 2 хэсэгт орно. Хэрвээ салангид хэсэгт орохгүй бол тэр хэсгийнх нь centroid нь LCA(a,b) болж таарна. a b 2ыг холбох замд нь заавал LCA(a,b) байх учраас dist(a,b) = dist(a,c)+dist(c,b) байна.
4. (Хамгийн гол)Анхны модны бүх боломжит хосуудын хоорондох зай нь centroid decomposition-ийн parent-ууд хүртэлхи бүх боломжит зайнууд болох N * lg(N) боломжит зайнууд дундаас 2-ийг нь нэмсэнтэй тэнцүү байна.(1-р чанараас)


жишээ бодлого: https://codeforces.com/problemset/problem/342/E







source: https://medium.com/carpanese/an-illustrated-introduction-to-centroid-decomposition-8c1989d53308