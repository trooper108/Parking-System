#include<stdio.h>
#include<conio.h>
void Riksha();
void cycle();
void bus();
void showDetail();
void delete();
int menu();

int count=0,amount=0,nor=0,nob=0,noc=0;
void main()
{while(1)
{
clrscr();
switch(menu())
case1:
      cycle();
break;
case2:
      Bus();
      break;
 case3:
       Riksha();
       break;
case4:
      showDetail();
      break;
case5:
      delete();
      break;
case6:
      exit(0);
defoult:
printf("invalid entry");
}
getch();
}

void showDetail()
{
printf("\n no of buses=%d",nob);
printf("\n no of cycle=%d",noc);
printf("\n no of Riksha=%d",nor);
printf("\n no of buses=%d",nob);
printf("\n total no of vehicle=%d",count);
printf("\n total parking amount",nob+noc+nor);
}
void Riksha()
{
printf("\n successfully entry");
      nor++;
      amount=amount+50;
      count++;
}
void cycle()
  {
  printf("\n successfully entry");
      noc++;
      amount=amount+20;
      count++;
  }
  void Bus()
  {
  printf("\n successfully entry");
      nob++;
      amount=amount+100;
      count++;
  }
  void Delete()
  {
  count=0;
  amount=0;
  nob=0;
  noc=0;
  nor=0;
  }
  int menu()
  {
  int ch;
  printf("\n1 enter cycle");
  printf("\n2 enter Bus");
  printf("\n3 enter Riksha");
  printf("\n4 enter showDetaile");
  printf("\n5 enter Delete data");
  printf("\n6  exit");
  printf("\n\n  enter your choice");
        scanf("%d",&ch);
        return(ch);
  }
