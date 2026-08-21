
/* js_cocos2d_renderer_NodeMemPool_finalizeRegistry(void*) */

void js_cocos2d_renderer_NodeMemPool_finalizeRegistry(void *param_1)

{
  long lVar1;
  ScriptEngine *this;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009504c4 to 00a504cb has its CatchHandler @ 009505a4 */
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this,true);
    se::State::State(aSStack_60,param_1);
                    /* try { // try from 009504f4 to 00a5050b has its CatchHandler @ 0095057c */
    pvVar2 = (void *)se::State::nativeThisObject(aSStack_60);
    lVar3 = se::NonRefNativePtrCreatedByCtorMap::find(pvVar2);
    lVar4 = se::NonRefNativePtrCreatedByCtorMap::end();
    if (lVar3 != lVar4) {
                    /* try { // try from 0095050c to 00a505f7 has its CatchHandler @ 0094f5e4 */
      se::NonRefNativePtrCreatedByCtorMap::erase(lVar3);
      plVar5 = (long *)se::State::nativeThisObject(aSStack_60);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
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

