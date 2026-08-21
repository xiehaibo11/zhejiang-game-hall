
/* js_universe_Device_getPlatformRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_getPlatformRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  plVar5 = (long *)se::State::args(aSStack_60);
  if (plVar5[1] - *plVar5 == 0) {
    iVar3 = universe::Device::getPlatform();
                    /* try { // try from 00971ebc to 00a71f07 has its CatchHandler @ 00971ebc
                       catch() { ... } // from try @ 00971ebc with catch @ 00971ebc
                       catch() { ... } // from try @ 00971f38 with catch @ 00971ebc */
    pVVar7 = (Value *)se::State::rval(aSStack_60);
    uVar6 = int32_to_seval(iVar3,pVVar7);
    if ((uVar6 & 1) != 0) goto LAB_00971f40;
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x670,"js_universe_Device_getPlatform");
                    /* try { // try from 00971f08 to 00a71f0f has its CatchHandler @ 00971f6c */
    __android_log_print(6,"jswrapper","js_universe_Device_getPlatform : Error processing arguments")
    ;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1651): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
                    /* try { // try from 00971f18 to 00a71f37 has its CatchHandler @ 00971f70 */
                    /* try { // try from 00971f38 to 00a71f83 has its CatchHandler @ 00971ebc */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_getPlatform",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x676);
LAB_00971f40:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar7 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
                    /* catch() { ... } // from try @ 00971f08 with catch @ 00971f6c */
                    /* catch() { ... } // from try @ 00971f18 with catch @ 00971f70 */
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

