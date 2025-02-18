#include<stdio.h>
void selection(int a[],int n) {
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i+1;j<n;j++) {
            if(a[j]<a[min]) {
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("SORTED ARRAY IS \n");
    for(int i=0;i<n;i++) {
        printf(" %d ",a[i]);
    }
}
void insertion(int a[],int n) {
    for(int i=1;i<n;i++) {
            int j=i-1;
            int temp=i;
            while(j>=0 && a[temp]<a[j]) {
                int swap=a[temp];
                a[temp]=a[j];
                a[j]=swap;
                temp--;
                j--;
            }
    }
    printf("SORTED ARRAY IS \n");
    for(int i=0;i<n;i++) {
        printf(" %d ",a[i]);
    }
}
int main() {
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    //selection(a,n);
    insertion(a,n);
}