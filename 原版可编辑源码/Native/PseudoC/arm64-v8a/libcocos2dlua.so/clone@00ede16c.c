
/* cocos2d::Spawn::clone() const */

Action * __thiscall cocos2d::Spawn::clone(Spawn *this)

{
  FiniteTimeAction *pFVar1;
  FiniteTimeAction *pFVar2;
  Action *this_00;
  ulong uVar3;
  
  if ((*(long **)(this + 0x58) != (long *)0x0) && (*(long *)(this + 0x60) != 0)) {
    pFVar1 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    pFVar2 = (FiniteTimeAction *)
             (**(code **)(**(long **)(this + 0x60) + 0x18))(*(long **)(this + 0x60));
    this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
    if (this_00 == (Action *)0x0) {
      return (Action *)0x0;
    }
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Spawn_016f86b8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8718;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    uVar3 = initWithTwoActions((Spawn *)this_00,pFVar1,pFVar2);
    if ((uVar3 & 1) != 0) {
      Ref::autorelease((Ref *)this_00);
      return this_00;
    }
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
  return (Action *)0x0;
}

