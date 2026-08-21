
/* cocos2d::middleware::TypedArrayPool::afterCleanupHandle() */

void __thiscall cocos2d::middleware::TypedArrayPool::afterCleanupHandle(TypedArrayPool *this)

{
  long lVar1;
  ScriptEngine *this_00;
  code *pcVar2;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  TypedArrayPool *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this[0x18] = (TypedArrayPool)0x0;
  clearPool(this);
  this_00 = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_70 = &PTR_FUN_01c92010;
  uStack_60 = 0;
  local_68 = afterInitHandle;
  local_58 = this;
  local_50 = (long *)&local_70;
  se::ScriptEngine::addAfterInitHook(this_00,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00d5f86c;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00d5f86c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

