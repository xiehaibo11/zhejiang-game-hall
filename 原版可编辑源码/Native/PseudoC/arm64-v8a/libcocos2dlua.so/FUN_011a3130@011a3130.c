
int FUN_011a3130(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  do {
    uVar2 = fcntl(param_1,3);
    if (uVar2 != 0xffffffff) {
      if ((uint)(param_2 != 0) == (uVar2 & 0x800) >> 0xb) {
        return 0;
      }
      uVar1 = uVar2 | 0x800;
      if (param_2 == 0) {
        uVar1 = uVar2 & 0xfffff7ff;
      }
      goto LAB_011a3190;
    }
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
  } while (iVar3 == 4);
  goto LAB_011a31d8;
  while (piVar4 = (int *)__errno(), *piVar4 == 4) {
LAB_011a3190:
    iVar3 = fcntl(param_1,4,(ulong)uVar1);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        return 0;
      }
      piVar4 = (int *)__errno();
      break;
    }
  }
  iVar3 = *piVar4;
LAB_011a31d8:
  return -iVar3;
}

