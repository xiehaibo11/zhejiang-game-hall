
bool FUN_010a4434(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = param_2 & 0xffffffff00000000;
  uVar3 = uVar1 | *(uint *)(param_2 + 7);
  uVar2 = (*(int *)(uVar3 + 3) >> 1) - 2;
  if (param_3 < uVar2) {
    uVar2 = *(uint *)(uVar3 + (long)((int)param_3 * 4 + 8) + 7);
    if ((uVar2 & 1) == 0) {
      return true;
    }
  }
  else {
    uVar2 = *(uint *)((uVar1 | *(uint *)(uVar3 + 0xb)) + (long)(int)(((int)param_3 - uVar2) * 4) + 7
                     );
    if ((uVar2 & 1) == 0) {
      return true;
    }
  }
  return uVar2 != *(uint *)(uVar1 + 0xa8);
}

