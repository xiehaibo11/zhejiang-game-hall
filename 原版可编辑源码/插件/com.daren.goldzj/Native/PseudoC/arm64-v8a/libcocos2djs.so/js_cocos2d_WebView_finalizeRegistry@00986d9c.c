
/* js_cocos2d_WebView_finalizeRegistry(void*) */

void js_cocos2d_WebView_finalizeRegistry(void *param_1)

{
  long lVar1;
  ScriptEngine *this;
  State aSStack_60 [40];
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00986d60 with catch @ 00986da0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00986cb0 with catch @ 00986da4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00986cec with catch @ 00986dac
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00986ce0 with catch @ 00986dbc
                       catch(type#1 @ 00000000) { ... } // from try @ 00986d34 with catch @ 00986dbc
                        */
  if (param_1 != (void *)0x0) {
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this,true);
                    /* try { // try from 00986ddc to 00a86ddf has its CatchHandler @ 00986de8 */
    se::State::State(aSStack_60,param_1);
                    /* try { // try from 00986de0 to 00a86deb has its CatchHandler @ 00986c58 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00986ddc with catch @ 00986de8
                        */
    se::ScriptEngine::_setGarbageCollecting(this,false);
                    /* try { // try from 00986dec to 00a86def has its CatchHandler @ 00986df8 */
                    /* try { // try from 00986df0 to 00a86dfb has its CatchHandler @ 00986c58 */
    se::State::~State(aSStack_60);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00986dec with catch @ 00986df8
                        */
                    /* try { // try from 00986dfc to 00a86efb has its CatchHandler @ 00986dfc
                       catch() { ... } // from try @ 00986dfc with catch @ 00986dfc
                       catch() { ... } // from try @ 00986f08 with catch @ 00986dfc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

