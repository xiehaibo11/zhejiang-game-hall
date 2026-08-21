
/* js_universe_FileInterface_removeDirectoryRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_removeDirectoryRegistry(FunctionCallbackInfo *param_1)

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
  
                    /* catch() { ... } // from try @ 009778d8 with catch @ 00977cd4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
                    /* catch() { ... } // from try @ 00977660 with catch @ 00977d24 */
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x909,"js_universe_FileInterface_removeDirectory");
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_removeDirectory : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
                    /* catch() { ... } // from try @ 00977a54 with catch @ 00977d78 */
                    /* catch() { ... } // from try @ 00977b1c with catch @ 00977d7c */
    if (plVar7[1] - *plVar7 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
                    /* try { // try from 00977d98 to 00a77ef3 has its CatchHandler @ 00977d98
                       catch() { ... } // from try @ 00977d98 with catch @ 00977d98
                       catch() { ... } // from try @ 0097851c with catch @ 00977d98 */
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_78);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x910,"js_universe_FileInterface_removeDirectory");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_removeDirectory : Error processing arguments"
                           );
LAB_00977ed8:
        bVar2 = false;
      }
      else {
        bVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,&local_78);
        pVVar9 = (Value *)se::State::rval(aSStack_60);
        uVar8 = boolean_to_seval((bool)(bVar4 & 1),pVVar9);
        if ((uVar8 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x913,"js_universe_FileInterface_removeDirectory");
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_removeDirectory : Error processing arguments"
                             );
          goto LAB_00977ed8;
        }
        bVar2 = true;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar2) goto LAB_00977f1c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2326): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
                    /* try { // try from 00977ef4 to 00a77eff has its CatchHandler @ 009785a8 */
                    /* try { // try from 00977f0c to 00a77f13 has its CatchHandler @ 00978598 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_removeDirectory",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x919);
LAB_00977f1c:
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
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

