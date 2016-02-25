#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0,i, j, k, sum=0, count=0;
    printf("N= ");
    scanf("%d", &N);
    int data[N][N];
    int dia[N];
    double avr;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("A[%d,%d]= ",i,j);
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i>j){
                count++;
                avr+=data[i][j];
            }
            if(i<j){
                sum+=data[i][j];
            }
            if(i==j){
                dia[i] = data[i][j];
            }
            printf("%d\t",data[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal =>\n");
    for(k=0;k<N-1;k++){
        printf("%d, ", dia[k]);
    }
    printf("%d", dia[N-1]);
    printf("\n");
    avr/=count;
    printf("Average= %.2f\n",avr);
    printf("Suma= %d\n",sum);
    system("pause");
    return 0;
}
