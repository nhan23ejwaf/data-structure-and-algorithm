#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int b1[n1], b2[n2];
    for (int i = 0; i < n1; i++) b1[i] = a[left + i];
    for (int i = 0; i < n2; i++) b2[i] = a[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (b1[i] <= b2[j]) {
            a[k++] = b1[i++];
        } else {
            a[k++] = b2[j++];
        }
    }
    while (i < n1) {
        a[k++] = b1[i++];
    }
    while (j < n2) {
        a[k++] = b2[j++];
    }
}

void mergesort(int a[], int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergesort(a, left, mid);
    mergesort(a, mid + 1, right);

    merge(a, left, mid, right);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mergesort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
