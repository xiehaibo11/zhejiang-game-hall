
int FUN_011a31e8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  do {
    uVar2 = fcntl(param_1,1);
    if (uVar2 != 0xffffffff) {
      if ((uint)(param_2 != 0) == (uVar2 & 1)) {
        return 0;
      }
      uVar1 = uVar2 | 1;
      if (param_2 == 0) {
        uVar1 = uVar2 & 0xfffffffe;
      }
      goto LAB_011a3248;
    }
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
  } while (iVar3 == 4);
  goto LAB_011a3290;
  while (piVar4 = (int *)__errno(), *piVar4 == 4) {
LAB_011a3248:
    iVar3 = fcntl(param_1,2,(ulong)uVar1);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        return 0;
      }
      piVar4 = (int *)__errno();
      break;
    }
  }
  iVar3 = *piVar4;
LAB_011a3290:
  return -iVar3;
}

