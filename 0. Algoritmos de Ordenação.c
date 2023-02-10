//Implementar quatro algoritmos de ordenação, incluindo o SelectionSort, InsertionSort, MergeSort e Quicksort.

//Analisar empiricamente e discutir o custo das implementações





//Selection Sort

#include <stdio.h>
#include <time.h>

void imprimir(int vet[], int tam)
{
    int i;
    for (i=0; i < tam; i++)
        printf("%d ", vet[i]);
    printf("\n");
}
 
void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void SelectionSort(int vet[], int n)
{
    int i, j, min;
 
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
            if (vet[j] < vet[min])
                min = j;
            if(min != i)
                troca(&vet[min], &vet[i]);
    }
}
int main()
{
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    int vet[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(vet)/sizeof(vet[0]);
    SelectionSort(vet, n);
    imprimir(vet, n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f", cpu_time_used);
    return 0;
    
}


//Insertion Sort

#include <stdio.h>
#include <time.h>
void imprimir(int vet[], int n) {     
  for (int i = 0; i < n; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");
}
void insertionSort(int vet[], int n) {
  for (int i = 1; i < n; i++) {
    int temp = vet[i];
    int j = i - 1;

    
    while (temp < vet[j] && j >= 0) {
      vet[j + 1] = vet[j];
      --j;
    }
    vet[j + 1] = temp;
  }
}
 int main() {
        clock_t start, end;
        double cpu_time_used;
	   start = clock();
        int vet[] = {1,2,3,4,5,6,7,8,9,10};
        int n = sizeof(vet) / sizeof(vet[0]);
        insertionSort(vet, n);
        imprimir(vet, n);
        
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("%f", cpu_time_used);
    return 0;
 }


//Merge Sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Sort(int vet[], int esq, int m, int dir)
{
	int i, j, k;
	int n1 = m - esq + 1;
	int n2 = dir - m;

	int Esq[n1], Dir[n2];

	for (i = 0; i < n1; i++)
		Esq[i] = vet[esq + i];
	for (j = 0; j < n2; j++)
		Dir[j] = vet[m + 1 + j];

	i = 0;
	j = 0;
	k = esq;
	while (i < n1 && j < n2) {
		if (Esq[i] <= Dir[j]) {
			vet[k] = Esq[i];
			i++;
		}
		else {
			vet[k] = Dir[j];
			j++;
		}
		k++;
	}


	while (i < n1) {
		vet[k] = Esq[i];
		i++;
		k++;
	}


	while (j < n2) {
		vet[k] = Dir[j];
		j++;
		k++;
	}
}

void MergeSort(int vet[], int esq, int dir)
{
	if (esq < dir) {
		int m = esq + (dir - esq) / 2;
		MergeSort(vet, esq, m);
		MergeSort(vet, m + 1, dir);

		Sort(vet, esq, m, dir);
	}
}

void imprimir(int Vetor[], int tam)
{
	int i;
	for (i = 0; i < tam; i++)
		printf("%d ", Vetor[i]);
	printf("\n");
}

int main()
{
    clock_t start, end;
    double cpu_time_used;
	start = clock();

	int vet[] = {};
	int tam = sizeof(vet) / sizeof(vet[0]);
    
	MergeSort(vet, 0, tam - 1);
	imprimir(vet, tam);
	end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f", cpu_time_used);
	return 0;
}


//Quick Sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
void QuickSort(int *a, int esq, int dir) {
    int i, j, x, y;
     
    i = esq;
    j = dir;
    x = a[(esq + dir) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < dir) {
            i++;
        }
        while(a[j] > x && j > esq) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esq) {
        QuickSort(a, esq, j);
    }
    if(i < dir) {
        QuickSort(a, i, dir);
    }
}

int main()
{
        clock_t start, end;
        double cpu_time_used;
        start = clock();
	     int i;
         int vet[] = {1,2,3,4,5,6,7,8,9,10};
         QuickSort(vet, 0, MAX - 1);
          for(i = 0; i < MAX; i++)
        {
        printf("%d ", vet[i]);
        }
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("%f", cpu_time_used);
 return 0;
}

