#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if ((lhs==nullptr) || (rhs==nullptr)){
    } else {
        int temp = *lhs;
        *lhs = *rhs;
        *rhs = temp;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if ((num_cols<=0) || (num_rows<=0)){
        return nullptr;
    }
    else {
        int **array = new int* [num_rows]();
        for (int i=0; i < num_rows; i++) {
            array[i] = new int[num_cols]{};
        }
        for (int i=0; i<num_rows; i++){
            for (int j=0; j<num_cols; j++){
                array[i][j]=init_value;
            }
        }
        return array;
    }

}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if ((num_cols<=0) || (num_rows<=0) || (arr_2d_source== nullptr) || (arr_2d_target == nullptr)){
        return false;
    } else {
        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                arr_2d_target[i][j] = arr_2d_source[i][j];
            }
        }
        return true;
    }
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int n = arr.size() - 1;
    for (int i = 0; i < arr.size() / 2; ++i) {
        int k;
        k = arr[i];
        arr[i] = arr[n];
        arr[n] = k;
        n--;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if ((arr_begin==nullptr) || (arr_end==nullptr)){
    } else {
        while (arr_begin<arr_end){
            int temp = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = temp;
            arr_begin++;
            arr_end--;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if ((arr== nullptr) || (size<=0)){
        return nullptr;
    } else {
        int *max = arr;
        for (int i=0; i<size; i++){
            if (*arr>*max) {
                max = arr;
            }
            arr++;
        }
        return max;
    }

}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    for (int i=0; i<arr.size(); i++){
        if (arr[i]%2==0){
            arr.erase(arr.begin()+i);
            i--;
        }
    }
    return arr;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> array;
    for (int i=0; i<arr_a.size(); i++){
        for (int j=0;j<arr_b.size(); j++){
            if (arr_a[i]==arr_b[j]){
                array.insert(array.end(), arr_a[i]);
            }
        }
    }
    return array;
}
