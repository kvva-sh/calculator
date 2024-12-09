#include <iostream>

using namespace std;

void showMenu() {
    cout << "계산기 프로그램" << endl;
    cout << "1. 더하기" << endl;
    cout << "2. 빼기" << endl;
    cout << "3. 곱하기" << endl;
    cout << "4. 나누기" << endl;
    cout << "5. 종료" << endl;
    cout << "선택: ";
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 5) {
            break;
        }

        cout << "첫 번째 숫자: ";
        cin >> num1;
        cout << "두 번째 숫자: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "결과: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "결과: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "결과: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "결과: " << num1 / num2 << endl;
                } else {
                    cout << "0으로 나눌 수 없습니다." << endl;
                }
                break;
            default:
                cout << "잘못된 선택입니다." << endl;
        }
    }

    return 0;
}
