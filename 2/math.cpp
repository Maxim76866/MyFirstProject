#include <iostream>

using namespace std;

void exercise() {
    int n;
    cout << "Введите номер элемента: ";
    cin >> n;

    // Начальная последовательность
    int seq[10000]; // выделяем достаточно большой массив (удобно под задачу с n ~ 2023)
    seq[0] = 2;
    seq[1] = 0;
    seq[2] = 2;
    seq[3] = 3;

    if (n <= 4) {
        cout << "Элемент под номером " << n << " = " << seq[n - 1] << endl;
    }

    for (int i = 4; i < n; i++) {
        // Собираем последние 4 числа
        int last_four[4];
        for (int j = 0; j < 4; j++) {
            last_four[j] = seq[i - 4 + j];
        }

        // Ищем минимальное неотрицательное число, не входящее в last_four
        int candidate = 0;
        bool found;
        do {
            found = false;
            for (int k = 0; k < 4; k++) {
                if (last_four[k] == candidate) {
                    found = true;
                    break;
                }
            }
            if (found)
                candidate++;
        } while (found);

        seq[i] = candidate;
    }

    cout << "Элемент под номером " << n << " = " << seq[n - 1] << endl;
}