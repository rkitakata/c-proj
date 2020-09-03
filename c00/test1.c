void Rush(char x, char y) //<==渡される代入値
{
    int col; //縦 = x
    int row;    //横 = y
    char a;
    char b; 
    char c;

    a = 'A';
    b = 'B';
    c = 'C';

    row = 1; 
    while(row <= y) //(x, y >1) のとき
    {
        if (row >= 1 || row ==y ) //
        {
            col = 1;  //<==!important! 多分聞かれると思う！なぜここに来るのか？

            while (col <= x)　//xがcol以上のとき
            {
                if (col == 1 ) //Rus(1, y)
                {
                    
                    ft_putchar(a);
                }
                else if (col != x && col < x ) //ｘがcolはなく、かつ、colより大きいとき(1<x)　　
                {
                    
                    ft_putchar(b);
                }
                else //(col == x)
                {
                    
                    ft_putchar(c);
                }
                
            }
            col++
        }
        else //(B B)を作る
        {
           int i;
           while (y > 2 )
           {
               ft_putchar(b);
               i = 2;
               while (i < x) // 2 5
               {
                   if(2 < x )
                   {
                       ft_puthcar(' ');
                   }
                   else
                   {
                       ft_puthcar(b);
                       ft_puthcar('\n');
                   }                   
               }
               i++;
           };
        };
    }
    row++;
    ft_puthcar('\n');
}