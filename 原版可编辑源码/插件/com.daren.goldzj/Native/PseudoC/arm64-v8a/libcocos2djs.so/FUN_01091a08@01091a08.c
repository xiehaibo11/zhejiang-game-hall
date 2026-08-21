
ulong FUN_01091a08(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  int *piVar1;
  
  FUN_0109284c();
  piVar1 = (int *)(param_3 + 0xb);
  if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) != 0x423) {
    piVar1 = (int *)(param_4 + 3);
  }
  if (((uint)(*piVar1 >> 1) <= param_5) ||
     (*(long *)(((long)((int)param_5 << 3) | 7U) + param_4) == -0x8000000080001)) {
    param_5 = 0xffffffffffffffff;
  }
  return param_5;
}

