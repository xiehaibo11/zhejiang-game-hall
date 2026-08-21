
char * FUN_00a155d4(long param_1,int param_2)

{
  char *__buf;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  __buf = (char *)(param_1 + 0x508);
  *(undefined1 *)(param_1 + 0x508) = 0;
  pcVar3 = strerror_r(param_2,__buf,0xff);
  if (((int)pcVar3 != 0) && (*__buf == '\0')) {
    FUN_00a0e7c4(__buf,0xff,"Unknown error %d",param_2);
  }
  *(undefined1 *)(param_1 + 0x607) = 0;
  pcVar3 = strrchr(__buf,10);
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)__buf)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(__buf,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)__buf)) {
    *pcVar3 = '\0';
  }
  if (iVar1 != *piVar2) {
    *piVar2 = iVar1;
  }
  return __buf;
}

