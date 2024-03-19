#include <iostream>
using namespace std;


unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "¬ведiть число: ";
    cin >> n;

    if (n < 0) {
        cout << "‘акторiал визначений лише дл€ не в≥д'Їмних чисел." << endl;
    }
    else {
        unsigned long long result = factorial(n);
        cout << "‘акторiал " << n << " = " << result << endl;
    }

    return 0;
}
