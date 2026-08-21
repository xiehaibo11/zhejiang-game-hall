
/* cocos2d::RotateBy::initWithDuration(float, float, float) */

undefined8 __thiscall
cocos2d::RotateBy::initWithDuration(RotateBy *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
                    /* try { // try from 00edf0c8 to 00fdf0d3 has its CatchHandler @ 00edf168 */
  *(float *)(this + 0x58) = param_2;
  *(float *)(this + 0x5c) = param_3;
                    /* try { // try from 00edf0d4 to 00fdf0ef has its CatchHandler @ 00edf138 */
  return 1;
}

