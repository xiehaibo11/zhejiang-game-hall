
/* js_universe_FileInterface_getFileDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_getFileDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar7);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
                    /* try { // try from 00978a8c to 00a78a8f has its CatchHandler @ 00978c00 */
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_c0);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x95c,"js_universe_FileInterface_getFileData");
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_getFileData : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0x30) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
      local_88 = 0;
      local_80 = (void *)0x0;
                    /* try { // try from 00978aec to 00a78af3 has its CatchHandler @ 00978be0 */
      local_90 = 0;
                    /* try { // try from 00978af4 to 00a78c17 has its CatchHandler @ 00978900 */
      seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_90);
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x968,"js_universe_FileInterface_getFileData");
      __android_log_print(6,"jswrapper",
                          "js_universe_FileInterface_getFileData : Error processing arguments");
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2414): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,3);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00978aec with catch @ 00978be0
                        */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_getFileData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x971);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00978a8c with catch @ 00978c00
                        */
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_c0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00978950 with catch @ 00978c14
                        */
  pVVar6 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

