
/* spine::RotateTimeline::setFrame(int, float, float) */

void __thiscall
spine::RotateTimeline::setFrame(RotateTimeline *this,int param_1,float param_2,float param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x48);
  *(float *)(lVar1 + (-(ulong)((param_1 & 0x7fffffffU) >> 0x1e) & 0xfffffffc00000000 |
                     (ulong)(uint)(param_1 << 1) << 2)) = param_2;
  *(float *)(lVar1 + (((ulong)(long)(param_1 << 1) >> 1) << 3 | 4)) = param_3;
  return;
}

