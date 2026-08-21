
undefined8 FUN_00a5cbb8(long param_1)

{
  uint uVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined1 auStack_14 [4];
  
  sVar2 = recv(*(int *)(param_1 + 0x260),auStack_14,1,2);
  if (sVar2 == -1) {
    piVar3 = (int *)__errno();
    uVar1 = *piVar3 - 100;
    if (uVar1 < 0x10) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x59dU) != 0) {
        return 0;
      }
      if (uVar1 == 0xf) {
        return 1;
      }
    }
    if (*piVar3 == 0xb) {
      return 1;
    }
  }
  else {
    if (sVar2 == 0) {
      return 0;
    }
    if (sVar2 == 1) {
      return 1;
    }
  }
  return 0xffffffff;
}

