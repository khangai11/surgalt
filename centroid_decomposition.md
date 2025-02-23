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

[Centroid decomposition](images/centroid_decomposition.png)



жишээ бодлого: https://codeforces.com/problemset/problem/342/E







source: https://medium.com/carpanese/an-illustrated-introduction-to-centroid-decomposition-8c1989d53308