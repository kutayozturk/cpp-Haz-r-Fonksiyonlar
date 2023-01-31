# C++ HAZIR FONKSİYONLAR

C++ derleyicileri çok kullanılan bazı fonksiyonları içerirler. Bu fonksiyonlar derleyici dosyalarında
kütüphaneler şeklinde saklanmaktadır. Bu kütüphane fonksiyonları alanlarına göre gruplanarak
kütüphane dosyaları şeklinde saklanmaktadır. Kullanılacağı yerlerde ilgili kütüphane dosyası
programa dahil edilerek fonksiyon çağırılabilir.

### Karakter İşleme Fonksiyonları
Karakterler üzerinde işlem yapan fonksiyonların bulunduğu kütüphanedir. Bu fonksiyonları
kullanabilmek için cctype kütüphanesini programa tanıtmalıyız.
```
#include <cctype>
```
### Dizgi İşleme Fonksiyonları
Karakterlerin bir araya gelerek oluşturduğu diziler ‘dizgi’ olarak adlandırılır. Dizgiler üzerinde işlem
yapan fonksiyonları kullanabilmek için cstring kütüphanesini programa tanıtmalıyız.
```
#include <cstring>
```
### Zaman ve Tarih Fonksiyonları
Zaman ve tarihle ilgili fonksiyonları kullanabilmek için ctime kütüphanesini programa tanıtmalıyız
```
#include <ctime>
```
### Genel Amaçlı Fonksiyonlar
Tamsayı mutlak değer [int abs(x)], bölme işleminde bölüm ve kalan [div(x,y)], rastgele değer üretme
[randomize(x)], en küçük sayıyı bulma [min(x,y)], en büyük sayıyı bulma [max(x,y)] gibi çeşitli
konularla ilgili fonksiyonlar cstdlib kütüphanesinde saklanırlar. Bu fonksiyonları kullanabilmek için
cstdlib kütüphanesini programa tanıtmalıyız.
```
#include <cstdlib>
```
## MATEMATİK FONKSİYONLARI
Sayılar üzerinde matematiksel işlem yapan fonksiyonlar cmath kütüphanesinde saklanırlar.
Matematiksel fonksiyonlar double türündedir. Bu yüzden bu fonksiyonlara parametre olarak verilen
değişkenler de double türünde olmalıdır. Önemli matematiksel fonksiyonlar aşağıda tanıtılmaktadır

| FONKSİYON     | TANIM         |
| ------------- |:-------------:|
|sin(x) | Radyan olarak verilen x açısının sinüsünü hesaplar.|
|cos(x) | Radyan olarak verilen x açısının kosinüsünü hesaplar.|
|tan(x) | Radyan olarak verilen x açısının tanjantını hesaplar.|
|sinh(x) | Radyan olarak verilen x açısının hiperbolik sinüsünü hesaplar.|
|cosh(x) |Radyan olarak verilen x açısının hiperbolik cosinüsünü hesaplar.|
|tanh(x) |Radyan olarak verilen x açısının hiperbolik tanjantını hesaplar.|
|asin(x) |x değerinin ters sinüsünü hesaplar.|
|acos(x) |x değerinin ters cosinüsünü hesaplar.|
|atan(x) |x değerinin ters tanjantını hesaplar.|
|atan2(x) |y/x’in ters tanjantını hesaplar.|
|pow(x,y) |x’in y kuvvetini hesaplar.|
|pow(x,(1/y)) |x’in y kökünü hesaplar.|
|sqrt(x) |x’in karekökünü hesaplar.|
|log(x) |ln(x)’i yani x’in e tabanındaki doğal logaritmasını hesaplar.|
|log10(x) |log(x)’i yani x’in 10 tabanındaki logaritmasını hesaplar.|
|exp(x) |e sayısının x kuvvetini hesaplar.|
|fabs(x) |Ondalıklı x’in mutlak değerini hesaplar.|
|floor(x) |x’ten küçük olan en büyük tamsayıyı bulur.|
|ceil(x) |x’ten büyük olan en küçük tamsayıyı bulur.|


***Önemli Bir Not ve Uyarı:***

Trigonometrik fonksiyonlarda verilen ifadelerin değerini hesaplayabilmek için söz konusu değerleri
radyana çevirmek gerekmektedir. Derece olarak verilen bir x ifadesinin radyan cinsinden değerini
bulmak için ( $\pi \over 180$ x ) dönüşümü yapılmalıdır.
