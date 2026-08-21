
/* js_cocos2d_renderer_AssemblerBase_finalizeRegistry(void*) */

void js_cocos2d_renderer_AssemblerBase_finalizeRegistry(void *param_1)

{
  long lVar1;
  ScriptEngine *this;
  Ref *this_00;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this,true);
    se::State::State(aSStack_60,param_1);
    this_00 = (Ref *)se::State::nativeThisObject(aSStack_60);
    cocos2d::Ref::release(this_00);
    se::ScriptEngine::_setGarbageCollecting(this,false);
    se::State::~State(aSStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

