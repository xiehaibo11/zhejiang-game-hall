
bool FUN_01095954(undefined8 param_1,ulong param_2,uint param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  
  piVar1 = (int *)(param_2 + 0xb);
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
    piVar1 = (int *)(param_4 + 3);
  }
  if (param_3 < (uint)(*piVar1 >> 1)) {
    uVar2 = *(uint *)(param_4 + (int)(param_3 << 2) + 7);
    uVar3 = (ulong)param_3;
    if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)((param_2 & 0xffffffff00000000) + 0xa8)))
    goto LAB_010959a4;
  }
  uVar3 = 0xffffffffffffffff;
LAB_010959a4:
  return uVar3 != 0xffffffffffffffff;
}

