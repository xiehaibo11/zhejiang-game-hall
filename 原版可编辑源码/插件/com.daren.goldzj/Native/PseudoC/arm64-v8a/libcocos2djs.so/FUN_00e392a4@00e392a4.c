
void FUN_00e392a4(long param_1,long *param_2,int param_3)

{
  if (param_3 == 3) {
    *param_2 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x18) +
               *(long *)(param_1 + 8);
    param_2[1] = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x18) +
                 *(long *)(param_1 + 0x10);
    param_2[2] = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x28) +
                 *(long *)(param_1 + 0x20);
    return;
  }
  if (param_3 != 2) {
    if (param_3 == 1) {
      *param_2 = *(long *)(param_1 + 8);
      return;
    }
    *param_2 = *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x58) +
               *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x28) +
               *(long *)(param_1 + 0x18) + *(long *)(param_1 + 8);
    param_2[1] = *(long *)(param_1 + 0x70) + *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x58) +
                 *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30) +
                 *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10);
    param_2[2] = *(long *)(param_1 + 0x70) + *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x68) +
                 *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30) +
                 *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    param_2[3] = *(long *)(param_1 + 0x70) + *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x68) +
                 *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50) +
                 *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
    return;
  }
  *param_2 = *(long *)(param_1 + 8) + *(long *)(param_1 + 0x18);
  param_2[1] = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18);
  return;
}

