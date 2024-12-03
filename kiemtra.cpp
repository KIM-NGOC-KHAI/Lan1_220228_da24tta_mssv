#define Day 4
#include<stdio.h>
void nhapsotien(float a[], int n);
void xuatsotien(float a[], int n);
void tinhtongvathongke(float a[], int n);
void phantichchitieu(float a[], int n);

int main(){
	float A[Day] = {0};
	int  n;
	nhapsotien(A, n);
	xuatsotien(A, n);
	printf("\n");
	tinhtongvathongke(A, n);
	printf("\n");
	phantichchitieu(A, n);
	printf("\n");
	
	
	return 0;
}
// phan tich chi tieu
void phantichchitieu(float a[], int n){
	float X;
	int i, demvuot = 0, demkhongvuot = 0;
	for(i = 0; i < Day; i++){
		if(a[i] > X){
			demvuot++;
		}else{
			demkhongvuot++;
		}
	} 
	printf("\n");
	printf("       PHAN TICH CHI TIEU");
	printf("\nNhap so tien chi tieu: ");
	scanf("%.2f", &X);
	printf("\nSo ngay co chi tieu vuot muc: %d", demvuot);
	printf("\nSo ngay co chi tieu thap hon hoac bang: %d", demkhongvuot);
}
// tinh tong va thong ke 
void tinhtongvathongke(float a[], int n){
	float tong = 0, trungbinh;
	int i, maxday = 0, minday = 0;
	for(i = 0; i < Day; i++){
		tong += a[i];
		if(a[i] > a[maxday]){
			maxday = i;
		}
		if(a[i] < a[minday]){
			minday = i;
		}
	}
	trungbinh = tong / Day;
	printf("            THONG KE ");
	printf("\nTong so chi tieu trong thang: %.2f dong", tong);
	printf("\nTrung binh tien chi tieu moi ngay: %.2f", trungbinh);
	printf("\nNgay co chi tieu cao nhat la ngay thu %d voi %.2f dong", maxday + 1, a[maxday]);
	printf("\nNgay co chi tieu thap nhat la ngay thu %d voi %.2f dong", minday + 1, a[minday]);
}
// xuat so tien
void xuatsotien(float a[], int n){
	int i;
	printf("\nSo tien chi tieu hang ngay\n");
	for(i = 0; i < Day; i++){
		printf("Ngay %d: %.2f dong", i + 1, a[i]);
		printf("\n");
	}
}
// nhap so tien
void nhapsotien(float a[], int n){
	int i;
	printf("Nhap so tien chi tieu hang ngay\n");
	for(i = 0; i < Day; i++){
		do{
			printf("Ngay %d: ", i + 1 );
			scanf("%f", &a[i]);
		}while(a[i] <= 0);
	}
}

