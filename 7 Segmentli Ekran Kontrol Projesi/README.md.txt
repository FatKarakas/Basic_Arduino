Arduino 7 Segmentli Ekran Kontrol Projesi:
Bu proje, Arduino kullanarak 7 segmentli LED ekranın temel çalışma prensibini gösterir.
Her bir segment ayrı bir Arduino pini ile kontrol edilir. Kod, segmentlerin açık/kapalı durumunu değiştirerek ekranda rakam veya desen oluşturur.

Proje Amacı:
Bu projenin amacı, 7 segmentli ekranın bağlantı yapısını ve kontrol mantığını öğretmektir.
Her segment bir LED gibi davranır ve doğru kombinasyonla 0–9 arasındaki sayılar veya özel semboller gösterilebilir.

Çalışma Mantığı:
7 segmentli ekranın her bacağı (a, b, c, d, e, f, g) bir Arduino dijital pinine bağlanır.
Başlangıçta tüm segmentler HIGH yapılarak hepsi yanar.
digitalWrite(3, LOW) ve digitalWrite(4, LOW) komutları ile ilgili segmentler söndürülür.
Sonuç olarak ekranda belirli bir sayı veya şekil oluşur (örneğin “0” benzeri bir görüntü).
