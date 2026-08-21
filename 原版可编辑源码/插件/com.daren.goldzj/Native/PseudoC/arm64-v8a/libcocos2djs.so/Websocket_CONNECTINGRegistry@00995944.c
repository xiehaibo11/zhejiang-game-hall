
/* Websocket_CONNECTINGRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value> const&) */

void Websocket_CONNECTINGRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

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
                    /* try { // try from 0099596c to 00a95983 has its CatchHandler @ 00995c3c */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
                    /* try { // try from 0099598c to 00a95997 has its CatchHandler @ 00995c38 */
  v8::HandleScope::HandleScope(aHStack_78,pIVar5);
                    /* try { // try from 00995998 to 00a959a3 has its CatchHandler @ 00995c34 */
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
                    /* try { // try from 009959a4 to 00a959bb has its CatchHandler @ 00995c4c */
  se::State::State(aSStack_60,pvVar2);
  plVar3 = (long *)se::State::args(aSStack_60);
  if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) == 0) {
    pVVar4 = (Value *)se::State::rval(aSStack_60);
    se::Value::setInt32(pVVar4,0);
  }
  else {
                    /* try { // try from 009959d8 to 00a959df has its CatchHandler @ 00995c1c */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 569): wrong number of arguments: %d, was expecting 0\n"
                       );
                    /* try { // try from 009959e4 to 00a959f3 has its CatchHandler @ 00995bf8 */
                    /* try { // try from 009959f4 to 00a95a07 has its CatchHandler @ 00995bfc */
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "Websocket_CONNECTING",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                        ,0x239);
  }
                    /* try { // try from 00995a1c to 00a95a83 has its CatchHandler @ 00995c4c */
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

