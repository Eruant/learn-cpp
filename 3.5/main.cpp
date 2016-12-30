#include <cmath>
#include <iostream>

bool approximatlyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon) {
  double diff = fabs(a - b);

  if (diff < absEpsilon) {
    return true;
  }

  return diff <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon);
}

int main() {
  double x = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

  std::cout << x << "\n";
  std::cout << approximatlyEqualAbsRel(x - 1.0, 0.0, 1e-12, 1e-8) << "\n";

  return 0;
}
