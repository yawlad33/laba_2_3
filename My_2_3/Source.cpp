#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

    const int N = 10;
    int arr[N];

    cout << "Заполните массив: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Введите значение для " << i + 1 << " элемента массива: ";
        cin >> arr[i];
    }
    int temp;
    // Сортировка массива пузырьком
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";


	return 0;
}















