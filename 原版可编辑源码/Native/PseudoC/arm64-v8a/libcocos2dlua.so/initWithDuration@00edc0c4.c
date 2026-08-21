
/* cocos2d::ActionInterval::initWithDuration(float) */

undefined8 __thiscall cocos2d::ActionInterval::initWithDuration(ActionInterval *this,float param_1)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(float *)(this + 0x4c) = fVar1;
  *(undefined2 *)(this + 0x54) = 1;
  return 1;
}

