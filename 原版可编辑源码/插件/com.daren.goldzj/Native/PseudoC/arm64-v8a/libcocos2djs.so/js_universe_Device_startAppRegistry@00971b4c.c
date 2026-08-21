
/* js_universe_Device_startAppRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_startAppRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  bool bVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00971b78 to 00a71b83 has its CatchHandler @ 00971bf8 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 00971b84 to 00a71c2f has its CatchHandler @ 00971a20 */
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  plVar5 = (long *)se::State::args(aSStack_60);
  if (plVar5[1] - *plVar5 == 0x10) {
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
                    /* catch() { ... } // from try @ 00971b78 with catch @ 00971bf8 */
    uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
    if ((uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x65f,"js_universe_Device_startApp");
      __android_log_print(6,"jswrapper","js_universe_Device_startApp : Error processing arguments");
      bVar8 = false;
    }
    else {
                    /* catch() { ... } // from try @ 00971a6c with catch @ 00971c14 */
      pcVar1 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar1 = local_68;
      }
      universe::Device::startApp(pcVar1);
      bVar8 = true;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar8) goto LAB_00971c8c;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1635): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_startApp",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x666);
LAB_00971c8c:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

