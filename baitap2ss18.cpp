#include<stdio.h>
int main(){
    struct Sinhvien{
    	int id;
        char fullName[100];
        int age;
        char phone[20];
    };
    struct Sinhvien sv[5];
    int a;
    for (a= 0; a < 5; a++){
        printf("Nhap id cho sinh vien: ");
	    scanf("%d",&sv[a].id);
	    fflush(stdin);
	    printf("Nhap fullName cho sinh vien: ");
	    fgets(sv[a].fullName,sizeof(sv[a].fullName),stdin);
	    printf("Nhap tuoi cho sinh vien: ");
	    scanf("%d",&sv[a].age);
	    fflush(stdin);
	    printf("Nhap phone cho sinh vien: ");
	    fgets(sv[a].phone,sizeof(sv[a].phone),stdin);
    }
    int b;
	for (b= 0; b < 5; b++){
        printf("In thong tin sinh vien thu %d\n",b+1);
	    printf("%d\n",sv[b].id);
	    printf("%s\n",sv[b].fullName);
	    printf("%d\n",sv[b].age);
	    printf("%s\n",sv[b].phone);
    }
    return 0;
}
