
/* cocos2d::__CCCallFuncO::clone() const */

Action * __thiscall cocos2d::__CCCallFuncO::clone(__CCCallFuncO *this)

{
  Ref *this_00;
  undefined8 uVar1;
  Action *this_01;
  undefined8 uVar2;
  Ref *this_02;
  
  this_01 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this_01 != (Action *)0x0) {
    Action::Action(this_01);
    *(undefined4 *)(this_01 + 0x4c) = 0;
    *(undefined8 *)(this_01 + 0x90) = 0;
    *(undefined8 *)(this_01 + 0x60) = 0;
    *(undefined8 *)(this_01 + 0x68) = 0;
    *(undefined8 *)(this_01 + 0x58) = 0;
    *(undefined8 *)(this_01 + 0xa0) = 0;
    *(undefined ***)this_01 = &PTR____CCCallFuncO_016f7e10;
    *(undefined ***)(this_01 + 0x28) = &PTR_clone_016f7e78;
  }
  this_02 = *(Ref **)(this + 0x58);
  if (this_02 != (Ref *)0x0) {
    this_00 = *(Ref **)(this + 0xa0);
    uVar1 = *(undefined8 *)(this + 0xa8);
    uVar2 = *(undefined8 *)(this + 0xb0);
    Ref::retain(this_02);
    if (*(Ref **)(this_01 + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this_01 + 0x58));
    }
    *(Ref **)(this_01 + 0x58) = this_02;
    *(Ref **)(this_01 + 0xa0) = this_00;
    if (this_00 != (Ref *)0x0) {
      Ref::retain(this_00);
    }
    *(undefined8 *)(this_01 + 0xa8) = uVar1;
    *(undefined8 *)(this_01 + 0xb0) = uVar2;
  }
  Ref::autorelease((Ref *)this_01);
  return this_01;
}

