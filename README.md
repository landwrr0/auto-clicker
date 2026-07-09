# Auto Clicker

A Windows console-based auto clicker built in C++ that simulates 
left mouse clicks at an adjustable speed using the Windows API.

## Features

- Toggle auto clicker on/off with F6.
- Adjustable click speed with + and - keys (numpad)
- Default speed of 10 clicks per second
- Minimum speed protection (cannot go below 1 click per second)
- Real-time console feedback showing current state and speed

## How to Use

1. Run the program
2. Switch to the window you want to auto click in
3. Press F6 to start clicking
4. Press + (numpad) to increase speed
5. Press - (numpad) to decrease speed
6. Press F6 again to stop clicking
7. Close the console window to exit the program

## How to Run

1. Clone the repository
2. Open the project in CLion
3. Make sure your CMakeLists.txt has `set(CMAKE_CXX_STANDARD 20)`
4. Build and run — note this is a Windows-only program
5. Keep the console window open while using the clicker

## Built With

- C++20
- CLion
- Windows API (`Windows.h`)
  - `SendInput()` — simulates mouse clicks
  - `GetAsyncKeyState()` — detects hotkey presses
  - `Sleep()` — controls click speed

## Author
Land Wirya.
Built as a self-directed C++ learning project to practice
Windows API integration, boolean logic, and hotkey detection.
