/*
** lem-in.h for lem-in in /home/lamais_a//lem-in
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Mon Apr  8 09:21:35 2013 adrien lamaison
** Last update Wed Apr 17 09:42:18 2013 adrien lamaison
*/

#ifndef		LEMIN_H_
#define		LEMIN_H_

/* parseur.c */

char		**read_file();
int		verify(char **);
int		gere_instruct(char **);

/* my_strcpr.c */

int		my_strcpr(char *, char *);

/* instruct_gere.c */

int		instruct_gere(char *str);

/* epur_str.c */

char		*epur_str(char *);

/* check_comment */

int		check_comment(char *str);
int		first_line(char **file);

typedef struct	s_struct
{
  char		*buffer;
  char		**file;
  int		nb_line;
  int		j;
}		t_struct;

#endif		/* !LEMIN_H_ */
