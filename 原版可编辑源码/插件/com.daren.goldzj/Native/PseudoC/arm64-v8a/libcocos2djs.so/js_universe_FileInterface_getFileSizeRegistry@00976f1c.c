
/* js_universe_FileInterface_getFileSizeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_getFileSizeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
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
                    /* try { // try from 00976f38 to 00a76f47 has its CatchHandler @ 00977028 */
                    /* try { // try from 00976f48 to 00a77047 has its CatchHandler @ 00976e54 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar5 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00976f38 with catch @ 00977028 */
                    /* catch() { ... } // from try @ 00976f14 with catch @ 0097702c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x8b3,"js_universe_FileInterface_getFileSize");
                    /* catch() { ... } // from try @ 00977128 with catch @ 00977064
                       catch() { ... } // from try @ 009771dc with catch @ 00977064 */
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_getFileSize : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_78);
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x8ba,"js_universe_FileInterface_getFileSize");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_getFileSize : Error processing arguments");
LAB_00977120:
                    /* try { // try from 00977120 to 00a77127 has its CatchHandler @ 009771dc */
        bVar2 = false;
      }
      else {
        lVar8 = (**(code **)(*plVar5 + 0x50))(plVar5,&local_78);
        pVVar9 = (Value *)se::State::rval(aSStack_60);
        uVar7 = long_to_seval(lVar8,pVVar9);
        if ((uVar7 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x8bd,"js_universe_FileInterface_getFileSize");
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_getFileSize : Error processing arguments");
          goto LAB_00977120;
        }
        bVar2 = true;
      }
                    /* try { // try from 00977128 to 00a771cb has its CatchHandler @ 00977064 */
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar2) goto LAB_00977164;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2240): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_getFileSize",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x8c3);
LAB_00977164:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
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
                    /* try { // try from 009771cc to 00a771db has its CatchHandler @ 009771dc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00977120 with catch @ 009771dc
                       catch() { ... } // from try @ 009771cc with catch @ 009771dc
                       try { // try from 009771dc to 00a771f7 has its CatchHandler @ 00977064 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

