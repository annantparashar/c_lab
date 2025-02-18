//10feb2025
#include<stdio.h>
int linear(int a[],int n,int lmid,int hmid,int key,int ans) {
    int i=lmid;
    while(a[i]==key && i>=0) {
        ans++;
        i--;
    }
    int j=hmid;
    while(a[j]==key && j<n) {
        ans++;
        j++;
    }
    return ans;
}
int search(int a[],int n,int key) {
    int ans=0;
    int low=0;
    int high=n-1;
    while(low<=high) {
        int mid=low+(high-low)/2;
        if(a[mid]==key) {
            ans++;
            ans=linear(a,n,mid-1,mid+1,key,ans);
            return ans;
        }
        if(a[mid]>key) {
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return ans;
}
int main() {
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    int key;
    printf("enter key");
    scanf("%d",&key);
    int count = search(a,n,key);
    printf("the key is present %d times",count);
}