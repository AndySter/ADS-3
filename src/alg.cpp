// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int k = 0;
  int min = 0;
  int max = size-1;
  int mid = (max+min)/2;
  if (value <= arr[mid]) {
      for (int i=mid; i >= min; i--) {
          if (arr[i] == value)
          k++;
          if (arr[i] != value and k != 0)
          break;
      }
  }
  if (value >= arr[mid]) {
      for (int i=mid+1; i<=max; i++) {
          if (arr[i] == value)
          k++;
          if (arr[i] != value and k != 0)
          break;
      }
  }
  if (k != 0)
  return k;
  return 0; // если ничего не найдено
}
