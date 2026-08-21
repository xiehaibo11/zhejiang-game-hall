
ulong FUN_010793b8(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x278);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x280);
    uVar3 = 0;
    do {
      iVar2 = strcmp(param_2,*(char **)(lVar4 + uVar3 * 8));
      if (iVar2 == 0) goto LAB_01079400;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)iVar1);
  }
  uVar3 = 0;
LAB_01079400:
  return uVar3 & 0xffffffff;
}

