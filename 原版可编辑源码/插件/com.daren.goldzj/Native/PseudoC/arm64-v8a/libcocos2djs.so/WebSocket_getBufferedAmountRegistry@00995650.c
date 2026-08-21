
/* WebSocket_getBufferedAmountRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value>
   const&) */

void WebSocket_getBufferedAmountRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  long *plVar4;
  WebSocket *this;
  Value *pVVar5;
  Isolate *pIVar6;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0099566c to 00a956bf has its CatchHandler @ 0099566c
                       catch() { ... } // from try @ 0099566c with catch @ 0099566c
                       catch() { ... } // from try @ 00995834 with catch @ 0099566c */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar6);
  pvVar3 = (void *)se::internal::getPrivate(pIVar6,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar3);
  plVar4 = (long *)se::State::args(aSStack_60);
                    /* try { // try from 009956c0 to 00a956d7 has its CatchHandler @ 009958b0 */
  if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) == 0) {
    this = (WebSocket *)se::State::nativeThisObject(aSStack_60);
    pVVar5 = (Value *)se::State::rval(aSStack_60);
    uVar2 = cocos2d::network::WebSocket::getBufferedAmount(this);
    se::Value::setUint32(pVVar5,uVar2);
  }
  else {
                    /* try { // try from 009956e0 to 00a956eb has its CatchHandler @ 009958ac */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 533): wrong number of arguments: %d, was expecting 0\n"
                       );
                    /* try { // try from 009956ec to 00a956f7 has its CatchHandler @ 009958a8 */
                    /* try { // try from 009956f8 to 00a95833 has its CatchHandler @ 009958c0 */
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "WebSocket_getBufferedAmount",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                        ,0x218);
  }
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

