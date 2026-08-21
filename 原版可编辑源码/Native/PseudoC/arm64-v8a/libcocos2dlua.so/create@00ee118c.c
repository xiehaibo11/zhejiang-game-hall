
/* cocos2d::BezierBy::create(float, cocos2d::_ccBezierConfig const&) */

Action * cocos2d::BezierBy::create(float param_1,_ccBezierConfig *param_2)

{
  Action *this;
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined ***)this = &PTR__Action_016f8fe8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9048;
    *(float *)(this + 0x4c) = fVar1;
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(this + 0x60) = uVar3;
    *(undefined8 *)(this + 0x58) = uVar2;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

