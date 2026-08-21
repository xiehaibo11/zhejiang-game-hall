
/* WebSocket_finalizeRegistry(void*) */

void WebSocket_finalizeRegistry(void *param_1)

{
  Ref *this;
  long lVar1;
  int iVar2;
  ScriptEngine *this_00;
  WebSocket *this_01;
  long lVar3;
  State aSStack_60 [40];
  long local_38;
  
                    /* try { // try from 00994204 to 00a9420f has its CatchHandler @ 00994640 */
                    /* try { // try from 00994210 to 00a9421b has its CatchHandler @ 0099463c */
  lVar1 = tpidr_el0;
                    /* try { // try from 0099421c to 00a94233 has its CatchHandler @ 00994654 */
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    this_00 = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this_00,true);
    se::State::State(aSStack_60,param_1);
    this_01 = (WebSocket *)se::State::nativeThisObject(aSStack_60);
    iVar2 = cocos2d::network::WebSocket::getReadyState(this_01);
    if (iVar2 != 3) {
                    /* try { // try from 00994260 to 00a94267 has its CatchHandler @ 00994624 */
      cocos2d::network::WebSocket::closeAsync(this_01);
    }
    lVar3 = cocos2d::network::WebSocket::getDelegate(this_01);
    this = (Ref *)0x0;
    if (lVar3 != 0) {
      this = (Ref *)(lVar3 + -0x10);
    }
                    /* try { // try from 0099427c to 00a94283 has its CatchHandler @ 009945fc */
    cocos2d::Ref::release(this);
    iVar2 = cocos2d::Ref::getReferenceCount((Ref *)this_01);
    if (iVar2 == 1) {
                    /* try { // try from 00994290 to 00a942b7 has its CatchHandler @ 00994600 */
      cocos2d::Ref::autorelease((Ref *)this_01);
    }
    else {
      cocos2d::Ref::release((Ref *)this_01);
    }
    se::ScriptEngine::_setGarbageCollecting(this_00,false);
    se::State::~State(aSStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009942d0 to 00a94313 has its CatchHandler @ 00994654 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

