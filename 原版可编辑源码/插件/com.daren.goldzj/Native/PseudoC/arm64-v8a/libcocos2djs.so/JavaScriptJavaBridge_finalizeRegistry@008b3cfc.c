
/* JavaScriptJavaBridge_finalizeRegistry(void*) */

void JavaScriptJavaBridge_finalizeRegistry(void *param_1)

{
  long lVar1;
  ScriptEngine *this;
  void *pvVar2;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this,true);
    se::State::State(aSStack_60,param_1);
    pvVar2 = (void *)se::State::nativeThisObject(aSStack_60);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    se::ScriptEngine::_setGarbageCollecting(this,false);
    se::State::~State(aSStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

