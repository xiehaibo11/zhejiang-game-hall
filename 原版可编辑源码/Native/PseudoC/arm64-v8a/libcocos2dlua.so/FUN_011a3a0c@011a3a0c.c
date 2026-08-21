
int FUN_011a3a0c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((DAT_0179363c & 1) == 0) {
    do {
      iVar2 = FUN_011ae3f8(param_1,param_2,0x80000);
      if (iVar2 != -1) {
        return iVar2;
      }
      piVar4 = (int *)__errno();
      iVar2 = *piVar4;
    } while (iVar2 == 0x10);
    if (iVar2 != 0x26) goto LAB_011a3ac8;
    DAT_0179363c = 1;
  }
  do {
    iVar2 = dup2(param_1,param_2);
    if (iVar2 != -1) goto LAB_011a3a9c;
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
  } while (iVar2 == 0x10);
LAB_011a3ac8:
  return -iVar2;
  while( true ) {
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
    if (iVar3 != 4) break;
LAB_011a3a9c:
    iVar3 = ioctl(param_2,0x5451);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        return iVar2;
      }
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
      if (iVar3 == 0) {
        return iVar2;
      }
      goto LAB_011a3af0;
    }
  }
  if (iVar3 == 0) {
    return iVar2;
  }
LAB_011a3af0:
  puVar5 = (undefined4 *)__errno();
  uVar1 = *puVar5;
  iVar2 = close(param_2);
  if (iVar2 != -1) {
    return -iVar3;
  }
  *puVar5 = uVar1;
  return -iVar3;
}

