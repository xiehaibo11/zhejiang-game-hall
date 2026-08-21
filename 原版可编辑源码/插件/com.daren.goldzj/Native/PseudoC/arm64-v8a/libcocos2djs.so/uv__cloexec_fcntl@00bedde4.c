
int uv__cloexec_fcntl(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  do {
    uVar2 = fcntl(param_1,1);
    if (uVar2 != 0xffffffff) {
      if ((uint)(param_2 != 0) != (uVar2 & 1 ^ 1)) {
        return 0;
      }
      uVar1 = uVar2 & 0xfffffffe;
      if ((param_2 != 0) != 0) {
        uVar1 = uVar2 | 1;
      }
      goto LAB_00bede70;
    }
    piVar4 = (int *)__errno();
  } while (*piVar4 == 4);
  goto LAB_00bede90;
  while (piVar4 = (int *)__errno(), *piVar4 == 4) {
LAB_00bede70:
    iVar3 = fcntl(param_1,2,(ulong)uVar1);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        return 0;
      }
      piVar4 = (int *)__errno();
      break;
    }
  }
LAB_00bede90:
  return -*piVar4;
}

