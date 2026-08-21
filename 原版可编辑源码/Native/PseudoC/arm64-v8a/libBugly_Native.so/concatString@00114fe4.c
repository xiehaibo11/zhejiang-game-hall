
char * concatString(char *param_1,char *param_2,int param_3)

{
  char *__s;
  size_t sVar1;
  char *__dest;
  size_t __size;
  
  __dest = (char *)0x0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    __size = (size_t)param_3;
    __dest = malloc(__size);
    __s = strncpy(__dest,param_1,__size);
    sVar1 = strlen(__s);
    strncat(__dest,param_2,~sVar1 + __size);
  }
  return __dest;
}

