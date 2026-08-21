
/* cocos2d::FadeTo::initWithDuration(float, unsigned char) */

undefined8 __thiscall cocos2d::FadeTo::initWithDuration(FadeTo *this,float param_1,uchar param_2)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  this[0x56] = (FadeTo)param_2;
  return 1;
}

