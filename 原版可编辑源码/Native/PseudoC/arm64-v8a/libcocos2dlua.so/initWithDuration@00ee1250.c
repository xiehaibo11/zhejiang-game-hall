
/* cocos2d::BezierBy::initWithDuration(float, cocos2d::_ccBezierConfig const&) */

undefined8 __thiscall
cocos2d::BezierBy::initWithDuration(BezierBy *this,float param_1,_ccBezierConfig *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar2;
  return 1;
}

