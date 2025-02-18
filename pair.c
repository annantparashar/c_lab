//12feb2025
//find pairs such that diff equal to key
#include<stdio.h>
#include<math.h>
int cp(int a[],int n,int key) {
    int c=0;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(abs(a[i]-a[j])==key) {
                c++;
            }
        }
    }
    return c;
}
int main() {
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int key=0;
    printf("enter key");
    scanf("%d",&key);
    int ans=cp(a,n,key);
    printf("%d",ans);
}
