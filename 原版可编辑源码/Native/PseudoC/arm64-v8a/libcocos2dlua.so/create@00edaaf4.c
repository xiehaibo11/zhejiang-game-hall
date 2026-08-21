
/* cocos2d::CallFuncN::create(std::__ndk1::function<void (cocos2d::Node*)> const&) */

Action * cocos2d::CallFuncN::create(function *param_1)

{
  long lVar1;
  Action *this;
  long *plVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this == (Action *)0x0) goto LAB_00edabe8;
  Action::Action(this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined ***)this = &PTR__CallFuncN_016f83b8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8420;
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00edaa2c with catch @ 00edab88 */
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    local_50 = alStack_70;
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
                    /* catch() { ... } // from try @ 00edaa50 with catch @ 00edab84 */
  }
  FUN_00edbd1c(alStack_70,this + 0xa0);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00edabdc:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00edabdc;
  }
  Ref::autorelease((Ref *)this);
LAB_00edabe8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

