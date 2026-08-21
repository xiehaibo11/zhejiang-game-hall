
int FUN_011a2e68(char *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((DAT_01793638 & 1) == 0) {
    iVar2 = open(param_1,param_2 | 0x80000);
    if (iVar2 != -1) {
      return iVar2;
    }
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
    if (iVar2 != 0x16) goto LAB_011a2f0c;
    DAT_01793638 = 1;
  }
  iVar2 = open(param_1,param_2);
  if (iVar2 != -1) {
    do {
      iVar3 = ioctl(iVar2,0x5451);
      if (iVar3 != -1) {
        if (iVar3 == 0) {
          return iVar2;
        }
        piVar4 = (int *)__errno();
        iVar3 = *piVar4;
        if (iVar3 == 0) {
          return iVar2;
        }
        goto LAB_011a2f24;
      }
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
    } while (iVar3 == 4);
    if (iVar3 == 0) {
      return iVar2;
    }
LAB_011a2f24:
    puVar5 = (undefined4 *)__errno();
    uVar1 = *puVar5;
    iVar2 = close(iVar2);
    if (iVar2 != -1) {
      return -iVar3;
    }
    *puVar5 = uVar1;
    return -iVar3;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
LAB_011a2f0c:
  return -iVar2;
}

