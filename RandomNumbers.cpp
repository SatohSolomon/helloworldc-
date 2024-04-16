#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));

    // Generate and print 5 random numbers
    for (int i = 0; i < 5; ++i) {
        std::cout << "Random number " << i+1 << ": " << std::rand() << std::endl;
    }

    // Get the current calendar time
    std::time_t currentTime = std::time(nullptr);
    std::cout << "Current time: " << std::ctime(&currentTime);

    return 0;
}