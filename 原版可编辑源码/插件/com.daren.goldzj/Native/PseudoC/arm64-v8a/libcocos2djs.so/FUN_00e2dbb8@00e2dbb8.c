
void FUN_00e2dbb8(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = FUN_00e2ef50();
  if (iVar2 != 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
  if (param_2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10) | 0x8000;
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}

