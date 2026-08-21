
bool FUN_0107fd64(undefined8 param_1,ulong param_2,uint param_3,long param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0xb);
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
    piVar1 = (int *)(param_4 + 3);
  }
  return param_3 < (uint)(*piVar1 >> 1);
}

