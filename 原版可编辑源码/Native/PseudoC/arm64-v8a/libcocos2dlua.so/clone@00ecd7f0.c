
/* cocos2d::CardinalSplineTo::clone() const */

Action * __thiscall cocos2d::CardinalSplineTo::clone(CardinalSplineTo *this)

{
  undefined4 uVar1;
  Action *this_00;
  Ref *this_01;
  ulong uVar2;
  float fVar3;
  
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined ***)this_00 = &PTR__CardinalSplineTo_016f57d8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f5840;
  }
  fVar3 = *(float *)(this + 0x4c);
  this_01 = (Ref *)(**(code **)(**(long **)(this + 0x58) + 0x10))();
  uVar1 = *(undefined4 *)(this + 100);
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this_00,fVar3);
  if ((uVar2 & 1) != 0) {
    if (this_01 != (Ref *)0x0) {
      Ref::retain(this_01);
    }
    if (*(Ref **)(this_00 + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this_00 + 0x58));
    }
    *(Ref **)(this_00 + 0x58) = this_01;
    *(undefined4 *)(this_00 + 100) = uVar1;
  }
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

