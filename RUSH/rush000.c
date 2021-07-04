/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush000.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avachero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:23:41 by avachero          #+#    #+#             */
/*   Updated: 2021/07/03 19:07:42 by avachero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void rush(int x, int y)
{
	int a;
	int b;
	a =1;

	while(a <= y)
	{
		b= 1;
		while(b <=x)
		{
			if (( b  == 1 && a == 1) || (b  == x  && a == y))
				write(1, "/", 1);
			else if ((b == x && a == 1) || (b ==1	&& a== y ))
					write(1, "\\", 1);
			else if ((b >1 && b < x) && (a == 1 || a ==y))
					write(1, "*", 1);
			else if ((a > 1 && a < y) && ( b == 1 || b == x))
					write(1, "*" ,1);
			else
					write(1, " ", 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
}

int main()
{
	rush(1, 5);
}



void rush(int x, int y)
{
    int a;
    int b;

    a =1;
    while(a <= y)
    {
        if (a == 1 )
            write(1, "/", 1);
         if (a == y)
            write(1, "\\", 1);

        b= 1;
        while(b <= x)
        {   if (b == x-2 && (a == y || a == 1))
            b = x+1;
            if ((b == 1 || b == x) || (x>1 && (a == 1 || a ==y)))
                    write(1, "*", 1);
            else
                    write(1, " ", 1);
            b++;
        }
        if (a == 1 && x > 1)
            write(1, "\\", 1);
         if (a == y && x > 1)
            write(1, "/", 1);
        write(1, "\n", 1);
        a++;
    }
}


#include <unistd.h>


void rush(int x, int y)
{
    int a;
    int b;

    a =1;
    while(a <= y)
    {
        if (a == 1 )
            write(1, "/", 1);
        else if (a == y)
            write(1, "\\", 1);
            else
                write(1, "*", 1);
        b= 1;
        while(b <= x-2)
        {
            if (a == 1 || a ==y)
                    write(1, "*", 1);
            else
                    write(1, " ", 1);
            b++;
        }
        if (a == 1 && x > 1)
            write(1, "\\", 1);
        else if (a == y && x > 1)
            write(1, "/", 1);
        else if (x > 1)
            write(1, "*", 1);
        write(1, "\n", 1);
        a++;
    }
}
