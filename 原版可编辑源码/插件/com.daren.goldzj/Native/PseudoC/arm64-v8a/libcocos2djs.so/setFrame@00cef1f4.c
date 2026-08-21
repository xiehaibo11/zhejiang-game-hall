
/* spine::PathConstraintPositionTimeline::setFrame(int, float, float) */

void __thiscall
spine::PathConstraintPositionTimeline::setFrame
          (PathConstraintPositionTimeline *this,int param_1,float param_2,float param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x40);
  *(float *)(lVar1 + (long)(param_1 << 1) * 4) = param_2;
  *(float *)(lVar1 + ((long)param_1 << 3 | 4U)) = param_3;
  return;
}

