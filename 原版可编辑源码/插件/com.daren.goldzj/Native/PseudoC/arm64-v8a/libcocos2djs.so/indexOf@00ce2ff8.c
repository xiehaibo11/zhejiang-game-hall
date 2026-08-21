
/* spine::Atlas::indexOf(char const**, int, spine::Atlas::Str*) */

ulong spine::Atlas::indexOf(char **param_1,int param_2,Str *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  char *__s2;
  ulong uVar4;
  
  iVar1 = *(int *)(param_3 + 8);
  __s2 = *(char **)param_3;
  uVar3 = (long)param_2;
  do {
    uVar4 = uVar3 - 1;
    if ((long)uVar3 < 1) {
      uVar4 = 0;
      break;
    }
    iVar2 = strncmp(param_1[uVar3 - 1],__s2,(long)(iVar1 - (int)__s2));
    uVar3 = uVar4;
  } while (iVar2 != 0);
  return uVar4 & 0xffffffff;
}

