
/* WebSocket_getReadyStateRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value> const&)
    */

void WebSocket_getReadyStateRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  int iVar2;
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
                    /* try { // try from 0099551c to 00a9566b has its CatchHandler @ 00995278 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar6);
  pvVar3 = (void *)se::internal::getPrivate(pIVar6,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar3);
  plVar4 = (long *)se::State::args(aSStack_60);
  if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) == 0) {
    this = (WebSocket *)se::State::nativeThisObject(aSStack_60);
    pVVar5 = (Value *)se::State::rval(aSStack_60);
    iVar2 = cocos2d::network::WebSocket::getReadyState(this);
    se::Value::setInt32(pVVar5,iVar2);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 517): wrong number of arguments: %d, was expecting 0\n"
                       );
                    /* catch() { ... } // from try @ 00995350 with catch @ 00995594 */
                    /* catch() { ... } // from try @ 00995360 with catch @ 00995598
                       catch() { ... } // from try @ 00995448 with catch @ 00995598 */
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "WebSocket_getReadyState",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                        ,0x208);
  }
                    /* catch() { ... } // from try @ 0099533c with catch @ 009955e4
                       catch() { ... } // from try @ 009953f4 with catch @ 009955e4 */
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_2);
  se::State::~State(aSStack_60);
                    /* catch() { ... } // from try @ 009952fc with catch @ 009955fc */
  v8::HandleScope::~HandleScope(aHStack_78);
                    /* catch() { ... } // from try @ 009952f0 with catch @ 00995600 */
                    /* catch() { ... } // from try @ 009952d0 with catch @ 00995604 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00995308 with catch @ 00995614
                       catch() { ... } // from try @ 00995388 with catch @ 00995614
                       catch() { ... } // from try @ 009954e0 with catch @ 00995614 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

