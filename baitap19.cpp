//

#include <stdio.h>
void tinh (){
	int CD;
	int CR;
	int DT, CV;
	printf("Nhap vao do dai hai canh chieu dai va chieu rong: ");
	scanf("%d %d", &CD, &CR);
	if(CD>0 && CR>0){
		CV=(CD+CR)*2;
		DT = CD * CR;
		printf("Chu vi hinh chu nhat la: %d ", CV);
		printf("\nDien tich hinh chu nhat la: %d ", DT);
	}
	else{
		printf("Khong tinh duoc.");
	}
}
/*void chuvi (){
	int CD, CR, CV;
	if(CD>0 && CR>0){
		CV=(CD+CR)*2;
		printf("Chu vi hinh chu nhat la: ", CV);
	}
	else{
		printf("Khong tinh duoc.");
	}
}*/
int main(){
	//int CD, CR;
	//printf("Nhap vao do dai hai canh chieu dai va chieu rong: ");
	//scanf("%d %d", &CD, &CR);
	tinh();
	//chuvi();
}
