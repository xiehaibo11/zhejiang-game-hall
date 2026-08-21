
char * getErrorMsg(void)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)__errno();
  if (0 < *piVar1) {
    pcVar2 = strerror(*piVar1);
    return pcVar2;
  }
  return "";
}

