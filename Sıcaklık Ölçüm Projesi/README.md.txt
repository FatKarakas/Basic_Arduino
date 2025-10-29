Bu proje, Arduino ve LM35 sıcaklık sensörü kullanarak ortam sıcaklığını ölçer ve hem LCD ekranda hem de Serial Monitör üzerinden gösterir.

Proje Amacı:
Bu uygulamanın amacı, analog sensör verilerini dijital forma dönüştürmek, elde edilen voltajı sıcaklık değerine çevirmek ve sonucu LCD ekranda görüntülemektir.
Sensörden okunan değerler, voltaj hesabı ile sıcaklık derecesine dönüştürülür. Her 0,01V yaklaşık olarak 1°C sıcaklığa karşılık gelir.


Çalışma Mantığı:
LM35 sensörü ortam sıcaklığına göre çıkış voltajı üretir.
Arduino, bu voltajı analog pin (A0) üzerinden okur.
Okunan değer voltaj olarak hesaplanır.
Voltaj değeri formül (voltaj - 0.5) * 100 ile sıcaklığa çevrilir.
Sonuçlar LCD ekranında ve Serial Monitör'de gösterilir.
