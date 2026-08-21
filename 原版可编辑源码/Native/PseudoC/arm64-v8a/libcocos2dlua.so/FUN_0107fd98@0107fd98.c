
undefined8 FUN_0107fd98(long param_1,uint param_2,uint *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x428);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0x6f4) == 0xffff) {
    return 6;
  }
  if (*(uint *)(lVar1 + 0x14) < param_2) {
    return 6;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)*(ushort *)(*(long *)(lVar1 + 0x4f0) + (ulong)param_2 * 2);
    return 0;
  }
  return 0;
}

