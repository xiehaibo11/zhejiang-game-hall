
bool FUN_01090054(undefined8 param_1,ulong param_2,uint param_3,long param_4)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)(param_2 + 0xb);
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
    piVar1 = (int *)(param_4 + 3);
  }
  if ((param_3 < (uint)(*piVar1 >> 1)) &&
     (*(long *)(((long)(int)(param_3 << 3) | 7U) + param_4) != -0x8000000080001)) {
    uVar2 = (ulong)param_3;
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2 != 0xffffffffffffffff;
}

