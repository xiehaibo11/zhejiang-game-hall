
bool FUN_010a4390(undefined8 param_1,ulong param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2 & 0xffffffff00000000;
  uVar3 = (*(int *)(param_4 + 3) >> 1) - 2;
  uVar4 = (ulong)param_3;
  if ((uVar3 <= param_3) ||
     ((uVar2 = *(uint *)(param_4 + (long)(int)(param_3 * 4 + 8) + 7), (uVar2 & 1) != 0 &&
      (uVar2 == *(uint *)(uVar5 + 0xa8))))) {
    uVar6 = param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 + 0xb);
    piVar1 = (int *)(param_2 + 0xb);
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
      piVar1 = (int *)(uVar6 + 3);
    }
    if ((param_3 < (uint)(*piVar1 >> 1)) &&
       ((uVar2 = *(uint *)(uVar6 + (long)(int)(param_3 << 2) + 7), (uVar2 & 1) == 0 ||
        (uVar2 != *(uint *)(uVar5 + 0xa8))))) {
      uVar4 = uVar3 + uVar4;
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
  }
  return uVar4 != 0xffffffffffffffff;
}

