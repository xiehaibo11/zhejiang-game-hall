
/* cocos2d::MoveBy::initWithDuration(float, cocos2d::Vec3 const&) */

undefined8 __thiscall cocos2d::MoveBy::initWithDuration(MoveBy *this,float param_1,Vec3 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar2 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar2;
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x58) = uVar1;
                    /* try { // try from 00edf784 to 00fdf793 has its CatchHandler @ 00edf7cc */
  this[0x56] = (MoveBy)0x1;
  return 1;
}

