
/* cocos2d::ScaleTo::initWithDuration(float, float) */

undefined8 __thiscall cocos2d::ScaleTo::initWithDuration(ScaleTo *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(float *)(this + 0x70) = param_2;
  *(float *)(this + 0x74) = param_2;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
                    /* catch() { ... } // from try @ 00ee1a64 with catch @ 00ee1acc */
  *(float *)(this + 0x78) = param_2;
  return 1;
}

