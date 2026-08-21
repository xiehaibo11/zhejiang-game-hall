
/* spine::ColorTimeline::setFrame(int, float, float, float, float, float) */

void __thiscall
spine::ColorTimeline::setFrame
          (ColorTimeline *this,int param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x48);
  lVar1 = (long)param_1 + (long)param_1 * 4;
  pfVar2 = (float *)(lVar3 + (long)(int)lVar1 * 4);
  *pfVar2 = param_2;
  *(float *)(lVar3 + lVar1 * 4 + 4) = param_3;
  pfVar2[2] = param_4;
  pfVar2[3] = param_5;
  pfVar2[4] = param_6;
  return;
}

