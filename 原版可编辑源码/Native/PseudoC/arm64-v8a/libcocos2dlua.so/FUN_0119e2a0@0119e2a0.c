
uint FUN_0119e2a0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ushort *)(param_2 + 2) < *(ushort *)(param_1 + 2));
  if (*(ushort *)(param_1 + 2) < *(ushort *)(param_2 + 2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

