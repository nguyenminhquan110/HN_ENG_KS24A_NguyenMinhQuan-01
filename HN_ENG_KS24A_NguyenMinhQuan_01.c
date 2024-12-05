#include<stdio.h>
int main(){
	int choice,max,min,n,m,index,valune,new_element;
	int arr[100], count;
	int size =sizeof(arr)/sizeof(int);
	int sum = 0; 
	do{
		printf("-----MENU----- \n");
		printf("1. Nhap so phan tu va gia tri cho mang \n");
		printf("2. In ra gia tri cac phan tu trong mang \n");
		printf("3. Tim gia tri nho nhat va lon nhat trong mang \n");
		printf("4. In ra tong tat ca cac phan tu \n");
		printf("5. Them mot phan tu vao cuoi mang \n");
		printf("6. Xoa phan tu tai mot vi tri cu the \n");
		printf("7. Sap xep mang theo thu tu giam dan \n");
		printf("8. Nhap mot phan tu de tim kiem trong mang \n");
		printf("9. In ra toan bo so nguyen to trong mang \n");
		printf("10. Sap xep mang theo thu tu tang dan \n");
		printf("11. Thoat \n");
		printf("Hay chon chuc nang (1-11): ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
			printf("Moi ban nhap so phan tu co trong mang(toi da 100): ");
			scanf("%d", &n);
			if(n<=0){
				printf(" Moi ban nhap lai phan tu trong mang");
				return 1;
			}
			for ( int i = 0 ; i < n ; i++){
			printf("Nhap phan tu thu %d : ",i);
			scanf("%d", &arr[i]);
   			 } 
				break;
			case 2:
			printf("Cac phan tu co trong mang la: ");
			for ( int i = 0 ; i < n ; i++){
				printf ( "%d\n", arr[i]);
			}
			    break;
			case 3:
				max = arr[0];
				min = arr[0]; 
			for(int i = 1;i < n;i++){
				if(arr[i]>max){
					max = arr[i];
				   }
				if(arr[i]<min){
					min = arr[i]; 
				} 
				}
				printf("Gia tri %d lon nhat trong mang \n", max);
			    printf("Gia tri %d nho nhat trong mang \n", min);
			    break;
			case 4:
			    for (int i = 0; i < n; i++) {
                   sum += arr[i];
                 }
			     printf("Tong cua tat ca cac phan tu co trong mang la: %d", sum);
				 printf("\n");
			     break;
			case 5:
				 printf("Nhap phan tu moi muon them: ");
                 scanf("%d", &new_element);
                 
                 // Them phan tu moi vao cuoi mang 
				 arr[n] = new_element;
                 n++;
                 
                 printf("Mang sau khi them phan tu:\n");
				 for (int i = 0; i < n; i++) {
                  printf("%d ", arr[i]);
                 }
                 printf("\n");
			    break;
			case 6:
				printf("Nhap vi tri ma ban muon xoa phan tu: ");
				scanf("%d",&index);
     			for (int i = index; i < n - 1; i++) {
            	arr[i] = arr[i + 1];
       			 }
     		   n--;
			    break;
			case 7:
			    break;
			case 8:
			    break;
			case 9:
			    break;
			case 10:
			    break;
			case 11:
				printf(" Da thoat chuong trinh "); 
			    break;
		} 
	} while (choice != 11);
	return 0; 
} 
