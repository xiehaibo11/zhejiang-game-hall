
int FUN_010a9558(undefined8 param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7);
  uVar1 = (*(int *)(uVar2 + 3) >> 1) - 2;
  if (param_3 < uVar1) {
    return 0xc0;
  }
  return *(int *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) +
                  ((long)(((ulong)param_3 - (ulong)uVar1) * 0xc00000000 + 0x1800000000) >> 0x20) + 7
                 ) >> 1;
}

