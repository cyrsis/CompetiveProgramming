#include <iostream>

//Counting how many time score appear in the array

int main() {
    int a[11], i, j, t;
    for (int i = 0; i < 10; ++i) {
        a[i] = 0;
    }

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &t);
        a[t]++;
    }


    return 0;
}