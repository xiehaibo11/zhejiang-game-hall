
undefined8 FUN_00e3f01c(long param_1,uint param_2,uint *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x490);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0x74c) == 0xffff) {
    return 6;
  }
  if (param_2 < *(uint *)(lVar1 + 0x24)) {
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)*(ushort *)(*(long *)(lVar1 + 0x520) + (ulong)param_2 * 2);
    }
    return 0;
  }
  return 6;
}

