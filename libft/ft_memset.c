void	*ft_memset(void *b, int c, size_t len)
{
	int		index;
	unsigned char	*temp;

	index = 0;
	temp = (unsigned char *)b;
	while (*temp && index < len)
	{
		temp[index] = (unsigned char)c;
		index++;
	}
	return (b);
}
