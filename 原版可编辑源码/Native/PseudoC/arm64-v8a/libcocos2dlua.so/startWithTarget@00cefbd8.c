
/* cocosbuilder::CCBRotateXTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocosbuilder::CCBRotateXTo::startWithTarget(CCBRotateXTo *this,Node *param_1)

{
  float fVar1;
  
  *(Node **)(this + 0x30) = param_1;
  *(Node **)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x54] = (CCBRotateXTo)0x1;
  fVar1 = (float)(**(code **)(*(long *)param_1 + 0x1c0))(param_1);
  *(float *)(this + 0x58) = fVar1;
  *(float *)(this + 0x60) = *(float *)(this + 0x5c) - fVar1;
  return;
}

