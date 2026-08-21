
/* SocketIO_finalizeRegistry(void*) */

void SocketIO_finalizeRegistry(void *param_1)

{
  Ref *this;
  long lVar1;
  int iVar2;
  ScriptEngine *this_00;
  SIOClient *this_01;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    this_00 = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this_00,true);
    se::State::State(aSStack_60,param_1);
    this_01 = (SIOClient *)se::State::nativeThisObject(aSStack_60);
    cocos2d::network::SIOClient::disconnect(this_01);
    this = (Ref *)0x0;
    if (*(long *)(this_01 + 0x50) != 0) {
      this = (Ref *)(*(long *)(this_01 + 0x50) + -0x10);
    }
    iVar2 = cocos2d::Ref::getReferenceCount(this);
    if (iVar2 == 1) {
                    /* try { // try from 0098f9b0 to 00a8fa5f has its CatchHandler @ 0098f9b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0098f9b0 with catch @ 0098f9b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0098fb14 with catch @ 0098f9b0
                        */
      cocos2d::Ref::autorelease(this);
    }
    else {
      cocos2d::Ref::release(this);
    }
    cocos2d::Ref::release((Ref *)this_01);
    se::ScriptEngine::_setGarbageCollecting(this_00,false);
    se::State::~State(aSStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

