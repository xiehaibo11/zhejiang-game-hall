
/* cocos2d::CallFunc::clone() const */

Action * __thiscall cocos2d::CallFunc::clone(CallFunc *this)

{
  long lVar1;
  Action *this_00;
  CallFunc *pCVar2;
  code *pcVar3;
  Ref *this_01;
  undefined8 uVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00eda7f4 with catch @ 00eda928 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00eda7cc with catch @ 00eda92c */
  this_00 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined ***)this_00 = &PTR__CallFunc_016f7d80;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7de8;
  }
  this_01 = *(Ref **)(this + 0x58);
  if (this_01 == (Ref *)0x0) {
    pCVar2 = *(CallFunc **)(this + 0x90);
    if (pCVar2 != (CallFunc *)0x0) {
      if (this + 0x70 == pCVar2) {
        local_50 = alStack_70;
        (**(code **)(*(long *)pCVar2 + 0x18))(pCVar2,alStack_70);
      }
      else {
        local_50 = (long *)(**(code **)(*(long *)pCVar2 + 0x10))();
      }
                    /* catch() { ... } // from try @ 00edaa5c with catch @ 00eda9ec */
      FUN_008820fc(alStack_70,this_00 + 0x70);
      if (alStack_70 == local_50) {
        pcVar3 = *(code **)(*local_50 + 0x20);
      }
      else {
        if (local_50 == (long *)0x0) goto LAB_00edaa20;
        pcVar3 = *(code **)(*local_50 + 0x28);
      }
      (*pcVar3)();
    }
  }
  else {
    Ref::retain(this_01);
    if (*(Ref **)(this_00 + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this_00 + 0x58));
    }
    *(Ref **)(this_00 + 0x58) = this_01;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this_00 + 0x60) = uVar4;
  }
LAB_00edaa20:
  Ref::autorelease((Ref *)this_00);
                    /* try { // try from 00edaa2c to 00fdaa4f has its CatchHandler @ 00edab88 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00edaa50 to 00fdaa5b has its CatchHandler @ 00edab84 */
  __stack_chk_fail();
}

