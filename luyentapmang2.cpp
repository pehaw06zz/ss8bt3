#include<stdio.h>
int main(){
	int n,m,tongchinh;
	printf("nhap so hang n: ");
	scanf("%d",&n);
	printf("nhap so cot m: ");
	scanf("%d",&m) ;	
	int array[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("nhap array[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("cac phan tu trong mang la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		tongchinh += array[i][i];
		}
	    printf("tong duong cheo chinh: %d\n",tongchinh);
	return 0;
}
