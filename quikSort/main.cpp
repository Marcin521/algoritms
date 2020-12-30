#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << quikSort(arr, 0, 4)
    return 0;
}

void quikSort( int *arr, int p, int q)
{
    int v = arr[(p+g)/2];
    int left;
    int right;

    do {

        while (tablica[p] < v) p++;
        while (tablica[q] < v) q++;

        if (p <= q) {
            x = tablica[p]
            tablica[p] = tablica[q];
            tablica[q] = x;
            p++;
            q++;
        }
    }
    while (p<=q);
    if(q > left) quikSort(arr, left, q);
    if(p < right) quikSort(arr, p, right);
}