#include<stdio.h>
#include<string.h>
	struct Dish{
	int stt;
	char fullName[100];
	double price;
 };
 struct  Dish Menu[5]={
 	{1,"Burger",30000},
 	{2,"Pizza",40000},
 	{3,"Ga ran",35000},
 	{4,"Nem nuong",45000},
 	{5,"Bun moc",50000},
 	
 };
int main(){
	int choice;
	int count;
	int length=5;
	int find;
	int check;
 	do{
 		printf("\n------MENU------\n");
 		printf("1. In ra gia tri cac phan tu co trong menu mon an.\n");
 		printf("2. Them mot phan tu vao vi tri cuoi.\n");
 		printf("3. Sua mot phan tu o vi tri cuoi.\n");
 		printf("4. Xoa mot phan tu o vi tri cuoi.\n");
 		printf("5. Sap xep cac phan tu tang dan theo price.\n");
 		printf("6. Tim kiem phan tu tuyen tinh theo name nhap vao.\n");
 		printf("7.Thoat.\n");
 		printf("Lua chon cua ban la: \n");
 		scanf("%d",&choice);
 		getchar();
 		switch(choice){
 			case 1:
 				for(int i=0; i<length; i++){
 					if(Menu[i].stt==0){
 						break;
					}
					printf("%d. %s: %lf\n",Menu[i].stt,Menu[i].fullName,Menu[i].price);
				}
 	            break;	
			case 2:
				count++;
				printf("Nhap ten mon ban muon them: ");
				fgets(Menu[length].fullName,sizeof(Menu[length].fullName), stdin);
				Menu[length].fullName[strlen(Menu[length].fullName)-1] = '\0';
				printf("Moi ban nhap gia tien: ");
				scanf("%lf",&Menu[length].price);	
				length++;
				for(int i=0; i<length; i++){
					printf("%d. %s: %lf\n",Menu[i].stt,Menu[i].fullName,Menu[i].price);
				}
				break;
			case 3:
				printf("Nhap vi tri mon muon sua : ");
                int place;
                scanf("%d", &place);
                getchar(); 

                if (place >= 1 && place <= length) {
                    printf("Nhap ten mon moi: ");
                    fgets(Menu[place - 1].fullName, sizeof(Menu[place - 1].fullName), stdin);
                    Menu[place- 1].fullName[strcspn(Menu[place - 1].fullName, "\n")] = '\0';

                    printf("Nhap gia tien moi: ");
                    scanf("%d", &Menu[place - 1].price);
                    for (int i = 0; i < length; i++) {
                   	printf("%d. %s: %lf\n",Menu[i].stt,Menu[i].fullName,Menu[i].price);
					 }
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;
			case 4:
				length--;
				for(int i=0; i<length; i++){
					if(Menu[i].stt==0){
						break;
					}
					printf("%d. %s: %lf\n",Menu[i].stt,Menu[i].fullName,Menu[i].price);
				}
				break;
			case 5:
				for(int i=0;i<length-1;i++){
                for(int j=0; j<length-i-1;j++){
                        if (Menu[j].price > Menu[j + 1].price) {
                                struct Dish temp = Menu[j];
                                Menu[j] = Menu[j + 1];
                                Menu[j + 1] = temp;
                            }
                        }
                }
            printf("Menu sau khi sap xep theo cach tang dan la:\n");
            for (int i = 0; i < length; i++){ 
                if(Menu[i].stt==0){
                    break;
                }
                printf("%d. %s: %lf\n",Menu[i].stt,Menu[i].fullName,Menu[i].price);
              }
			  break;
			case 6:{
				printf("Nhap ten mon an can tim: ");
                char found[100];
                fgets(found, sizeof(found), stdin);
                found[strcspn(found, "\n")] = '\0'; 
                for (int i = 0; i < length; i++) {
                    if (strcmp(Menu[i].fullName, found) == 0) {
                        check = i;
                        break;
                    }
                }

                if (check != -1) {
                    printf("Mon an '%s' nam o vi tri: %d\n", found, check + 1);
                } else {
                    printf("Khong tim thay mon an '%s'.\n", found);
                }
				break;
			}
			case 7:
				printf("Thoat chuong trinh.\n");
				break;
				
 			default:
 				printf("Lua chon cua ban khong hop le.\n");
 				break;
	 }
 }while(choice!=7);
	return 0;
}	
