
/* cocos2d::ScaleTo::initWithDuration(float, float, float, float) */

undefined8 __thiscall
cocos2d::ScaleTo::initWithDuration
          (ScaleTo *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = 1e-06;
                    /* try { // try from 00ee1cb8 to 00fe1cbf has its CatchHandler @ 00ee1d24 */
                    /* try { // try from 00ee1cc0 to 00fe1d6f has its CatchHandler @ 00ee1c48 */
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(float *)(this + 0x70) = param_2;
  *(float *)(this + 0x74) = param_3;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  *(float *)(this + 0x78) = param_4;
  return 1;
}

