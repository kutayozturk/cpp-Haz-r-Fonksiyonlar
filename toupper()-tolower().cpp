#include <iostream>

int main() {

  setlocale(LC_ALL,"Turkish");

  char ch = 'a';
  char uppercaseCh = std::toupper(ch);
  // Aynı şekilde tolower() fonksiyonu kullanıkarak büyük harfler, küçük harflere dönüştürülür.
  
  std::cout << "Büyük Harf Karşılığı: " << uppercaseCh << std::endl;
  return 0;
}
