#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_toupper(void);
void	test_ft_tolower(void);
void	test_ft_memset(void);
void	test_ft_bzero(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_calloc(void);

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();
	
	return (0);
}
/*ASCII TESTS*/
void	test_ft_isalpha(void)
{
	printf("\n===== Testing ft_isalpha =====\n");
	printf("The result of isalpha() is %d'\n'", isalpha(97));
	printf("The result of ft_isalpha() is %d'\n'", ft_isalpha(97));
}
void	test_ft_isdigit(void)
{
	printf("\n===== Testing ft_isdigit =====\n");
	printf("The result of isdigit() is %d'\n'", isdigit(54));
	printf("The result of ft_isdigit() is %d'\n'", ft_isdigit(54));
}
void	test_ft_isalnum(void)
{
	printf("\n===== Testing ft_isalnum =====\n");
	printf("The result of isalnum() is %d'\n'", isalnum(107));
	printf("The result of ft_isalnum() is %d'\n'", ft_isalnum(107));	
}
void	test_ft_isascii(void)
{
	printf("\n===== Testing ft_isascii =====\n");
	printf("The result of isascii() is %d'\n'", isascii(123));
	printf("The result of ft_isascii() is %d'\n'", ft_isascii(123));
}
void	test_ft_isprint(void)
{
	printf("\n===== Testing ft_isprint =====\n");
	printf("The result of isprint() is %d'\n'", isprint(33));
	printf("The result of ft_isprint() is %d'\n'", ft_isprint(33));
}
void	test_ft_toupper(void)
{
	printf("\n===== Testing ft_toupper =====\n");
	printf("The result of toupper() is %c'\n'", toupper('a'));
	printf("The result of ft_toupper() is %c'\n'", ft_toupper('a'));
}
void	test_ft_tolower(void)
{
	printf("\n===== Testing ft_tolower =====\n");
	printf("The result of tolower() is %c'\n'", tolower('A'));
	printf("The result of ft_tolower() is %c'\n'", ft_tolower('A'));
}
/*MEMORY TESTS*/
void	test_ft_memset(void)
{
	printf("\n===== Testing ft_memset =====\n");
	//Test1: Fill first 5 characters with 'X
	char s1[20] = "abcdef123456";
	char s2[20] = "abcdef123456";
	memset(s1, 'X', 5);
	ft_memset(s2, 'X', 5);
	printf("[1] Expected %s | Got: %s\n", s1, s2);
	//Test2: Fill entire string with  '0'
	strcpy(s1, "abcdef123456");
	strcpy(s2, "abcdef123456");
	memset(s1, '0', strlen(s1));
	ft_memset(s2, '0', strlen(s2));
	printf("[2] Expected %s | Got: %s\n", s1, s2);
	//Test3: Fill 0 bytes (should not change anything)
	strcpy(s1, "abcdef123456");
	strcpy(s2, "abcdef123456");
	memset(s1, 'Z', (0));
	ft_memset(s2, 'Z', (0));
	printf("[3] Expected %s | Got: %s\n", s1, s2);
}
void	test_ft_bzero(void)
{
	printf("\n===== Testing ft_bzero =====\n");
	//Test1: Zero first 5 characters
	char s1[20] = "abcdef123456";
	char s2[20] = "abcdef123456";
	bzero(s1, 5);
	ft_bzero(s2, 5);
	if (memcmp(s1, s2, 20) == 0)
		printf("[1] OK: First 5 bytes zeroed correctly.\n");
	else
		printf("[1] KO: Difference found.\n");
	//Test2: Zero full string
	strcpy(s1, "abcdef123456");
	strcpy(s2, "abcdef123456");
	bzero(s1, strlen(s1));
	ft_bzero(s2, strlen(s2));
	if (memcmp(s1, s2, 20) == 0)
		printf("[2] OK: Full string zeroed correctly.\n");
	else
		printf("[2] KO: Difference found.\n");
	//Test3: Zero 0 bytes (should do nothing)
	strcpy(s1, "abcdef123456");
	strcpy(s2, "abcdef123456");
	bzero(s1, (0));
	ft_bzero(s2, (0));
	if (memcmp(s1, s2, 20) == 0)
		printf("[3] OK: Zeroing 0 bytes does nothing.\n");
	else
		printf("[3] KO: Difference found.\n");
}
void	test_ft_memcpy(void)
{
	printf("\n===== Testing ft_memcpy =====\n");
	//Test1:  Simple copy, no overlap
	char s1[30] = "abcdef123456789";
	char s2[30] = "abcdef123456789";
	char src[20] = "XXXXX";
	memmove(s1, src, 5);
	ft_memmove(s2, src, 5);
	if (memcmp(s1, s2, 30) == 0)
		printf("[1] OK: First 5 bytes copied correctly.\n");
	else
		printf("[1] KO: Difference found.\n");
	//Test2: Copy 0 bytes (should do nothing)
	strcpy(s1, "abcdef123456");
	strcpy(s2, "abcdef123456");
	memcpy(s1, src, 0);
	ft_memcpy(s2, src, 0);
	if (memcmp(s1, s2, 20) == 0)
		printf("[2] OK: Copying 0 bytes does nothing.\n");
	else
		printf("[2] KO: Difference found.\n");
}
void	test_ft_memmove(void)
{
	printf("\n===== Testing ft_memmove =====\n");
	//Test1:  Copy 5 bytes
	char s1[20] = "abcdef123456";
	char s2[20] = "abcdef123456";
	char src[20] = "XXXXX";
	memcpy(s1, src, 5);
	ft_memcpy(s2, src, 5);
	if (memcmp(s1, s2, 30) == 0)
		printf("[1] OK: Simple copy without overlap.\n");
	else
		printf("[1] KO: Difference found.\n");
	//Test2: Overlapping copy
	strcpy(s1, "abcdef123456789");
	strcpy(s2, "abcdef123456789");
	memcpy(s1, s1 + 2, 8);
	ft_memcpy(s2, s2 + 2, 8);
	if (memcmp(s1, s2, 30) == 0)
		printf("[2] OK: Overlapping copy (src > dst).\n");
	else
		printf("[2] KO: Difference found.\n");
	//Test3: Copy 0 bytes (should do nothing)
	strcpy(s1, "abcdef123456789");
	strcpy(s2, "abcdef123456789");
	memcpy(s1, src, 0);
	ft_memcpy(s2, src, 0);
	if (memcmp(s1, s2, 30) == 0)
		printf("[3] OK: Copying 0 bytes does nothing.\n");
	else
		printf("[3] KO: Difference found.\n");
}
void	test_ft_memchr(void)
{
	printf("\n===== Testing ft_memchr =====\n");
	//Test1: Find existing character ('c')
	char	str[] = "abcdef123456789";
	void	*std_res = memchr(str, 'c', 12);
	void	*ft_res = ft_memchr(str, 'c', 12);
	if (std_res == ft_res)
		printf("[1] OK: Found 'c' at the correct address.\n");
	else
		printf("[1] KO: Wrong address or not found.\n");
	//Test2:  Find first digit ('1')
	void	*str_res = memchr(str, '1', 12);
	void	*ft_r = ft_memchr(str, '1', 12);
	if (str_res == ft_r)
		printf("[2] OK: Found '1' at the correct address.\n");
	else
		printf("[2] KO: Wrong address or not found.\n");
	//Test3: Search for a character not present ('z')
	void	*s_res = memchr(str, 'z', 12);
	void	*ft_re = ft_memchr(str, 'z', 12);
	if (s_res == ft_re)
		printf("[3] OK: Correctly returned NULL when not found.\n");
	else
		printf("[3] KO: Wrong behaviour when character not found.\n");
	//Test4; Search in 0 bytes 
	void	*t_res = memchr(str, 'a', 0);
	void	*ft_rs = ft_memchr(str, 'a', 0);
	if (t_res == ft_rs)
		printf("[4] OK: Correct behaviour with 0 bytes to search.\n");
	else
		printf("[4] KO: Wrong behaviour with 0 bytes.\n");
}
void	test_ft_memcmp(void)
{
	printf("\n===== Testing ft_memcmp =====\n");
	//Test1: Identical strings
	char	s1[] = "abcdef123456789";
	char	s2[] = "abcdef123456789";
	char	s3[] = "abcdez123456789";
	int		std_res = memcmp(s1, s2, 12);
	int		ft_res = ft_memcmp(s1, s2, 12);
	if (std_res == ft_res)
		printf("[1] OK: Identical strings compared correctly.\n");
	else
		printf("[1] KO: Wrong comparison result.\n");
	//Test2:  Different at 5th character
	int		t_res = memcmp(s1, s3, 12);
	int		ft_e = ft_memcmp(s1, s3, 12);
	if (t_res == ft_e)
		printf("[2] OK: Difference detected correctly.\n");
	else
		printf("[2] KO: Wrong comparison result.\n");
	//Test3: Compare 0 bytes (should do nothing)
	int		d_res = memcmp(s1, s3, 0);
	int		st_res = ft_memcmp(s1, s3, 0);
	if (d_res == st_res)
		printf("[3] OK: Comparing 0 bytes returns 0.\n");
	else
		printf("[3] KO: Wrong behaviour for 0 bytes.\n");
	//Test4: Difference early
	char	a1[] = "abc";
	char	a2[] = "abd";
	int	res = memcmp(a1, a2, 3);
	int	f_res = ft_memcmp(a1, a2, 3);
	if (res == f_res)
		printf("[4] OK: Early difference detected correctly.\n");
	else
		printf("[4] KO: Wrong comparison early.\n");
}
void	test_ft_calloc(void)
{
	printf("\n===== Testing ft_calloc =====\n");
	//Test1: Normal calloc
	void	*ptr;
	void	*ft_ptr;
	size_t	count = 5;
	size_t	size = sizeof(int);
	ptr = calloc(count, size);
	ft_ptr = ft_calloc(count, size);
	if (ptr && ft_ptr && memcmp(ptr, ft_ptr, count * size) == 0)
		printf("[1] OK: Memory zero-initialized correctly.\n");
	else
		printf("[1] KO: Memory not zeroed or wrong.\n");
	free(ptr);
	free(ft_ptr);
	//Test2: Zero elements
	ptr = calloc(0, size);
	ft_ptr = ft_calloc(0, size);
	if ((ptr == NULL && ft_ptr == NULL) || (ptr && ft_ptr))
		printf("[2] OK: calloc(0, size) behaves correctly.\n");
	else
		printf("[2] KO: calloc(0, size) wrong.\n");
	free(ptr);
	free(ft_ptr);
	//Test3: Zero size
	ptr = calloc(count, 0);
	ft_ptr = ft_calloc(count, 0);
	if ((ptr == NULL && ft_ptr == NULL) || (ptr && ft_ptr))
		printf("[3] OK: calloc(count, 0) behaves correctly.\n");
	else
		printf("[3] KO: calloc(count, 0) wrong.\n");
	free(ptr);
	free(ft_ptr);
}
