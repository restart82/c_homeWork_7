#include <stdio.h>

// Считать массив из 10 элементов и отобрать в другой массив все числа, у
// которых вторая с конца цифра (число десятков) – ноль.

#define ARRAY_SIZE 10

void scanArrray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }
}

void printArray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* secondZero(int arr_1[], int size)
{
    int j = 0;
    int arr_2[size];
    for (size_t i = 0; i < size; i++)
    {
        if ((arr_1[i] / 10) % 10 == 0)
        {
            arr_2[j] = arr_1[i];
            j++;
        }
    }
    return arr_2;
}

int main(int argc, char const *argv[])
{
    int arrayA[ARRAY_SIZE], arrayB[ARRAY_SIZE];
    scanArrray(arrayA, ARRAY_SIZE);
    //secondZero(arrayA, ARRAY_SIZE);
    *arrayB = secondZero(arrayA, ARRAY_SIZE);
    printArray(arrayB, 4);

    return 0;
}
