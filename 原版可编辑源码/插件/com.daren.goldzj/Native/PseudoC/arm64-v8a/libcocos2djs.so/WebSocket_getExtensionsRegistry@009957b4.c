
/* WebSocket_getExtensionsRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value> const&)
    */

void WebSocket_getExtensionsRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_90 [24];
  basic_string local_78 [16];
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_90,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar2);
  plVar3 = (long *)se::State::args(aSStack_60);
  if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) == 0) {
    se::State::nativeThisObject(aSStack_60);
    pVVar4 = (Value *)se::State::rval(aSStack_60);
    cocos2d::network::WebSocket::getExtensions();
                    /* catch() { ... } // from try @ 009956ec with catch @ 009958a8 */
    se::Value::setString(pVVar4,local_78);
                    /* catch() { ... } // from try @ 009956e0 with catch @ 009958ac */
                    /* catch() { ... } // from try @ 009956c0 with catch @ 009958b0 */
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
                    /* try { // try from 00995834 to 00a95917 has its CatchHandler @ 0099566c */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 549): wrong number of arguments: %d, was expecting 0\n"
                       );
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "WebSocket_getExtensions",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                        ,0x228);
  }
                    /* catch() { ... } // from try @ 009956f8 with catch @ 009958c0 */
  pVVar4 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

