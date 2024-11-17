#include <iostream>
#include <iomanip> // для форматного виведення
using namespace std;

// Рекурсивна функція для виведення масиву
void printArrayRecursive(int arr[], int index, int size) {
    if (index >= size) { // База рекурсії: якщо індекс вийшов за межі
        cout << endl;
        return;
    }
    cout << setw(3) << arr[index];
    printArrayRecursive(arr, index + 1, size); // Рекурсивний виклик для наступного елемента
}

// Рекурсивна функція для обчислення суми елементів з парними індексами
int sumEvenIndexRecursive(int arr[], int index, int size) {
    if (index >= size) return 0; // База рекурсії: якщо індекс вийшов за межі
    return arr[index] + sumEvenIndexRecursive(arr, index + 2, size); // Рекурсивний виклик з кроком 2
}

// Рекурсивна функція для підрахунку кількості елементів з парними індексами
int countEvenIndexRecursive(int index, int size) {
    if (index >= size) return 0; // База рекурсії: якщо індекс вийшов за межі
    return 1 + countEvenIndexRecursive(index + 2, size); // Рекурсивний виклик з кроком 2
}

// Рекурсивна функція для обчислення середнього арифметичного
double calculateAverageEvenIndexRecursive(int arr[], int size) {
    int sum = sumEvenIndexRecursive(arr, 0, size);
    int count = countEvenIndexRecursive(0, size);
    return count > 0 ? (double)sum / count : 0.0;
}

// Основна програма
int main() {
    const int SIZE = 10;
    int arr[SIZE] = { 17, 22, 19, 35, 44, 51, 85, 77, 65, 48 };

    cout << "Original array: ";
    printArrayRecursive(arr, 0, SIZE); // Рекурсивне виведення масиву

    // Обчислюємо середнє арифметичне через рекурсію
    double average = calculateAverageEvenIndexRecursive(arr, SIZE);

    cout << "Average of elements with even indices (Recursive): " << average << endl;

    return 0;
}
