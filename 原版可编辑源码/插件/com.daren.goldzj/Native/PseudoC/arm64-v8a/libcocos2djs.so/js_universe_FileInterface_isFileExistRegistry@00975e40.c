
/* js_universe_FileInterface_isFileExistRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_isFileExistRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  byte bVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00975ec8 to 00a75f17 has its CatchHandler @ 00975ec8
                       catch() { ... } // from try @ 00975ec8 with catch @ 00975ec8
                       catch() { ... } // from try @ 00975f8c with catch @ 00975ec8
                       catch() { ... } // from try @ 00976064 with catch @ 00975ec8
                       catch() { ... } // from try @ 00976190 with catch @ 00975ec8
                       catch() { ... } // from try @ 00976224 with catch @ 00975ec8
                       catch() { ... } // from try @ 00976324 with catch @ 00975ec8
                       catch() { ... } // from try @ 00976340 with catch @ 00975ec8 */
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x84c,"js_universe_FileInterface_isFileExist");
                    /* try { // try from 00975f84 to 00a75f8b has its CatchHandler @ 00976348 */
                    /* try { // try from 00975f8c to 00a75fc7 has its CatchHandler @ 00975ec8 */
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_isFileExist : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_78);
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 00975fc8 to 00a75fd3 has its CatchHandler @ 0097634c */
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x853,"js_universe_FileInterface_isFileExist");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_isFileExist : Error processing arguments");
LAB_00976044:
        bVar2 = false;
      }
      else {
                    /* try { // try from 00975f18 to 00a75f23 has its CatchHandler @ 00976350 */
        bVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
        pVVar9 = (Value *)se::State::rval(aSStack_60);
        uVar8 = boolean_to_seval((bool)(bVar4 & 1),pVVar9);
        if ((uVar8 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x856,"js_universe_FileInterface_isFileExist");
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_isFileExist : Error processing arguments");
          goto LAB_00976044;
        }
        bVar2 = true;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar2) goto LAB_00976088;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2137): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
                    /* try { // try from 0097605c to 00a76063 has its CatchHandler @ 00976360 */
                    /* try { // try from 00976064 to 00a7609b has its CatchHandler @ 00975ec8 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_isFileExist",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x85c);
LAB_00976088:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
                    /* try { // try from 0097609c to 00a7618f has its CatchHandler @ 00976370 */
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

