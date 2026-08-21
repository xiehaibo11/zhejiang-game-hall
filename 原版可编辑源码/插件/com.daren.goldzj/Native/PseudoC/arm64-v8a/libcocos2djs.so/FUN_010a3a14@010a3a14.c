
int FUN_010a3a14(undefined8 param_1,ulong param_2,long param_3)

{
  return *(int *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7)) +
                  (param_3 * 0xc00000000 + 0x1800000000 >> 0x20) + 7) >> 1;
}

