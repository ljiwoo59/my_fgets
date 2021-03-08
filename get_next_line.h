#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "limits.h"
# include "fcntl.h"
# include "stdlib.h"
# include "unistd.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

int		get_next_line(int fd, char **line);
int		is_new_line(char *s);
int		ft_strlen(char *s);
char	*ft_strldup(char *s1, int start, int end);
char	*ft_strldup_file(char *s1, int start, int end);
char	*ft_strjoin(char *s1, char *s2);

#endif
