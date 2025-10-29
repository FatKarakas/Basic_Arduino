Bu proje, HC-SR04 ultrasonik sensör kullanarak nesneye olan mesafeyi ölçer ve sonucu LCD ekranda ve Serial Monitör üzerinde gösterir.

Proje Amacı:
Bu projenin amacı, HC-SR04 ultrasonik sensörün çalışma mantığını anlamak, sensörden gelen ses dalgalarının yankı süresini ölçmek ve bunu mesafeye çevirmektir.
Elde edilen mesafe değeri hem LCD ekranda hem de bilgisayar ekranında (Serial Monitor) gösterilir.

Çalışma Mantığı:
HC-SR04 sensörü, trig pini aracılığıyla ses dalgaları gönderir.
Bu dalgalar bir engele çarparak geri döner.
Echo pini, sesin geri dönme süresini ölçer.
Ölçülen süre mesafe = (sure * 0.03432) / 2 formülüyle santimetreye dönüştürülür.
Sonuç hem LCD ekranda hem de Serial Monitör üzerinde gösterilir.
