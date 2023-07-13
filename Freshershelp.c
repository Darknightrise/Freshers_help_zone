#include<stdio.h>
#include<stdlib.h>

void student_();
void admin_();
void admin_ai();
void admin_marksup();
void admin_search();
void admin_delete();

int main()
{
  char ch;
  int pass = 110;
  printf("Welcome To The College Inquiry Port\nA -> Student\nB -> Admin\nC -> Quit\nEnter Choice: ");
  fflush(stdin);
  scanf("%c", &ch);
  fflush(stdin);
  printf("%c", ch);
  
  switch (ch)
  {
    case 'A':
      student_();
      break;
    case 'B':
      printf("Enter The Security Key: ");
      fflush(stdin);
      scanf("%d", &pass);
      fflush(stdin);
      printf("\nPass is entered by you: %d", pass);
      
      if (pass == 110)
        admin_();
      else
        printf("Wrong Security Key");
      break;
    case 'C':
      break;
    default:
      printf("Choice Not Accepted");
  }
  
  return 0;
}

void student_()
{
  int ch;
  printf("It's Student Information Port\n1 -> Teacher\n2 -> Time Table\n3 -> Bus\nEnter Choice: ");
  fflush(stdin);
  scanf("%d", &ch);
  fflush(stdin);
  
  switch (ch)
  {
    case 1:
      printf("\n\tSubject Teachers\nEnglish: Ms. Shivangi Agarwal\nDiscrete Maths: Mr. Sanjay Kumar Pandey\nComputer Structure: Mr. Ram Jee Dixit\nReasoning: Mr. Deepak");
      break;
    case 2:
      printf("\nTime Table\nDay\tPeriod 1\tPeriod 2\tPeriod 3\tPeriod 4\nMonday\tEnglish\tDiscrete\tCO\tReasoning\nTuesday\tDiscrete\tCO\tEnglish\tReasoning\nWednesday\tReasoning\tEnglish\tCO\tDiscrete\nThursday\tDiscrete\tReasoning\tCO\tEnglish\nFriday\tEnglish\tDiscrete\tCO\tReasoning");
      break;
    case 3:
      printf("\n\t\tBus Route\nB1: UCER To Station\nB2: UCER To George Town\nB3: UCER To Ashoka Nagar");
      break;
    default:
      printf("Invalid choice");
  }
}

void admin_()
{
  int ch;
  printf("It's Admin's Portal\n1 -> Add Information\n2 -> Marks Upload\n3 -> Searching\n4 -> Information Deletion\nEnter Choice: ");
  fflush(stdin);
  scanf("%d", &ch);
  fflush(stdin);
  
  switch (ch)
  {
    case 1:
      admin_ai();
      break;
    case 2:
      admin_marksup();
      break;
    case 3:
      admin_search();
      break;
    case 4:
      admin_delete();
      break;
    default:
      printf("Invalid choice");
  }
}

struct stud
{
  char n[100], b[100];
  int ref;
};

void admin_ai()
{
  struct stud *inf;
  fflush(stdin);
  inf = (struct stud*)malloc(sizeof(struct stud));
  
  printf("\nName: ");
  scanf("%s", inf->n);
  fflush(stdin);
  
  printf("Branch: ");
  scanf("%s", inf->b);
  fflush(stdin);
  
  printf("Ref. Id: ");
  scanf("%d", &inf->ref);
  fflush(stdin);
}

struct mark
{
  int re;
  double e, m, c, r;
};

void admin_marksup()
{
  struct mark *lo;
  lo = (struct mark*)malloc(sizeof(struct mark));
  
  printf("Ref Id: ");
  fflush(stdin);
  scanf("%d", &lo->re);
  fflush(stdin);
  
  printf("Please Enter The Marks\n");
  printf("English -> ");
  fflush(stdin);
  scanf("%lf", &lo->e);
  fflush(stdin);
  
  printf("Discrete Maths -> ");
  fflush(stdin);
  scanf("%lf", &lo->m);
  fflush(stdin);
  
  printf("Computer Architecture -> ");
  fflush(stdin);
  scanf("%lf", &lo->c);
  fflush(stdin);
  
  printf("Reasoning And Aptitude -> ");
  fflush(stdin);
  scanf("%lf", &lo->r);
  fflush(stdin);
}

void admin_search()
{
  int r = 0;
  printf("1) To Search By Ref.Id\n2) To Search By Name\nEnter The Choice: ");
  fflush(stdin);
  scanf("%d", &r);
  fflush(stdin);
  printf("Still Data Is Under Updation (Part Under Future Scope)");
}

void admin_delete()
{
  printf("Data Yet To Be Updated Due To Which Deletion Is Not Possible (Part Under Future Scope)"); 
}
