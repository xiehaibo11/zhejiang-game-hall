
/* cocos2d::TintBy::initWithDuration(float, short, short, short) */

undefined8 __thiscall
cocos2d::TintBy::initWithDuration
          (TintBy *this,float param_1,short param_2,short param_3,short param_4)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(short *)(this + 0x56) = param_2;
  *(short *)(this + 0x58) = param_3;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  *(short *)(this + 0x5a) = param_4;
  return 1;
}

