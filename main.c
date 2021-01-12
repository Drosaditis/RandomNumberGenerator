#include <stdio.h>

int metric0(int k,int n,int A[][7]){
  int count=0;
  for (int i=0;i<k;i++){
    for (int j=0;j<7;j++){
      if (n==A[i][j]){
        count++;
      }
    }
  }
  return count;
}

int metric1(int k,int n,int A[][7]){
  int found=0;
  for (int i=0;i<k;i++){
    for (int j=0;j<7;j++){
      if (n==A[i][j]){
        found=i+1;
      }
    }
  }
  return k-found;
}

void sortAndPrint(float A[],int n){
  int B[49];
  for (int i=0;i<49;i++){
    B[i]=i+1;
  }
  for (int i=0;i<48;i++){
    for (int j=0;j<48-i;j++){
      if (A[j]<A[j+1]){
        int temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
        int temp1=B[j];
        B[j]=B[j+1];
        B[j+1]=temp1;
      }
    }
  }
  for (int i=0;i<n;i++){
    printf("%d ",B[i]);
  }
}


int main(void) {
  int numbers,metric;
  scanf("%d %d",&numbers,&metric);
  if (numbers<1 || numbers>49 || metric<0 || metric>3){
    printf("Wrong Input!");
    return 0;
  }

  int k=10,kliroseis[k][7];
  for (int i=0;i<k;i++){
    for (int j=0;j<7;j++){
      scanf("%d",&kliroseis[i][j]);
    }
  }

  float metrics[4][49];
  for (int i=0;i<49;i++){
    //metriki0
    metrics[0][i]=metric0(k,i+1,kliroseis);
    //metriki1
    metrics[1][i]=metric1(k,i+1,kliroseis);
    //metriki2
    metrics[2][i]=metrics[0][i]+metrics[1][i];
    //metriki3
    if (metrics[0][i]==0){
      metrics[3][i]=0;
    }
    else{
      metrics[3][i]=metrics[1][i]-k/metrics[0][i];
    }
    printf("%d %f %f %f %f\n",i+1,metrics[0][i],metrics[1][i],metrics[2][i],metrics[3][i]);
  }
  sortAndPrint(metrics[metric],numbers);



  return 0;
}#include <stdio.h>

int metric0(int k,int n,int A[][7]){
  int count=0;
  for (int i=0;i<k;i++){
    for (int j=0;j<7;j++){
      if (n==A[i][j]){
        count++;
      }
    }
  }
  return count;
}

int metric1(int k,int n,int A[][7]){
  int found=0;
  for (int i=0;i<k;i++){
    for (int j=0;j<7;j++){
      if (n==A[i][j]){
        found=i+1;
      }
    }
  }
  return k-found;
}

void sortAndPrint(float A[],int n){
  int B[49];
  for (int i=0;i<49;i++){
    B[i]=i+1;
  }
  for (int i=0;i<48;i++){
    for (int j=0;j<48-i;j++){
      if (A[j]<A[j+1]){
        int temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
        int temp1=B[j];
        B[j]=B[j+1];
        B[j+1]=temp1;
      }
    }
  }
  for (int i=0;i<n;i++){
    printf("%d ",B[i]);
  }
}


int main(void) {
  int numbers,metric;
  scanf("%d %d",&numbers,&metric);
  if (numbers<1 || numbers>49 || metric<0 || metric>3){
    printf("Wrong Input!");
    return 0;
  }

  int k=10,kliroseis[k][7];
  for (int i=0;i<k;i++){
    for (int j=0;j<7;j++){
      scanf("%d",&kliroseis[i][j]);
    }
  }

  float metrics[4][49];
  for (int i=0;i<49;i++){
    //metriki0
    metrics[0][i]=metric0(k,i+1,kliroseis);
    //metriki1
    metrics[1][i]=metric1(k,i+1,kliroseis);
    //metriki2
    metrics[2][i]=metrics[0][i]+metrics[1][i];
    //metriki3
    if (metrics[0][i]==0){
      metrics[3][i]=0;
    }
    else{
      metrics[3][i]=metrics[1][i]-k/metrics[0][i];
    }
    printf("%d %f %f %f %f\n",i+1,metrics[0][i],metrics[1][i],metrics[2][i],metrics[3][i]);
  }
  sortAndPrint(metrics[metric],numbers);



  return 0;
}
