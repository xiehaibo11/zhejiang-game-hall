
long FUN_00aa581c(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  uVar2 = (ulong)*(byte *)(lVar1 + (ulong)param_2 + 0x300);
  if (uVar2 != 0) {
    return *(long *)(lVar1 + 0x10) + (ulong)*(uint *)(lVar1 + uVar2 * 8 + 0x1c);
  }
  return 0;
}

