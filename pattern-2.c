/**********************************************

Input Format

The input will contain a single integer .

Sample Input 0

2
Sample Output 0

2 2 2
2 1 2
2 2 2
Sample Input 1

5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Sample Input 2

7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 

********************************/

#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int arr[2*n][2*n];
    for(int i=0; i<n; i++)
        arr[i][i] = n-i;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
            arr[i][j] = arr[j][j];
        for(int j=i; j<n; j++)
            arr[i][j] = arr[i][i];
    }

    for(int i=0; i<n; i++)
        for(int j=n; j<2*n-1; j++)
            arr[i][j] = arr[i][2*(n-1)-j];

    for(int i=n; i<2*n-1; i++)
        for(int j=0; j<2*n-1; j++)
            arr[i][j] = arr[2*(n-1)-i][j];


    for(int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
