
/* cocos2d::RotateBy::initWithDuration(float, float) */

undefined8 __thiscall
cocos2d::RotateBy::initWithDuration(RotateBy *this,float param_1,float param_2)

{
  float fVar1;
  
                    /* catch() { ... } // from try @ 00edee80 with catch @ 00edef78 */
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  *(float *)(this + 0x58) = param_2;
  *(float *)(this + 0x5c) = param_2;
  return 1;
}

