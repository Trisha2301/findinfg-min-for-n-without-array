#include <stdio.h>

int main() {
    int n,ele;
    printf("Enter no.of elements you want: ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        int temp;
        printf("Enter %d element : ",i);
        scanf("%d",&temp);
        if(i==1)
        ele=temp;
        else if(ele>temp)
            ele=temp;
    }
    printf("The largest element is : %d",ele);
    return 0;
}