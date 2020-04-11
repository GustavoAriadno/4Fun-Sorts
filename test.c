int ft_strlen(char *s)
{
  int len = 0;
  while (s[len] != '\0')
    len++;
  return (len);
  }

void    ft_swap(char *a, char *b)
{
    char aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void  ft_quicksort(char *str)
{
  int   len;
  char  *pt1;
  char  *pt2;
  char  tmp;
  int   trigger = 0;
  
  len = ft_strlen(str);
  pt1 = &str[0];
  pt2 = &str[len - 1];
  while (pt1 != pt2)
  {
    if (*pt1 < *pt2)
      if (trigger == 0)
        {
          pt2--;
          trigger = 0;
        }
      else
        pt1++;
    else
    {
      ft_swap(pt1, pt2);
      if (trigger == 1)
      {
        pt2--;
        trigger = 0;
      }
      else
      {
        pt1++;
        trigger = 1;
      }
    }
  }
}

int main() {
  char a[] = "3018725496";
  
  ft_quicksort(a);
  return 0;
}