
/* js_universe_FileInterface_moveFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_moveFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00977950 to 00a77973 has its CatchHandler @ 00977cd0 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar12);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
                    /* try { // try from 00977978 to 00a77983 has its CatchHandler @ 00977c2c */
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_d0);
  plVar8 = (long *)se::State::nativeThisObject(aSStack_70);
                    /* try { // try from 009779bc to 00a779c7 has its CatchHandler @ 00977c14 */
  if (plVar8 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x8f2,"js_universe_FileInterface_moveFile");
    __android_log_print(6,"jswrapper","js_universe_FileInterface_moveFile : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_70);
    if (plVar9[1] - *plVar9 == 0x20) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      uVar5 = seval_to_std_string((Value *)*plVar9,(basic_string *)&local_88);
      uVar6 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_a0);
      if ((uVar5 & uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x8fb,"js_universe_FileInterface_moveFile");
                    /* try { // try from 00977b00 to 00a77b03 has its CatchHandler @ 00977c10 */
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_moveFile : Error processing arguments");
LAB_00977b54:
        bVar2 = false;
      }
      else {
                    /* try { // try from 00977a20 to 00a77a23 has its CatchHandler @ 00977c0c */
        bVar4 = (**(code **)(*plVar8 + 0x78))(plVar8,&local_88,&local_a0);
        pVVar10 = (Value *)se::State::rval(aSStack_70);
        uVar11 = boolean_to_seval((bool)(bVar4 & 1),pVVar10);
        if ((uVar11 & 1) == 0) {
                    /* try { // try from 00977b1c to 00a77bc7 has its CatchHandler @ 00977d7c */
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x8fe,"js_universe_FileInterface_moveFile");
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_moveFile : Error processing arguments");
          goto LAB_00977b54;
        }
        bVar2 = true;
                    /* try { // try from 00977a54 to 00a77aaf has its CatchHandler @ 00977d78 */
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar2) goto LAB_00977bb0;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2305): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_moveFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x904);
LAB_00977bb0:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_d0;
                    /* try { // try from 00977bc8 to 00a77d97 has its CatchHandler @ 00977474 */
  pVVar10 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar10 != pVVar3) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
                    /* catch() { ... } // from try @ 00977a20 with catch @ 00977c0c */
                    /* catch() { ... } // from try @ 00977b00 with catch @ 00977c10 */
                    /* catch() { ... } // from try @ 009777f8 with catch @ 00977c14
                       catch() { ... } // from try @ 009779bc with catch @ 00977c14 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00977878 with catch @ 00977c2c
                       catch() { ... } // from try @ 00977978 with catch @ 00977c2c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

