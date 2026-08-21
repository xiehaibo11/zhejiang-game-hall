
/* cocos2d::RotateTo::initWithDuration(float, cocos2d::Vec3 const&) */

undefined8 __thiscall
cocos2d::RotateTo::initWithDuration(RotateTo *this,float param_1,Vec3 *param_2)

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
  this[0x56] = (RotateTo)0x1;
  return 1;
}

