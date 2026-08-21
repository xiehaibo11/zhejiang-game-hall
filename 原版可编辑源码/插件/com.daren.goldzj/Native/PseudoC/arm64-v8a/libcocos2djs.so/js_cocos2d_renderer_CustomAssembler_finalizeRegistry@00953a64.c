
/* js_cocos2d_renderer_CustomAssembler_finalizeRegistry(void*) */

void js_cocos2d_renderer_CustomAssembler_finalizeRegistry(void *param_1)

{
  long lVar1;
  ScriptEngine *this;
  Ref *this_00;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009531e0 with catch @ 00953a80
                       catch() { ... } // from try @ 00953920 with catch @ 00953a80 */
  if (param_1 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00952f90 with catch @ 00953a88
                       catch() { ... } // from try @ 00953918 with catch @ 00953a88 */
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
                    /* catch() { ... } // from try @ 00952e70 with catch @ 00953a94
                       catch() { ... } // from try @ 00953910 with catch @ 00953a94 */
    se::ScriptEngine::_setGarbageCollecting(this,true);
    se::State::State(aSStack_60,param_1);
    this_00 = (Ref *)se::State::nativeThisObject(aSStack_60);
    cocos2d::Ref::release(this_00);
    se::ScriptEngine::_setGarbageCollecting(this,false);
    se::State::~State(aSStack_60);
  }
                    /* catch() { ... } // from try @ 00952d54 with catch @ 00953ac8
                       catch() { ... } // from try @ 00953908 with catch @ 00953ac8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00952c3c with catch @ 00953ae0
                       catch() { ... } // from try @ 00953900 with catch @ 00953ae0 */
                    /* catch() { ... } // from try @ 00953814 with catch @ 00953ae8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

