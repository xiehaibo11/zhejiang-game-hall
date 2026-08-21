
int FUN_011a8740(long param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0xb8) != -1) && (*(int *)(param_1 + 0xb8) != param_2)) {
    return -0x10;
  }
  param_3 = *(uint *)(param_1 + 0x58) | param_3;
  *(uint *)(param_1 + 0x58) = param_3;
  if (*(int *)(param_1 + 0x10) == 0xc) {
    if ((param_3 >> 0x18 & 1) != 0) {
      iVar1 = FUN_011a9f80(param_2,1);
      if (iVar1 != 0) goto LAB_011a87c0;
      param_3 = *(uint *)(param_1 + 0x58);
    }
    if (((param_3 >> 0x19 & 1) != 0) && (iVar1 = FUN_011a9fc0(param_2,1,0x3c), iVar1 != 0)) {
LAB_011a87c0:
      piVar2 = (int *)__errno();
      return -*piVar2;
    }
  }
  *(int *)(param_1 + 0xb8) = param_2;
  return 0;
}

