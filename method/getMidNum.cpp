//
// Created by hamance on 2016/10/9.
//

#include "getMidNum.h"

#include <iostream>
#include <cassert>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int left, int right) {
    if (array == NULL) {
        return -1;
    }
    int pos = right;
    right--;
    while (left <= right) {
        while (left < pos && array[left] <= array[pos]) {
            left ++;
        }
        while (right >=0 && array[right] > array[pos]) {
            right --;
        }
        if (left >= right) {
            break;
        }
        swap(&array[left], &array[right]);
    }
    swap(&array[left], &array[pos]);
    return left;
}



int getMidNum(int* array, int size) {
    if (array == NULL) {
        return -1;
    }

    int left = 0;
    int right = size -1;
    int midPos = right >> 1;
    int index = -1;

    while (index != midPos) {
        index = partition(array, left, right);
        if (index < midPos) {
            left = index + 1;
        } else if (index > midPos){
            right = index - 1;
        } else {
            break;
        }
    }
    assert(index==midPos);
    cout<<array[3]<<endl;
    return array[index];
}

int findKMin(int* array, int size, int k) {
    if (array == NULL || size <= 0) {
        return -1;
    }

    int left = 0;
    int right = size -1;
    int index = -1;

    while (index != k) {
        index = partition(array, left, right);
        if (index < k) {
            left = index + 1;
        } else if (index > k) {
            right = index - 1;
        } else {
            break;
        }
    }

    assert(index ==k);
    return array[index];
}

void testGetMidNum(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    const int size = sizeof(array)/ sizeof(*array);

    cout<<getMidNum(array, size);
    cout<<findKMin(array, size, 4);
}