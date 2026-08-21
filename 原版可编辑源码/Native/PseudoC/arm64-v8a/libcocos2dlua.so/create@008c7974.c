
/* cocos2d::LuaCallFunc::create(std::__ndk1::function<void (void*, cocos2d::Node*)> const&) */

Action * cocos2d::LuaCallFunc::create(function *param_1)

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
  this = operator_new(0x100,(nothrow_t *)&std::nothrow);
  if (this == (Action *)0x0) goto LAB_008c7a6c;
  Action::Action(this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR__LuaCallFunc_0169b360;
  *(undefined ***)(this + 0x28) = &PTR_clone_0169b3c8;
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
  FUN_008c912c(alStack_70,this + 0xd0);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_008c7a60:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_008c7a60;
  }
  Ref::autorelease((Ref *)this);
LAB_008c7a6c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

