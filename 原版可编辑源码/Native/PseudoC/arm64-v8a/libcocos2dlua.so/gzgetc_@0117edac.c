
uint gzgetc_(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte local_14 [4];
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_1[6] == 0x1c4f) {
    if ((param_1[0x1b] != 0) && (param_1[0x1b] != -5)) {
      return 0xffffffff;
    }
    if (*param_1 != 0) {
      pbVar1 = *(byte **)(param_1 + 2);
      *param_1 = *param_1 + -1;
      *(byte **)(param_1 + 2) = pbVar1 + 1;
      *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
      return (uint)*pbVar1;
    }
    iVar2 = gzread(param_1,local_14,1);
    uVar3 = (uint)local_14[0];
    if (iVar2 < 1) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 0xffffffff;
}

