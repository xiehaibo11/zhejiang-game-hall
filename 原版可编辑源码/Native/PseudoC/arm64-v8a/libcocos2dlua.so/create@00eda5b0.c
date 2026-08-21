
/* cocos2d::CallFunc::create(std::__ndk1::function<void ()> const&) */

Action * cocos2d::CallFunc::create(function *param_1)

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
  this = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this == (Action *)0x0) goto LAB_00eda6a0;
  Action::Action(this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__CallFunc_016f7d80;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f7de8;
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    local_50 = alStack_70;
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_008820fc(alStack_70,this + 0x70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00eda694:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00eda694;
  }
  Ref::autorelease((Ref *)this);
LAB_00eda6a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00eda594 with catch @ 00eda6c8 */
  __stack_chk_fail();
}

