# Guess the Number 🎯

A console "Guess the Number" game written in C++. The computer picks a random number, and the player tries to guess it, receiving "higher" or "lower" hints along the way.

## Features

- **3 difficulty levels:**
  - Easy — number from 0 to 100
  - Medium — number from 0 to 9999
  - HARD — number from 0 to 999999, only 5 attempts
- Attempts counter
- Remaining attempts shown in HARD mode
- Input validation
- Win / lose messages

## Screenshot

```
Hii! Please choose what you want to do:
1. Play a game
2. Exit
1

Choose difficulty level (enter a number):
1. Easy (0-100)
2. Medium but still okay (0-9999)
3. HARD (0-999999 AND attempt limit)
1

Make your guess:
50
Pick a smaller number
Current attempts used:  1
25
Pick a bigger number
Current attempts used:  2
...
Slaaaay! Your guess is correct! It was 37
```

## Requirements

- A compiler with **C++11** or newer:
  - MSVC (Visual Studio 2017+)
  - g++ 7+
  - clang++ 5+

## Build & Run

### Requirements

- A C++ compiler with **C++11** or newer:
  - g++ 7+
  - clang++ 5+
  - MSVC (via Developer Command Prompt)

## How to Play

1. Launch the program.
2. Choose the first option **1. Play a game**.
3. Pick a difficulty level:
   - Easy — quick and simple
   - Medium — larger numbers, takes longer to guess
   - HARD — very wide range and only 5 attempts
4. Enter numbers — the program will tell you **higher** or **lower**.
5. Guess the number. In HARD mode — within 5 attempts, otherwise you lose.

