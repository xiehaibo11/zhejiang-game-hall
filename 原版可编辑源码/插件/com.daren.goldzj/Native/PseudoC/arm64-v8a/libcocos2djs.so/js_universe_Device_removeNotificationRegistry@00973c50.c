
/* js_universe_Device_removeNotificationRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_removeNotificationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Value *pVVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00973c74 to 00a73c7f has its CatchHandler @ 00973cd8 */
                    /* try { // try from 00973c80 to 00a73cc7 has its CatchHandler @ 009738b0 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar7);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
                    /* try { // try from 00973cc8 to 00a73ccf has its CatchHandler @ 00973cd4 */
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00973cd0 to 00a73cf7 has its CatchHandler @ 009738b0 */
                    /* catch() { ... } // from try @ 00973cc8 with catch @ 00973cd4 */
                    /* catch() { ... } // from try @ 00973c74 with catch @ 00973cd8 */
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
                    /* catch() { ... } // from try @ 00973a94 with catch @ 00973cdc
                       catch() { ... } // from try @ 00973bc0 with catch @ 00973cdc */
  puVar4 = (undefined8 *)se::State::args(aSStack_60);
  uVar6 = puVar4[1] - (long)*puVar4;
                    /* try { // try from 00973cf8 to 00a73deb has its CatchHandler @ 00973cf8
                       catch() { ... } // from try @ 00973cf8 with catch @ 00973cf8
                       catch() { ... } // from try @ 00973ec4 with catch @ 00973cf8
                       catch() { ... } // from try @ 00973f14 with catch @ 00973cf8 */
  if (uVar6 == 0x10) {
    local_64 = 0;
    uVar6 = seval_to_int32((Value *)*puVar4,&local_64);
    if ((uVar6 & 1) != 0) {
      universe::Device::removeNotification(local_64);
      goto LAB_00973dac;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x747,"js_universe_Device_removeNotification");
    __android_log_print(6,"jswrapper",
                        "js_universe_Device_removeNotification : Error processing arguments");
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1867): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar6 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_removeNotification",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x74e);
LAB_00973dac:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
                    /* try { // try from 00973e0c to 00a73e13 has its CatchHandler @ 00973f14 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

