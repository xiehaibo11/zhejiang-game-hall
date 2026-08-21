
ulong FUN_00c29da0(long param_1,int param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)param_2 * 8 + -8;
  if (((ulong)(*(long *)(param_1 + 0x20) + lVar1) < *(ulong *)(param_1 + 0x28)) &&
     (*(long *)(*(long *)(param_1 + 0x20) + lVar1) != -1)) {
    uVar2 = FUN_00c29cf0();
    return uVar2;
  }
  return (ulong)param_3;
}

