
void spArrayFloatArray_removeAt(int *param_1,int param_2)

{
  void *__dest;
  uint uVar1;
  
  __dest = (void *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
  uVar1 = (*param_1 + -1) - param_2;
  *param_1 = *param_1 + -1;
  memmove(__dest,(void *)((long)__dest + 8),
          -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
  return;
}

