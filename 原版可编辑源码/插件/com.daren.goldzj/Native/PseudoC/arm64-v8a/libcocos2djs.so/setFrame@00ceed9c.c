
/* spine::PathConstraintMixTimeline::setFrame(int, float, float, float) */

void __thiscall
spine::PathConstraintMixTimeline::setFrame
          (PathConstraintMixTimeline *this,int param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x40);
  lVar1 = (long)param_1 + (long)param_1 * 2;
  pfVar2 = (float *)(lVar3 + (long)(int)lVar1 * 4);
  *pfVar2 = param_2;
  *(float *)(lVar3 + lVar1 * 4 + 4) = param_3;
  pfVar2[2] = param_4;
  return;
}

