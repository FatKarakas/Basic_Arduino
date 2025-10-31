Otomatik Oda Işığı Sistemi (LDR ile Işık Kontrolü),
Bu proje, LDR (ışığa duyarlı direnç) kullanarak ortamın ışık seviyesine göre bir LED’in parlaklığını otomatik olarak ayarlayan basit ama öğretici bir Arduino uygulamasıdır.
Ortam karardıkça LED daha parlak yanar, ortam aydınlandıkça yavaşça söner.

Proje Amacı:
Bu uygulamanın amacı, LDR sensöründen alınan veriyi kullanarak:
Ortam ışığı azaldığında LED’in kademeli şekilde yanmasını,
Ortam ışığı arttığında ise LED’in kademeli şekilde sönmesini sağlamaktır.
Bu sistem, enerji tasarruflu otomatik aydınlatma sistemlerinin temelini oluşturur.

Çalışma Mantığı:
LDR ışık aldıkça direnç düşer → Arduino yüksek değer okur.
Ortam karardığında direnç artar → Arduino düşük değer okur.
Bu veriler map() fonksiyonu ile 0–255 aralığına dönüştürülür.
analogWrite() komutu LED’in parlaklığını PWM ile kademeli şekilde ayarlar.

Geliştirme Önerileri:
Buzzer ekleyerek karanlıkta sesli uyarı ekle.
Röle modülü ile gerçek bir ampulü kontrol et.
LCD ekran ile ortam ışık seviyesini göster.
Hareket sensörü (PIR) ekleyerek enerji verimliliğini artır.
