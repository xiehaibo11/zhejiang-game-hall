
/* js_universe_FileInterface_getStringFromFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_universe_FileInterface_getStringFromFileRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  basic_string local_90 [16];
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
                    /* try { // try from 00976bd0 to 00a76c23 has its CatchHandler @ 00976c24 */
  v8::HandleScope::HandleScope(aHStack_a8,pIVar9);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_c0);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00976ca8 to 00a76ce3 has its CatchHandler @ 00976ca8
                       catch() { ... } // from try @ 00976ca8 with catch @ 00976ca8
                       catch() { ... } // from try @ 00976d0c with catch @ 00976ca8 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x89e,"js_universe_FileInterface_getStringFromFile");
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_getStringFromFile : Invalid Native Object");
  }
  else {
                    /* catch() { ... } // from try @ 00976bd0 with catch @ 00976c24
                       try { // try from 00976c24 to 00a76c3f has its CatchHandler @ 00976b44 */
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_78);
      if ((uVar7 & 1) == 0) {
                    /* try { // try from 00976d0c to 00a76da7 has its CatchHandler @ 00976ca8 */
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x8a5,"js_universe_FileInterface_getStringFromFile");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_getStringFromFile : Error processing arguments"
                           );
        bVar1 = false;
      }
      else {
        (**(code **)(*plVar5 + 0x68))(local_90,plVar5,&local_78);
        pVVar8 = (Value *)se::State::rval(aSStack_60);
        uVar7 = std_string_to_seval(local_90,pVVar8);
        bVar1 = (uVar7 & 1) == 0;
        if (bVar1) {
                    /* catch() { ... } // from try @ 00976cfc with catch @ 00976d5c */
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x8a8,"js_universe_FileInterface_getStringFromFile");
                    /* catch() { ... } // from try @ 00976ce4 with catch @ 00976d8c */
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_getStringFromFile : Error processing arguments"
                             );
        }
        bVar1 = !bVar1;
        if (((byte)local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar1) goto LAB_00976dec;
    }
    else {
                    /* try { // try from 00976ce4 to 00a76cf3 has its CatchHandler @ 00976d8c */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2219): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
                    /* try { // try from 00976cfc to 00a76d0b has its CatchHandler @ 00976d5c */
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_getStringFromFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x8ae);
LAB_00976dec:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
                    /* try { // try from 00976e54 to 00a76f13 has its CatchHandler @ 00976e54
                       catch() { ... } // from try @ 00976e54 with catch @ 00976e54
                       catch() { ... } // from try @ 00976f48 with catch @ 00976e54 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

