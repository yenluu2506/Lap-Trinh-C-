#include <stdio.h>
#include <stdlib.h>
typedef struct employee_st{
	char name[30], province[30];
	int year;
};
void Nhaptt(employee_st *nv){
	printf("Nhap ten nhan vien: ");
	gets(nv->name);
	printf("Nhap dia chi: ");
	gets(nv->province);
	printf("Nhap tuoi: ");
	scanf("%d", &nv->year);
}
void Xuattt(employee_st *nv){
	printf("Ho va ten:%s ", nv->name );
	printf("Dia chi: %s", nv->province);
	printf("Tuoi: %d", nv->year);
}
int main (){
	employee_st *nv;
	nv = (employee_st*)(malloc(sizeof(employee_st)));
	Nhaptt(nv);
	Xuattt(nv);
}
