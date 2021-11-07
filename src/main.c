#include	<stdio.h>
#include	"libft.h"
#define		TOTAL_CHAR	93	// 126 - 33

int	PIN;

char
	*list_char(void)
{
	char	*s;
	int	i;

	s = (char *)malloc(TOTAL_CHAR + 1);
	i = -1;
	while (i++ < TOTAL_CHAR)
		s[i] = i + 33;
	s[i] = 0;
	return (s);
}

void
	ask_char(unsigned int n, char *s )
{
	int	len = ft_strlen(s);
	n = s[n % len];
	printf("%c", n);
}

void
	create_pws(int d, int m, int y)
{
	char	*s;

	s = list_char();

	printf("\n\nyour code : ");

	ask_char(PIN + d * m * y, s);	
	ask_char(d * (1 + PIN % 7), s);	
	ask_char(d * (m * d % PIN), s);	
	ask_char((PIN % 3 + 1) * d * y * 7, s);	
	ask_char(m * y * 2, s);	

	ask_char((y - PIN) / (m + d), s);	
	ask_char(PIN, s);	
	ask_char(PIN * m + d, s);	
	ask_char((PIN * m) / d, s);	
	ask_char(d * 2 + PIN * m, s);	
	
	ask_char(PIN, s);	
	ask_char(PIN / 2 + 9, s);	

	printf("\n\n\tEND\n");
}


int
	ft_s_int(char *s, int start, int n)
{
	char	*p;
	int	nb;
	
	p = ft_substr(s, start, n);
	nb = ft_atoi(p);
	free(p);
	return (nb);
}

void
	code(char *s)
{
	int	d = ft_s_int(s, 0, 2);
	int	m = ft_s_int(s, 3, 2);
	int	y = ft_s_int(s, 6, 4);
	create_pws(d, m, y);
}

int
	main(void)
{
	char	*s;
	s = (char *)malloc(11);

	printf("\n\tPASSWORD MANAGER\n\n");
	printf("give your birhtday account : ");
	scanf("%s", s);
	
	printf("\ngive a pin : ");
	scanf("%d", &PIN);

	code(s);

	free(s);

}
