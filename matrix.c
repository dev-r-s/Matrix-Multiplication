#include<stdio.h>
#include<math.h>
void main()
{   char ch;
    do{
    float a[10][10],b[10][10],c[10][10];
    int n,m,q,p,i,j,k;
    printf("\n Enter the number of Row in first matrix(Matrix A):");
    scanf("%d",&n);
    printf("\n Enter the number of column of first matrix(Matrix A): ");
    scanf("%d",&m);
    printf("\n Enter the number of Row in second matrix(Matrix B):");
    scanf("%d",&p);
    printf("\n Enter the number of column of second matrix(Matrix B): ");
    scanf("%d",&q);
    if((m==p)||(m==n==p==q))
    {
      printf("\n Enter the value of Matrix A:\n");
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=m;j++)
          {
              printf("Enter the value A[%d][%d]:",i,j);
              scanf("%f",&a[i][j]);
          }
      }
      printf("\n Matrix A is\n ");
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=m;j++)
          {
              printf("\t%f",a[i][j]);
          }
          printf("\n");
      }
      printf("\n Enter the values of Matrix B\n");
      for(i=1;i<=p;i++)
      {
          for(j=1;j<=q;j++)
          {
              printf("Enter the value B[%d][%d]:",i,j);
              scanf("%f",&b[i][j]);
          }
      }
      printf("\n Matrix B is \n");
      for(i=1;i<=p;i++)
      {
          for(j=1;j<=q;j++)
          {
              printf("\t%f",b[i][j]);
          }
          printf("\n");
      }
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=q;j++)
          { c[i][j]=0;
            for(k=1;k<=m;k++)
            {
                c[i][j]=(a[i][k]*b[k][j])+c[i][j];
            }
          }
      }
      printf("\n Matrix A X B = C =\n");
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=q;j++)
          {
              printf("\t%f",c[i][j]);
          }
          printf("\n");
      }
    }
  else{ printf("\n Multiplication is not possible ."); }
  printf("\n Want to continue press 'Y'or'y' else any key to exit:");
  scanf("%s",&ch);
}while(ch=='Y'||ch=='y');
}