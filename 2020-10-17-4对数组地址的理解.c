//对数组地址的理解
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	printf("%p\n",arr);//数组的地址
	printf("%p\n", arr+1);//数组第二元素的地址
	printf("%p\n", &arr[0]);//数组首元素的地址（虽然与数组的地址结果一样，但是定义不一样）
	printf("%p\n", &arr[0] + 1);//数组第二个元素的地址
	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);//区分数组和数组首元素的地址不一样（+1相当于+28，因为一个元素4个字节，7个元素）
	return 0;
}