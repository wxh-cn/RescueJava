#include<stdio.h>
	struct Stu
	{
		long int num;
		char name[9];
		int score[3];
	}student[5],*p;
int main()
{
	struct Stu *runinoput(struct Stu student[5]);
	void runprint(struct Stu *p);
	p=runinoput(student);
	runprint(p);
}
struct Stu *runinoput(struct Stu student[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("请输入第%d位学生的学号、姓名、三科成绩：\n",i+1);
		scanf("%ld",&student[i].num);
		scanf("%s",&student[i].name);
		scanf("%d%d%d",&student[i].score[0],&student[i].score[1],&student[i].score[2]);
	 }
	 return student; 
}
void runprint(struct Stu *p)
{
	int i;
	printf("输出结果为：\n");
	for(i=0;i<5;i++)
	{
		printf("学号：%d\t姓名：%s\t成绩：%-4d%-4d%-4d\n",(p+i)->num,(p+i)->name,(p+i)->score[0],(p+i)->score[1],(p+i)->score[2]);
	}
}
