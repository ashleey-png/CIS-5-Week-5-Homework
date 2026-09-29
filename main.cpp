#include <iostream>

// Homework 5 — Ashley Duran
// CIS 5 Week 05 · Rule engine lite

int main()
{
  int score = 0;
  int attendance = 0;

  // TODO: cout question, then cin, for score and for attendance
  std::cout << "Enter your course score: ";
  std::cin >> score; // it taking user answer and stores it as variable

  std::cout << "Enter your attendance percentage: ";
  std::cin >> attendance;

  // Edge values: (list just-below / exactly-on / just-above for each threshold here)

  // TODO: invalid branch FIRST — out-of-range input gets its own message
  //   if (score < 0 || score > 100) { ... }
  // TODO: else if ( ... && ... ) { ... }   best outcome
  // TODO: else if ( ... ) { ... }          middle outcome
  // TODO: else { ... }                     the rest

  if (score < 0 || score > 100)
  {
    std::cout << "Nah, you lying.";
  }
  else if (score >= 70 && attendance >= 75)
  {
    std::cout << "Ayyyee! You pass.";
  }
  else if (score >= 70 && attendance < 75)
  {
    std::cout << "Watch it. Go to class.";
  }
  else
  {
    std::cout << "Maybe next time. F";
  }

  // TODO: two comments that explain a choice (why invalid first, why && not ||, why >= not >)
  // The invalid branch is ideally created to run first as it would lower the risk of a number greater than 100 accidentally running past other conditions.
  // I used && instead of || because we want our user to meet both requirements/conditions in order be passing. If I would have used ||, the user would only have to meet one or another condition.
  return 0;
}
