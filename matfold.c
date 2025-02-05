#include <stdio.h>
int main()
{   int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the values of the matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int m=(n%2==0)?n/2:n/2+1;
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[n-i-1][j]*a[i][j];
        }
    }
    int c[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            c[i][j]=b[i][n-j-1]*b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//This is a test file for my GitHub assignment.
//Now I have made a change in the feature branch.

