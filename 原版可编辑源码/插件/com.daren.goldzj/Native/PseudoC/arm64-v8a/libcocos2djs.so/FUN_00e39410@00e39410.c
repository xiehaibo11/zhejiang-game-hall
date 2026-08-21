
ulong FUN_00e39410(char *param_1,ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  char *__s;
  long lVar5;
  
  if ((param_2 >> 0x10 == 0) && (iVar1 = *(int *)(param_3 + 0x188), 0 < iVar1)) {
    lVar5 = *(long *)(param_3 + 400);
    uVar4 = 0;
    do {
      __s = *(char **)(lVar5 + uVar4 * 8);
      if ((((__s != (char *)0x0) && (*__s == *param_1)) && (sVar3 = strlen(__s), sVar3 == param_2))
         && (iVar2 = strncmp(__s,param_1,param_2), iVar2 == 0)) goto LAB_00e39494;
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar1);
  }
  uVar4 = 0;
LAB_00e39494:
  return uVar4 & 0xffffffff;
}

