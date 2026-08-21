
/* Websocket_CLOSEDRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value> const&) */

void Websocket_CLOSEDRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
                    /* try { // try from 00995d1c to 00a95d27 has its CatchHandler @ 00996050 */
                    /* try { // try from 00995d28 to 00a95d33 has its CatchHandler @ 0099604c */
  lVar1 = tpidr_el0;
                    /* try { // try from 00995d34 to 00a95d4b has its CatchHandler @ 00996064 */
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
                    /* try { // try from 00995d7c to 00a95d97 has its CatchHandler @ 00995ff0 */
  se::State::State(aSStack_60,pvVar2);
  plVar3 = (long *)se::State::args(aSStack_60);
  if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) == 0) {
                    /* try { // try from 00995de4 to 00a95e4b has its CatchHandler @ 00996064 */
    pVVar4 = (Value *)se::State::rval(aSStack_60);
    se::Value::setInt32(pVVar4,3);
  }
  else {
                    /* try { // try from 00995da8 to 00a95dcf has its CatchHandler @ 00995fec */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 572): wrong number of arguments: %d, was expecting 0\n"
                       );
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "Websocket_CLOSED",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                        ,0x23c);
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

