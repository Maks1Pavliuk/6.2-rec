#include <iostream>
#include <iomanip> // ��� ���������� ���������
using namespace std;

// ���������� ������� ��� ��������� ������
void printArrayRecursive(int arr[], int index, int size) {
    if (index >= size) { // ���� ������: ���� ������ ������ �� ���
        cout << endl;
        return;
    }
    cout << setw(3) << arr[index];
    printArrayRecursive(arr, index + 1, size); // ����������� ������ ��� ���������� ��������
}

// ���������� ������� ��� ���������� ���� �������� � ������� ���������
int sumEvenIndexRecursive(int arr[], int index, int size) {
    if (index >= size) return 0; // ���� ������: ���� ������ ������ �� ���
    return arr[index] + sumEvenIndexRecursive(arr, index + 2, size); // ����������� ������ � ������ 2
}

// ���������� ������� ��� ��������� ������� �������� � ������� ���������
int countEvenIndexRecursive(int index, int size) {
    if (index >= size) return 0; // ���� ������: ���� ������ ������ �� ���
    return 1 + countEvenIndexRecursive(index + 2, size); // ����������� ������ � ������ 2
}

// ���������� ������� ��� ���������� ���������� �������������
double calculateAverageEvenIndexRecursive(int arr[], int size) {
    int sum = sumEvenIndexRecursive(arr, 0, size);
    int count = countEvenIndexRecursive(0, size);
    return count > 0 ? (double)sum / count : 0.0;
}

// ������� ��������
int main() {
    const int SIZE = 10;
    int arr[SIZE] = { 17, 22, 19, 35, 44, 51, 85, 77, 65, 48 };

    cout << "Original array: ";
    printArrayRecursive(arr, 0, SIZE); // ���������� ��������� ������

    // ���������� ������ ����������� ����� �������
    double average = calculateAverageEvenIndexRecursive(arr, SIZE);

    cout << "Average of elements with even indices (Recursive): " << average << endl;

    return 0;
}
