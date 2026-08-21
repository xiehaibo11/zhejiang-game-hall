
void spRotateTimeline_setFrame(undefined4 param_1,undefined4 param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x20);
  *(undefined4 *)
   (lVar1 + (-(ulong)((param_4 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
            (ulong)(param_4 << 1) << 2)) = param_1;
  *(undefined4 *)(lVar1 + (((ulong)(long)(int)(param_4 << 1) >> 1) << 3 | 4)) = param_2;
  return;
}

