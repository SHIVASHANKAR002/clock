#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	clrscr();
	int h,m,s;
	printf("please enter the time in HH MM SS format : ");
	scanf ("%d%d%d",&h,&m,&s);
       /*	start:; */
	for (h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				clrscr();
				printf ("\n\n\n\n\n\n\n\n\n\n\n\n                                    %d:%d:%d",h,m,s);
				if (h<12)
				{
					printf (" AM ");
				}
				else
				{
					printf (" PM ");
				}
			       /*	for (double i=0;i<3619999;i++)
				i++;
				i--;*/
				sleep(1);
			}
			s=0;
		}
		m=0;
	}
	h=0;
/*	goto start;*/
}
