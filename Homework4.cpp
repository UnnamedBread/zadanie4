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
int main()
{
    setlocale(LC_ALL, "Russian");
    int one;
    int diff;
    cin >> one;
    cin >> diff;
    srand(time(0));
    const int N = 10;
    int A[N];
    A[0] = one;
    arif(A, N, diff);
    int A3[N];
    fill(A3, N);
    print_array(A3, N);
    cout << counter(A3, N) << endl;
    print_array(A, N);
    
    return(0);
}