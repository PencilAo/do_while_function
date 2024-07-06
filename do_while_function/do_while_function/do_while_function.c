#define _CRT_SECURE_NO_WARNINGS
//do while 循环 
/*int main()
{
    int i = 1;
    do
    {
        if (i == 5)
            continue;
        printf("%d ", i);
        i++;
    } while (i <= 10);
    return 0;
}*///打印出1 2 3 4死循环,因为当i=4后++=5，continue跳过后面的循环也跳过了i++一直是i=5的循环
//给你一个整数数组 nums ，统计并返回在 nums 中同时至少具有一个严格较小元素和一个严格较大元素的元素数目。
//int main()
//{
//	int i = 0;//初始化
//	int all = 0;
//	int m, j;
//	int nums[100];
//	char oi;
//	scanf("%c", &oi);                                //这里是'['
//	do
//	{
//		scanf("%d,", &nums[i]);
//		i++;                                                     //不知道数组的个数时可以用do - while循环
//	} while (getchar() != ']');   //循环到输入']'时停止循环
//	for (m = 0; m < i; m++)
//	{
//		int count1 = 0;
//		int count2 = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (nums[j] < nums[m])
//			{
//				count1 = 1; //标记有严格较大的元素
//			}
//			else if (nums[m] < nums[j])
//			{
//				count2 = 1; //标记有严格较小的元素
//			}
//		}
//		if (count1 == 1 && count2 == 1)//同时成立
//		{
//			all++;
//		}
//	}
//	printf("%d", all);
//}