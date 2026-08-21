
int FUN_010a5720(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (*(int *)(param_3 + 3) >> 1) +
         (*(int *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 3) >> 1) + -2;
}

