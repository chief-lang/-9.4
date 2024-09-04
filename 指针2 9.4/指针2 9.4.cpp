// 指针2 9.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
//一
//void fun(int* x, int* y)
//{
//	*x = 3;//3.通过链接以x,y给a,b重新赋值
//	*y = 0;
//}
//int main()
//{
//	int a = 10, b = 20;//1.a,b的初始值
//	fun(&a,&b);//2.将x,y与a,b链接
//	printf("%d\n%d\n", a, b);
//}
//二
void fun(int* x, int* y)
{
	*x = 3;
	*y = 0;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//初始定义一个数组
	for (int i = 0; i < 10; i++)
	{
		printf("%p\n", &arr[i]);//%p为地址的输出形式
	}
	int* p=&arr[0];//也可以直接写数组名arr，因为数组名本身就表示这个数组的首地址（在这里是1）
	
	p += 8;//指的是第九位,表示指针的偏倚
	printf("%d\n", *p);
	return 0;
} 
