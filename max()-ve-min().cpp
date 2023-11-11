// Maksimum ve Minumum Değerler Fonksiyonları

#include <iostream>

int main() {
  int a = 5;
  int b = 8;
  
  int maxDeger = std::max(a, b);
  std::cout << "Maksimum Değer: " << maxDeger << std::endl;
  
  int minDeger = std::min(a, b);
  std::cout << "Minumum Değer: " << minDeger << std::endl;
  return 0;
}
