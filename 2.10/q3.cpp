#include <iostream>

double requestNumber() {
  std::cout << "Enter a number: ";

  double x;
  std::cin >> x;

  return x;
}

char requestSymbol() {
  std::cout << "Enter a symbol (+, -, * or /): ";

  char x;
  std::cin >> x;

  return x;
}

double calculateResult(const double x, const double y, const char symbol) {
  switch (symbol) {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/': return x / y;
  }

  return 0;
}

void printResult(const double x) {
  std::cout << "The solution is " << x << std::endl;
}

int main() {
  const double x = requestNumber();
  const double y = requestNumber();
  const char symbol = requestSymbol();

  if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
    const double result = calculateResult(x, y, symbol);
    printResult(result);
  }

  return 0;
}
