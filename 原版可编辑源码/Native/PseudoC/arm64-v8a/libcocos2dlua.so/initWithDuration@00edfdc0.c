
/* cocos2d::SkewTo::initWithDuration(float, float, float) */

undefined8 __thiscall
cocos2d::SkewTo::initWithDuration(SkewTo *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  *(float *)(this + 0x68) = param_2;
  *(float *)(this + 0x6c) = param_3;
  return 1;
}

