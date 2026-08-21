
/* cocos2d::BezierTo::create(float, cocos2d::_ccBezierConfig const&) */

Action * cocos2d::BezierTo::create(float param_1,_ccBezierConfig *param_2)

{
  Action *this;
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00ee16b4 to 00fe16cf has its CatchHandler @ 00ee178c */
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined8 *)(this + 0x78) = 0;
                    /* try { // try from 00ee16ec to 00fe16f3 has its CatchHandler @ 00ee175c */
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
                    /* try { // try from 00ee16f4 to 00fe17a7 has its CatchHandler @ 00ee1668 */
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__Action_016f9088;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f90e8;
    *(float *)(this + 0x4c) = fVar1;
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(this + 0x88) = uVar3;
    *(undefined8 *)(this + 0x80) = uVar2;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

