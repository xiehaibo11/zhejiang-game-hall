
/* spine::TwoColorTimeline::setFrame(int, float, float, float, float, float, float, float, float) */

void __thiscall
spine::TwoColorTimeline::setFrame
          (TwoColorTimeline *this,int param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x40);
  uVar1 = (ulong)(long)(param_1 << 3) >> 3;
  *(float *)(lVar2 + (long)(param_1 << 3) * 4) = param_2;
  *(float *)(lVar2 + ((long)param_1 << 5 | 4U)) = param_3;
  *(float *)(lVar2 + (uVar1 << 5 | 8)) = param_4;
  *(float *)(lVar2 + (uVar1 << 5 | 0xc)) = param_5;
  *(float *)(lVar2 + (uVar1 << 5 | 0x10)) = param_6;
  *(float *)(lVar2 + (uVar1 << 5 | 0x14)) = param_7;
  *(float *)(lVar2 + (uVar1 << 5 | 0x18)) = param_8;
  *(float *)(lVar2 + (uVar1 << 5 | 0x1c)) = param_9;
  return;
}

