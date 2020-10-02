#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#define _CRT_SECURE_NO_WARNINGG
typedef struct student SS;
struct student
{
	int ID;
	char name[10];
	float usualscore;
	float labscore;
	float finalscore;
	float totalscore;
	int order;
}stu[];
void putdata(SS stu[], int N)
{
	int i;
	printf("请按照如下格式输入学生信息：学号，姓名，平时成绩，期末成绩\n");
	for (i = 0; i < N; i++)
	{
		printf("第%d个学生：", i + 1);
		scanf("%d,%s%,%f,%f,%f", &stu[i].ID, &stu[i].name, &stu[i].usualscore,
			&stu[i].labscore, &stu[i].finalscore);
		printf("\n");
	}
	printf("成绩录入完毕");
}

SS* orderdata(SS stu[], int N)
{
	FILE *fp = NULL;
	int count = 0;
	int index = 0;
	fp = fopen("data.text", "r");
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}
	printf("学生数目为：%d\n", count);
	stu = (SS*)malloc(count * sizeof(SS));
	while (!(feof(fp)))
	{
		fscanf(fp, "%d", &stu[i].ID);
		fscanf(fp, "%f", &stu[i].name);
		fscanf(fp, "%d", &stu[i].usualscore);
		fscanf(fp, "%d", &stu[i].labscore);
		fscanf(fp, "%d", &stu[i].finalscore);
		i++;
		count--;
	}

	fprintf(fp, student[N]);
	printf("数据已经输入");
	if (fp)
	{
		fclose(fp);
		fp = NULL;
	}

}
int i, j;
SS c;
for (i = 0; i < N; i++)
{
	stu[i].totalscore = 0.2*stu[i].usualscore + 0.2*stu[i].labscore + 0.6*stu[i].finalscore;
}
for (i = 0; i < n; i++)
{
	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall)
		for (i = 0; i < N; i++)
			printf("%d,%s,%f", stu[i].ID, stu[i].name, stu[i].totalscore);
}*/
void findscore(SS stu[], int N)
{
	scanf("%d", &stu.ID);
	int i, k;
	for (i = 0; i < N; i++)
	{
		if (stu[i].ID = stu.ID)
			k = i;
	}
	FILE *fp = NULL;
	fp = fopen("data.text", "w");
	fprintf("%f,%f,%f,%f", stu[k].usualscore, stu[k].labscore, stu[k].finalscore, stu[k].totalscore);

}
float analysedata(SS stu[], int N)
{
	orderdata(stu[], N);
	FILE *fp = NULL;
	fp = fopen("data.text", "w");
	int i;
	float averagescore;
	float b[100];
	for (i = 0; i < n; i++)
	{
		fprintf("%f", &stu[i].totalscore);
		float sum1;
		sum1 = 0;
		sum1 += stu[i].totalscore;

	}
	averagescore = sum1 / N;
	for (i = 0; i < n; i++)
	{
		float sum2, variance;
		sum2 = 0;
		sum2 += pow(stu[i]totalscore - averagescore, 2);
	}
	variance = sum2 / n;
	return variance;
}
main()
{
	struct student;
	SS stu[100];
	int N;
	float variance;
	scanf("%d", &N);
	putdata(stu, N);
	orderdata(stu, N);
	findscore(stu, N);
	variance = analysedata(stu, N);
	printf("%f", variance);

}