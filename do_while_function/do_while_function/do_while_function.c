#define _CRT_SECURE_NO_WARNINGS
//do while ѭ�� 
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
}*///��ӡ��1 2 3 4��ѭ��,��Ϊ��i=4��++=5��continue���������ѭ��Ҳ������i++һֱ��i=5��ѭ��
//����һ���������� nums ��ͳ�Ʋ������� nums ��ͬʱ���پ���һ���ϸ��СԪ�غ�һ���ϸ�ϴ�Ԫ�ص�Ԫ����Ŀ��
//int main()
//{
//	int i = 0;//��ʼ��
//	int all = 0;
//	int m, j;
//	int nums[100];
//	char oi;
//	scanf("%c", &oi);                                //������'['
//	do
//	{
//		scanf("%d,", &nums[i]);
//		i++;                                                     //��֪������ĸ���ʱ������do - whileѭ��
//	} while (getchar() != ']');   //ѭ��������']'ʱֹͣѭ��
//	for (m = 0; m < i; m++)
//	{
//		int count1 = 0;
//		int count2 = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (nums[j] < nums[m])
//			{
//				count1 = 1; //������ϸ�ϴ��Ԫ��
//			}
//			else if (nums[m] < nums[j])
//			{
//				count2 = 1; //������ϸ��С��Ԫ��
//			}
//		}
//		if (count1 == 1 && count2 == 1)//ͬʱ����
//		{
//			all++;
//		}
//	}
//	printf("%d", all);
//}