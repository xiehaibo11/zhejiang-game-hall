
uint FUN_0119e2b8(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ushort *)(param_2 + 4) < *(ushort *)(param_1 + 4));
  if (*(ushort *)(param_1 + 4) < *(ushort *)(param_2 + 4)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

