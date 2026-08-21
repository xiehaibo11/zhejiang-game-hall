
char * concatString(char *param_1,char *param_2,int param_3)

{
  char *__dest;
  size_t sVar1;
  size_t __size;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    __size = (size_t)param_3;
    __dest = malloc(__size);
    strncpy(__dest,param_1,__size);
    sVar1 = strlen(__dest);
    strncat(__dest,param_2,(__size - 1) - sVar1);
    return __dest;
  }
  return (char *)0x0;
}

