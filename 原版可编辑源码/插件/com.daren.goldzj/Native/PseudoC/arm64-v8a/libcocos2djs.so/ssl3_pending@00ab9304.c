
int ssl3_pending(long param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x3ac) == 0xf1) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x3b0) != 0) {
    iVar1 = 0;
    uVar3 = 0;
    piVar2 = (int *)(param_1 + 0x7e0);
    do {
      if (piVar2[-1] != 0x17) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      iVar1 = *piVar2 + iVar1;
      piVar2 = piVar2 + 0x12;
    } while (uVar3 < *(uint *)(param_1 + 0x3b0));
    return iVar1;
  }
  return 0;
}

