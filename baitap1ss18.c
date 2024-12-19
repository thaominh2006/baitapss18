#include<stdio.h>
int main(){
    struct Student{
        char name[100];
        int age;
        char phoneNumber[20];
    };
    struct Student svien01={"Do Thao Minh",18,"0344623918"};
    printf("Thong tin sinh vien: \n");
    printf("Ten sinh vien la: %s\n",svien01.name);
    printf("Tuoi cua sinh vien la: %d\n",svien01.age);
    printf("So dien thoai cua sinh vien la: %s\n", svien01.phoneNumber);
    return 0;
}
