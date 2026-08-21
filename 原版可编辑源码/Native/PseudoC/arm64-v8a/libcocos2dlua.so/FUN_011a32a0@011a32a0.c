
int FUN_011a32a0(int param_1)

{
  undefined4 uVar1;
  int __fd;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  __fd = dup(param_1);
  if (__fd == -1) {
    piVar4 = (int *)__errno();
    __fd = -*piVar4;
  }
  else {
    do {
      iVar2 = ioctl(__fd,0x5451);
      if (iVar2 != -1) {
        if (iVar2 == 0) {
          return __fd;
        }
        piVar4 = (int *)__errno();
        iVar2 = *piVar4;
        if (iVar2 == 0) {
          return __fd;
        }
        goto LAB_011a330c;
      }
      piVar4 = (int *)__errno();
      iVar2 = *piVar4;
    } while (iVar2 == 4);
    if (iVar2 != 0) {
LAB_011a330c:
      puVar5 = (undefined4 *)__errno();
      uVar1 = *puVar5;
      iVar3 = close(__fd);
      __fd = -iVar2;
      if (iVar3 == -1) {
        *puVar5 = uVar1;
      }
    }
  }
  return __fd;
}

