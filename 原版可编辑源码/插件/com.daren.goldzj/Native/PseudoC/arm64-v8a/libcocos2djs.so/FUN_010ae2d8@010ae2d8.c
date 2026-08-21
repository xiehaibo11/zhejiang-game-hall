
int FUN_010ae2d8(undefined8 param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 7);
  if (param_3 < uVar1) {
    return 0xe8;
  }
  return *(int *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7)) +
                  ((long)(((ulong)param_3 - (ulong)uVar1) * 0xc00000000 + 0x1800000000) >> 0x20) + 7
                 ) >> 1;
}

