#include <iostream>
using namespace std;

void print_array(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
int random() {
    return rand() % 1001 + 1000;
}
void fill(int A[], int size) {
    for (int i = 0; i < size; i++) {
        A[i] = random();
    }
}
int counter(int A[], int size) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (((A[i] / 10) % 10) % 2 == 0)
            k = k + 1;
    }
    return k;
}
void arif(int A[], int size, int diff) {
    for (int i = 1; i < size; i++) {
        A[i] = A[i - 1] + diff;
    }
}
void zadacha1(int A[], int size) {
    int one;
    int diff;
    cin >> one;
    cin >> diff;
    A[0] = one;
    arif(A, size, diff);
    print_array(A, size);
}
void zadacha2(int A[], int size) {
    for (int i = 0; i < size; i++) {
        A[i] = i + 1;
    }
    int k;
    for (int i = size-1; i > 0; i--) {
        k = rand() % i;
        swap(A[i], A[k]);
    }
    print_array(A, size);
}
void zadacha3(int A[], int size){
    fill(A, size);
    print_array(A, size);
    cout << counter(A, size) << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int N = 10;
    int A[N];
    int A2[N];
    int A3[N];
    zadacha1(A, N);
    zadacha2(A2, N);
    zadacha3(A3, N);
    return(0);
}