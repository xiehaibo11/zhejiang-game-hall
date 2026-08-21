
int FUN_010ac480(undefined8 param_1,ulong param_2)

{
  return *(int *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 7) +
         (*(int *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7)) + 7) >> 1);
}

