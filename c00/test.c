#include <unistd.h>
void ft_putchar(char c);
void rush(char x, char y);
void mddl(int col,int x,char b);
void fst_lst(int col,int row,int x,int y, char a, char b, char c);

int main(void)
{
  rush(5,3);
  return (1);
}

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void rush(char x, char y)
{
  int col = 1;
  int row = 1;
  char a;
  char b; 
  char c;

  a = 'A';
  b = 'B';
  c = 'C';

  row = 1; 
  while(row <= y)
  {
    if (row == 1)
      fst_lst(col,row,x,y,a,b,c);           
    else 
      mddl(col,x,b);
    row++;
    ft_putchar('\n');
  }
}

void fst_lst(int col, int row, int x,int y, char a, char b, char c)
{
	if (x >= 1){
		ft_putchar(a)
		while(x > 2)
		{
			ft_print(b)
		}
	}

}

void mddl(int col,int x,char b)
{
  col = 1;
  while (col <= x)
  {
    if (col == 1 || col == x)   
      ft_putchar(b);
    else 
      ft_putchar(' ');
  col++;
  }
}
