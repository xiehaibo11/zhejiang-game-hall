
/* Websocket_CLOSINGRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value> const&) */

void Websocket_CLOSINGRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009959e4 with catch @ 00995bf8 */
                    /* catch() { ... } // from try @ 009959f4 with catch @ 00995bfc
                       catch() { ... } // from try @ 00995adc with catch @ 00995bfc */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
                    /* catch() { ... } // from try @ 009959d8 with catch @ 00995c1c
                       catch() { ... } // from try @ 00995a88 with catch @ 00995c1c */
  v8::HandleScope::HandleScope(aHStack_78,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
                    /* catch() { ... } // from try @ 00995998 with catch @ 00995c34 */
                    /* catch() { ... } // from try @ 0099598c with catch @ 00995c38 */
  se::State::State(aSStack_60,pvVar2);
                    /* catch() { ... } // from try @ 0099596c with catch @ 00995c3c */
  plVar3 = (long *)se::State::args(aSStack_60);
                    /* catch() { ... } // from try @ 009959a4 with catch @ 00995c4c
                       catch() { ... } // from try @ 00995a1c with catch @ 00995c4c
                       catch() { ... } // from try @ 00995b48 with catch @ 00995c4c */
  if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) == 0) {
    pVVar4 = (Value *)se::State::rval(aSStack_60);
                    /* try { // try from 00995ca4 to 00a95cfb has its CatchHandler @ 00995ca4
                       catch() { ... } // from try @ 00995ca4 with catch @ 00995ca4
                       catch() { ... } // from try @ 00995f74 with catch @ 00995ca4 */
    se::Value::setInt32(pVVar4,2);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 571): wrong number of arguments: %d, was expecting 0\n"
                       );
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "Websocket_CLOSING",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                        ,0x23b);
  }
  pVVar4 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

