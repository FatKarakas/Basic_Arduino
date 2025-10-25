Arduino 16 Tuşlu Mini Piyano Projesi:
Bu proje, Arduino kullanarak 16 tuşlu basit bir mini piyano yapmanızı sağlar.
Her bir butona bastığınızda farklı bir müzik notası (frekans) buzzer üzerinden çalınır.

Proje Amacı:
Dijital giriş/çıkış pinlerinin nasıl kullanılacağını öğrenirsiniz.
tone() fonksiyonu ile ses üretmeyi öğrenirsiniz.
Frekans-melodi ilişkisini kavrayarak elektronik müzik sistemlerine giriş yaparsınız.

Çalışma Prensibi
Arduino sürekli olarak tüm 16 butonu tarar.
Bir butona basıldığında, ilgili nota frekansı tone() fonksiyonu ile buzzer’da çalınır.
200 ms sonra ses kapanır ve kısa bir gecikme eklenir.
Her buton farklı bir müzik notasına karşılık gelir.

Geliştirme Önerileri:
Buton sayısını azaltıp basit melodi tuşları oluşturabilirsiniz.
LED ekleyerek hangi notanın çalındığını gösterebilirsiniz.
Potansiyometre ile ses yüksekliğini kontrol etmeyi deneyin.
LCD ekran ekleyip nota adını gösterebilirsiniz.
