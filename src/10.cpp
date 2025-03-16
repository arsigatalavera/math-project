// This is an example of how you might use std::generate to generate a random number between 1 and 6
std::generate(numbers.begin(), numbers.end(), [] { return static_cast<int>(rand() % 6) + 1; });
