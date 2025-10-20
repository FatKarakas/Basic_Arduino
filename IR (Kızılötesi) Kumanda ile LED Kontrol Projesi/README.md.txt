Arduino IR Sensör ile LED Kontrolü:
Bu proje, IR (kızılötesi) sensör kullanarak bir LED’i uzaktan kumanda ile kontrol etmeyi amaçlamaktadır.
Belirli bir tuşa ait IR sinyal kodu algılandığında LED yanar, farklı bir sinyal geldiğinde ise söner.

Proje Amacı:
Uzaktan kumanda ile Arduino üzerindeki bir LED’in açılıp kapanmasını sağlamak.
IR sensör, kumandadan gelen sinyali algılar ve önceden belirlenmiş veri (localData) ile eşleştiğinde LED yanar.

Çalışma Mantığı:
IR sensör, kumandadan gelen sinyali okur.
Okunan sinyalin kodu seri monitörde görüntülenir.
Kod localData değeriyle eşleşirse LED yanar.
Farklı bir tuş veya sinyal geldiğinde LED söner.
