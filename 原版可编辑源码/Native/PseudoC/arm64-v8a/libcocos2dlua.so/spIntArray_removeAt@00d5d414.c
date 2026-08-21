
void spIntArray_removeAt(int *param_1,int param_2)

{
  void *__dest;
  uint uVar1;
  
  __dest = (void *)(*(long *)(param_1 + 2) + (long)param_2 * 4);
  uVar1 = (*param_1 + -1) - param_2;
  *param_1 = *param_1 + -1;
  memmove(__dest,(void *)((long)__dest + 4),
          -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  return;
}

