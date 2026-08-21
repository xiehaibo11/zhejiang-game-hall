
/* cocos2d::EventDispatcher::init() */

void cocos2d::EventDispatcher::init(void)

{
  long lVar1;
  ScriptEngine *this;
  code *pcVar2;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_60[0] = &PTR_FUN_01c68b00;
  local_40 = (long *)local_60;
  se::ScriptEngine::addBeforeCleanupHook(this,(function *)local_60);
  if (local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_0090e578;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_0090e578:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

