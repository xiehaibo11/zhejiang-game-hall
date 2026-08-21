
/* js_universe_Device_finalizeRegistry(void*) */

void js_universe_Device_finalizeRegistry(void *param_1)

{
  long lVar1;
  ScriptEngine *this;
  void *pvVar2;
  long lVar3;
  long lVar4;
  State aSStack_60 [40];
  long local_38;
  
                    /* try { // try from 009758f0 to 00a758fb has its CatchHandler @ 00975ba4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this,true);
    se::State::State(aSStack_60,param_1);
    pvVar2 = (void *)se::State::nativeThisObject(aSStack_60);
    lVar3 = se::NonRefNativePtrCreatedByCtorMap::find(pvVar2);
    lVar4 = se::NonRefNativePtrCreatedByCtorMap::end();
    if (lVar3 != lVar4) {
      se::NonRefNativePtrCreatedByCtorMap::erase(lVar3);
      pvVar2 = (void *)se::State::nativeThisObject(aSStack_60);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
    se::ScriptEngine::_setGarbageCollecting(this,false);
    se::State::~State(aSStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00975988 to 00a7598f has its CatchHandler @ 00975bb8 */
                    /* try { // try from 00975990 to 00a759bb has its CatchHandler @ 009757e8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

