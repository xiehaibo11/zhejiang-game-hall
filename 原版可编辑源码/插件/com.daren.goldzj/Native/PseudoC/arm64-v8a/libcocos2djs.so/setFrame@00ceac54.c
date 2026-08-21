
/* spine::IkConstraintTimeline::setFrame(int, float, float, float, int, bool, bool) */

void __thiscall
spine::IkConstraintTimeline::setFrame
          (IkConstraintTimeline *this,int param_1,float param_2,float param_3,float param_4,
          int param_5,bool param_6,bool param_7)

{
  float *pfVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x40);
  pfVar1 = (float *)(lVar2 + (long)(int)((long)param_1 * 6) * 4);
  *pfVar1 = param_2;
  *(float *)(lVar2 + (((ulong)((long)param_1 * 6) >> 1) << 3 | 4)) = param_3;
  pfVar1[2] = param_4;
  pfVar1[3] = (float)param_5;
  pfVar1[4] = (float)param_6;
  pfVar1[5] = (float)param_7;
  return;
}

