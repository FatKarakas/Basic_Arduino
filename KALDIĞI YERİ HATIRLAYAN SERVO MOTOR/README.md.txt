Servo motorlar tek yönlü PWM sinyaliyle kontrol edilir.Bu kontrolün tek yönlü olması nedeniyle Arduino'ya geri bilgi gelmez.
Arduino servo motoru kontrol ettikten sonra kapatılıp açılırsa, servo motorun en son hangi konumda kaldığını hatırlayamaz. Bu durum bazı projeler için sorun teşkil edebilir.
Servo motorun en son konumunu Arduino'ya hatırlatmak için, servoyu kontrol ettikten sonra Arduino'nun EEPROM'una en son yollanan açıyı kaydedeceğiz. 
Böylece Arduino'nun gücü kesilip tekrar başlatılsa bile, servo motor en son konumundan başlayacak.
Kodda açı ve yön bilgisi EEPROM'a kaydedildiği için Arduino'nun gücü kesilse bile, Arduino'ya tekrar güç verildiğinde servo motor kaldığı yerden çalışmaya devam edecektir.
