
/* cocos2d::LuaCallFunc::execute() */

void __thiscall cocos2d::LuaCallFunc::execute(LuaCallFunc *this)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  LuaCallFunc *pLStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0xf0);
  if (plVar2 == (long *)0x0) {
    CallFuncN::execute((CallFuncN *)this);
  }
  else {
    local_38 = *(undefined8 *)(this + 0x38);
    pLStack_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&pLStack_30,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

