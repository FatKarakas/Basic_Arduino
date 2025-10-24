Uygulamada uzaklık sensörünü servo motorun üzerine bağlayarak, 0-180 derece arasındaki cisimlerin uzaklığını bulan basit bir radar yapacağız.
Bunun için servo motoru 10 derecelik açılarla döndürüp, o açıdaki maksimum uzaklığı ölçeceğiz.
Uzaklığı daha kolay ölçebilmek için bu uygulamamızda "mesafeOlcumu” fonksiyonunu tanımlayacağız.
Servonun 10'ar derecelik açılarla dönmesini sağlayabilmek için 2 tane for döngüsü kullanılacaktır.
Her 10 derecelik açılardaki maksimum uzaklıklar bilgisayardan görüntülenebilmesi için seri port yardımıyla USB üzerinden bilgisayara yollanacaktır

NOT:
Eğer sensörün ölçüm mesafesi içinde engel yoksa, sensörde bir miktar yavaşlama olmaktadır. 
Bu durumdan kurtulmak için, eğer sensörün önünde engel yoksa zaman aşımına uğraması için pulseIn fonksiyonunu güncelledik. 
Böylece belirli bir uzaklıkta engel yoksa sistem beklemeden çalışmaya devam edecektir.
PulseIn fonksiyonuna yazılan 2895 değeri sensöre ve ortama göre değişiklik gösterebilir.
