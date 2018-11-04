/*
 * created by Danil Kireev, PFUR NFI-201, 20.09.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //srand((unsigned)time(NULL));
    int n, *A;
    cout << "Введите N: ";
    cin >> n;
    A = new int[n];
    for(int i=0; i<n; i++) {
        //A[i]=rand()%100;
        cout << "введите элементы массива: " << endl;
        cout << "A[" << i << "]=";// << A[i] << " ";
        cin >> A[i];
    }
    cout << endl;

    for(int i=0; i<n; i+=2) cout << "A[" << i << "]=" << A[i] << " ";
    cout << endl;

    for(int i=1; i<n; i+=2) cout << "A[" << i << "]=" << A[i] << " ";
    cout << endl;

    return 0;
}
