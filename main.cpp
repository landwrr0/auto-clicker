#include <iostream>
#include <Windows.h> // Windows API for send input, GetAsyncKeyState, sleep()

using namespace std;

int main() {

    bool isClicking = false;
    int clicksPerSecond = 10; // default click speed *can be changed*
while (true) {
    if (GetAsyncKeyState(VK_F6) & 0x8000) { // F6 to toggle
        isClicking = !isClicking; // flips
        Sleep(200); // debounce amount can be changed 150-300 preferable

        if (isClicking == false) {
            cout << "AUTOCLICKER OFF." << '\n';
        }
        else {
            cout << "AUTOCLICKER ON." << '\n';
        }
    }
        if (GetAsyncKeyState(VK_ADD) & 0x8000) { // + key increase by 1
            clicksPerSecond += 1;
            cout << "+ " << clicksPerSecond << '\n';
            Sleep(200);
        }

        if (GetAsyncKeyState(VK_SUBTRACT) & 0x8000) { // key - decrease by 1
            if (clicksPerSecond > 1) { // prevents the speed from going below 1
                clicksPerSecond -= 1;
                cout << "- " << clicksPerSecond << '\n';
                Sleep(200);
            }
        }

    if (isClicking) {
        INPUT input[2] = {};
        input[0].type = INPUT_MOUSE;
        input[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
        input[1].type = INPUT_MOUSE;
        input[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
        SendInput(2, input, sizeof(INPUT));
        Sleep(1000 / clicksPerSecond);
    }
}
return 0;
}