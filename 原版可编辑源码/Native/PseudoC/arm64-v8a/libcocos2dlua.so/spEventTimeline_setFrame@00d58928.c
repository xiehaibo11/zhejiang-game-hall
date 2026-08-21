
void spEventTimeline_setFrame(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
  *(undefined4 *)(*(long *)(param_1 + 0x18) + (long)(int)param_2 * 4) = *(undefined4 *)(param_3 + 8)
  ;
  _spFree(*(void **)(*(long *)(param_1 + 0x20) + uVar1));
  *(long *)(*(long *)(param_1 + 0x20) + uVar1) = param_3;
  return;
}

