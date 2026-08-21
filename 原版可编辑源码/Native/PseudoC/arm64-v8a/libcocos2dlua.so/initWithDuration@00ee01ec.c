
/* cocos2d::SkewBy::initWithDuration(float, float, float) */

undefined8 __thiscall
cocos2d::SkewBy::initWithDuration(SkewBy *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
                    /* try { // try from 00ee01ec to 00fe023b has its CatchHandler @ 00ee01ec
                       catch() { ... } // from try @ 00ee01ec with catch @ 00ee01ec
                       catch() { ... } // from try @ 00ee024c with catch @ 00ee01ec */
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(float *)(this + 0x68) = param_2;
  *(float *)(this + 0x6c) = param_3;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  *(float *)(this + 0x58) = param_2;
  *(float *)(this + 0x5c) = param_3;
  return 1;
}

