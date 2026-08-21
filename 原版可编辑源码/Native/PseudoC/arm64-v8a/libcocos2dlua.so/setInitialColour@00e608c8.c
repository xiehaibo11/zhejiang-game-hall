
/* cocos2d::PURibbonTrail::setInitialColour(unsigned long, float, float, float, float) */

void __thiscall
cocos2d::PURibbonTrail::setInitialColour
          (PURibbonTrail *this,ulong param_1,float param_2,float param_3,float param_4,float param_5
          )

{
  float *pfVar1;
  
  pfVar1 = (float *)(*(long *)(this + 0x168) + param_1 * 0x10);
  *pfVar1 = param_2;
  pfVar1[1] = param_3;
  pfVar1[2] = param_4;
  pfVar1[3] = param_5;
  return;
}

