#include <iostream>
#include <random>
#include <cmath>
#include <string>

int generateRandomNumber(int a)
{
    static std::mt19937 gen(std::random_device{}());

    switch (a) {
    case 1: {
        std::uniform_int_distribution<int> dist(0, 100);
        return dist(gen);
    }
    case 2: {
        std::uniform_int_distribution<int> dist(0, 9999);
        return dist(gen);
    }
    case 3: {
        std::uniform_int_distribution<int> dist(0, 999999);
        return dist(gen);
    }
    default: {
        std::uniform_int_distribution<int> dist(0, 100);
        return dist(gen);
    }
    }
}

void showAttempts(int a, bool isUsed) {
    if (isUsed)
    {
        std::cout << "Current attempts used:\t" << a << "\t";
    }
    else
    {
        std::cout << "Current attempts used:\t" << a << "\t";
    }
    
}

bool checkInput(int& a) {
    if (!(std::cin >> a)) {
        std::cout << "Invalid input\n";
        return false;
    }
    return true;
}


void startGame() {
    std::cout << "Choose difficulty level (enter a number):\n"<< "1. Easy (0-100)\n" << "2. Medium but still okay (0-9999)\n" << "3. HARD (0-999999 AND attempt limit)\n";

    int difficultyLevel{}, number{}, guess{}, attemptsUsed{0};

    if (!checkInput(difficultyLevel)) return;

    number = generateRandomNumber(difficultyLevel);

    if (difficultyLevel == 3) {
        std::cout << "You have 5 attempts only. Pick wisely!\n";
    }

    std::cout << "Make your guess: " << '\n';

    bool hasLimit = (difficultyLevel == 3);
    int attemptsLeft = hasLimit ? 5 : 0;

    do {
        if (!checkInput(guess)) return;

        attemptsUsed += 1;
        if (hasLimit) --attemptsLeft;

        if (guess > number)
        {
            std::cout << "Pick a smaller number\n";
            showAttempts(attemptsUsed, 1);
            if (hasLimit) showAttempts(attemptsLeft, 0);
        }
        else if (guess < number)
        {
            std::cout << "Pick a bigger number\n";
            showAttempts(attemptsUsed, 1);
            if (hasLimit) showAttempts(attemptsLeft, 0);
        }

    } while (number != guess && (!hasLimit || attemptsLeft > 0));

    if (number == guess) {
        std::cout << "Slaaaay! Your guess is correct! It was " << number << "\n";
    }
    else {
        std::cout << "You lost(( the number was: " << number << "\n";
    }
}

int main()
{
    int choice{};
    std::cout << "Hii! Please choose what you want to do:\n" << "1. Play a game\n" << "2. Exit\n";

    std::cin >> choice;

    switch (choice) {
        case 1:
        {
            startGame();
            break;
        }
        case 2:
        {
            return 0;
        }
        default:
        {
            std::cout << "idk what you picked\n";
            break;
        }
    }

    return 0;
}