#include <stdio.h>
int main(){
	int choice,length,arr[100],sum;
	do{
		printf("==============MENU================\n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra gia tri cac phan tu trong mang\n");
		printf("3.Gia tri lon nhat va gia tri nho nhat trong mang\n");
		printf("4.In ra tong cac phan tu\n");
		printf("5.Them mot phan tu vao cuoi mang\n");
		printf("6.Xoa phan tu tai mot vi tri cu the nguoi dung chon vi tri\n");
		printf("7.Sap xep theo thu tu giam dan(Bubble Sort)\n");
		printf("8.Tim kiem phan tu co ton tai trong mang hay khong do nguoi dung nhap vao\n");
		printf("9.In ra toan bo so nguyen to trong mang\n");
		printf("10.Sap xep mang theo thu tu tang dan(Selection Sort)\n");
		printf("11.Thoat\n");
		printf("Hay nhap lua chon cua ban: \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Hay nhap so phan tu man ban muon: \n");
				scanf("%d",&length);
				printf("Gia tri cua tung mang la: \n");
				for(int i=0;i<length;i++){
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				if(length == 0){
					printf("Khong co gia tri nao trong mang!\n");
				}else{
					for(int i=0;i<length;i++){
						printf("Phan tu thu [%d] = %d\n",i,arr[i]);
					}
				}
				break;
			case 3:
				if(length == 0){
					printf("Khong co gia tri nao trong mang!\n");
				}else{
					int max = arr[0];
					for(int i=1;i<length;i++){
						if(arr[i] > max){
							max = arr[i];
						}
					}
					printf("Gia tri lon nhat trong mang la: %d\n",max);
					
					int min = arr[0];
					for(int i=1;i<length;i++){
						if(arr[i] < min){
							min = arr[i];
						}
					}
					printf("Gia tri nho nhat trong mang la : %d\n",min);				
				}
				break;
			case 4:
				for(int i=0;i<length;i++){
					sum += arr[i];
				}
				printf("Tong cua cac phan tu trong mang la: %d\n",sum);
				break;
			case 5:
				    if (length < 100) {
                    int newElement;
                    printf("Nhap gia tri phan tu can them: ");
                    scanf("%d", &newElement);
                    arr[length] = newElement;
                    length++;
                    printf("Da them phan tu thanh cong!\n");
                } else {
                    printf("Mang da day, khong the them phan tu moi!\n");
                }
                break;
            case 6:
            	    if (length > 0) {
                    int index;
                    printf("Nhap vi tri can xoa (0-%d): ", length - 1);
                    scanf("%d", &index);
                    if (index >= 0 && index < length) {
                        for (int i = index; i < length - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        length--;
                        printf("Da xoa phan tu tai vi tri %d\n", index);
                    } else {
                        printf("Vi tri khong hop le!\n");
                    }
                } else {
                    printf("Mang khong co phan tu nao de xoa!\n");
                }
                break;
            case 8:
             	 if (length > 0) {
                    int target, found = 0;
                    printf("Nhap gia tri can tim: ");
                    scanf("%d", &target);
                    for (int i = 0; i < length; i++) {
                        if (arr[i] == target) {
                            printf("Tim thay %d tai vi tri %d trong mang!\n", target, i);
                            found = 1;
                        }
                    }
                    if (!found) {
                        printf("Khong tim thay gia tri %d trong mang.\n", target);
                    }
                } else {
                    printf("Mang rong, khong co phan tu de tim kiem!\n");
                }
                break;
			default:
				if(choice != 11){
					printf("Lua chon khong hop le!\n");					
				}
				break;
			 					
		}		
	}while(choice != 11);
	printf("Chuong trinh ket thuc!\n");
} 
