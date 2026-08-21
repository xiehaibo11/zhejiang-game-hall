
/* js_universe_FileInterface_renameFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_renameFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  Value *pVVar11;
  ulong uVar12;
  Isolate *pIVar13;
  Value *local_e8;
  Value *local_e0;
  undefined8 local_d8;
  HandleScope aHStack_d0 [24];
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar13);
  local_e8 = (Value *)0x0;
  local_e0 = (Value *)0x0;
                    /* try { // try from 00976438 to 00a76557 has its CatchHandler @ 00976438
                       catch() { ... } // from try @ 00976438 with catch @ 00976438
                       catch() { ... } // from try @ 00976560 with catch @ 00976438
                       catch() { ... } // from try @ 00976654 with catch @ 00976438
                       catch() { ... } // from try @ 00976728 with catch @ 00976438
                       catch() { ... } // from try @ 009767e4 with catch @ 00976438
                       catch() { ... } // from try @ 00976910 with catch @ 00976438 */
  local_d8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar8 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_e8);
  plVar9 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar9 == (long *)0x0) {
                    /* try { // try from 00976558 to 00a7655f has its CatchHandler @ 00976940 */
                    /* try { // try from 00976560 to 00a7660b has its CatchHandler @ 00976438 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x870,"js_universe_FileInterface_renameFile");
    __android_log_print(6,"jswrapper","js_universe_FileInterface_renameFile : Invalid Native Object"
                       );
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_70);
    if (plVar10[1] - *plVar10 == 0x30) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_b0 = 0;
      local_a8 = (void *)0x0;
      local_b8 = 0;
      uVar5 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_88);
      uVar6 = seval_to_std_string((Value *)(*plVar10 + 0x10),(basic_string *)&local_a0);
      uVar7 = seval_to_std_string((Value *)(*plVar10 + 0x20),(basic_string *)&local_b8);
      if ((uVar5 & uVar6 & uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x87b,"js_universe_FileInterface_renameFile");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_renameFile : Error processing arguments");
LAB_00976638:
        bVar2 = false;
      }
      else {
        bVar4 = (**(code **)(*plVar9 + 0x38))(plVar9,&local_88,&local_a0,&local_b8);
        pVVar11 = (Value *)se::State::rval(aSStack_70);
        uVar12 = boolean_to_seval((bool)(bVar4 & 1),pVVar11);
        if ((uVar12 & 1) == 0) {
                    /* try { // try from 0097660c to 00a76653 has its CatchHandler @ 0097693c */
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x87e,"js_universe_FileInterface_renameFile");
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_renameFile : Error processing arguments");
          goto LAB_00976638;
        }
        bVar2 = true;
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar2) goto LAB_009766ac;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2177): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar10[1] - *plVar10) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_renameFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x884);
LAB_009766ac:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_e8;
  pVVar11 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar11 != pVVar3) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_e0 = pVVar3;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00976720 to 00a76727 has its CatchHandler @ 00976938 */
                    /* try { // try from 00976728 to 00a7677f has its CatchHandler @ 00976438 */
  return;
}

