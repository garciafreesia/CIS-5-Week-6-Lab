#include <iostream>

// Lab 6 — Freesia Garcia
// CIS 5 Week 06 · Even and odd

int main() {

int evenSum = 0;
int oddSum = 0;

// For loop: sum even numbers 0 to 100
for (int i = 0; i <= 100; i += 2)
{
  evenSum += i;
}

// While loop: sum odd numbers 1 to 99
int i = 1;
while (i < 100)

{
  oddSum += i;
  i += 2;
}

std::cout << "Sum of even numbers (0-100): " << evenSum << "\n";
std::cout << "Sum of odd numbers (1-99): " << oddSum << "\n";

  return 0;
}
