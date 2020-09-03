voidmddl(int x);
voidfst_lst(int x);
voidft_putchar(char c);

void cd rush(char x, char y)
{
int row;

row = 1;
while (row <= y)
{
if (row == 1 || row == y)
fst_lst(x);
else
mddl(x);
row++;
ft_putchar('\n');
}
}

void fst_lst(int x)
{
chara;
charb;
charc;
intcol;

a = 'A';
b = 'B';
c = 'C';
col = 1;
while (col <= x)
{
if (col == 1)
ft_putchar(a);
else if (col != x && col < x)
ft_putchar(b);
else
ft_putchar(c);
col++;
}
}

void mddl(int x)
{
charb;
intcol;

b = 'B';
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