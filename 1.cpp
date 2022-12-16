#include <iostream>

using namespace std;

pair<int*, int>vvod(){
    int *arr = new int[100000];
    int t = 0;
    int x;
    while(t<100000){
        cin>>x;
        if(x==0) break;
        arr[t] = x;
        t++;
    }
    return {arr, t};
}

pair<int*, int> min_5(int* arr, int N){
    int k = 0;
    for(int i = 0; i<N; i++){
        if(arr[i]<5) k++;
    }
    int* arr2 = new int[k];
    int j = 0;
    for(int i = 0; i<N; i++){
        if(arr[i]>=5) {
            arr2[j] = arr[i];
            j++;
        }
    }
    return {arr2, k};
}

int main (){
    auto T = vvod();
    for(int i = 0; i<T.second; i++) cout<<T.first[i]<<" ";
    auto arr_2 = min_5(T.first, T.second);
    cout<<endl;
    for(int i = 0; i<arr_2.second; i++) cout<<arr_2.first[i]<<" ";






    /*
     * Задание 1: не используя std::vector написать динамический массив,
     * куда пользователь вводит натуральные числа, а они добавляются в конец,
     * при этом пользователь может вводить сколько угодно значений, поэтому
     * выделить память под 100000, а потом сказать, что много нельзя. Условия выхода из цикла: пользователь ввел 0.
     * Оформить в виде функции, которая возвращает массив и его длину.
     *
     * Задание 2: написать функцию, которая из массива, полученного в задании 1, удаляет все значения,
     * меньше чем 5, и возвращет отредактированный массив и его длину.
     *
     * Возможно пригодится: синтаксис pair<int, int>
     * */


    return 0;
}

















