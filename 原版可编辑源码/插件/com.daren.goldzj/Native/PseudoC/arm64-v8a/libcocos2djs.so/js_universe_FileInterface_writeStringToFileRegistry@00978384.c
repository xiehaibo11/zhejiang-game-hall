
/* js_universe_FileInterface_writeStringToFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_universe_FileInterface_writeStringToFileRegistry(FunctionCallbackInfo *param_1)

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
  
                    /* try { // try from 00978388 to 00a78393 has its CatchHandler @ 0097859c */
  lVar1 = tpidr_el0;
                    /* try { // try from 009783a0 to 00a783bf has its CatchHandler @ 009785b4 */
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
                    /* try { // try from 009783cc to 00a783d7 has its CatchHandler @ 00978590 */
  v8::HandleScope::HandleScope(aHStack_b8,pIVar12);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
                    /* try { // try from 009783e4 to 00a783eb has its CatchHandler @ 00978588 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
                    /* try { // try from 009783f4 to 00a783ff has its CatchHandler @ 0097858c */
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 0097840c to 00a7842b has its CatchHandler @ 009785b0 */
  se::State::State(aSStack_70,pvVar7,(vector *)&local_d0);
  plVar8 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar8 == (long *)0x0) {
                    /* try { // try from 009784d8 to 00a784df has its CatchHandler @ 00978580 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x933,"js_universe_FileInterface_writeStringToFile");
                    /* try { // try from 009784ec to 00a7850b has its CatchHandler @ 009785ac */
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_writeStringToFile : Invalid Native Object");
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
                    /* try { // try from 0097845c to 00a78467 has its CatchHandler @ 00978598 */
                    /* try { // try from 0097846c to 00a78477 has its CatchHandler @ 00978594 */
      uVar6 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_a0);
      if ((uVar5 & uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x93c,"js_universe_FileInterface_writeStringToFile");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_writeStringToFile : Error processing arguments"
                           );
LAB_009785b4:
                    /* catch() { ... } // from try @ 009783a0 with catch @ 009785b4 */
        bVar2 = false;
                    /* catch() { ... } // from try @ 00978364 with catch @ 009785b8 */
      }
      else {
                    /* try { // try from 00978484 to 00a7848f has its CatchHandler @ 00978588 */
        bVar4 = (**(code **)(*plVar8 + 0x70))(plVar8,&local_88,&local_a0);
        pVVar10 = (Value *)se::State::rval(aSStack_70);
                    /* try { // try from 009784a0 to 00a784a7 has its CatchHandler @ 00978584 */
        uVar11 = boolean_to_seval((bool)(bVar4 & 1),pVVar10);
        if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 009784b4 with catch @ 0097857c
                       catch() { ... } // from try @ 00978510 with catch @ 0097857c */
                    /* catch() { ... } // from try @ 009784d8 with catch @ 00978580 */
                    /* catch() { ... } // from try @ 009784a0 with catch @ 00978584 */
                    /* catch() { ... } // from try @ 009783e4 with catch @ 00978588
                       catch() { ... } // from try @ 00978484 with catch @ 00978588 */
                    /* catch() { ... } // from try @ 009783f4 with catch @ 0097858c */
                    /* catch() { ... } // from try @ 009783cc with catch @ 00978590 */
                    /* catch() { ... } // from try @ 009782bc with catch @ 00978594
                       catch() { ... } // from try @ 0097846c with catch @ 00978594 */
                    /* catch() { ... } // from try @ 00977f0c with catch @ 00978598
                       catch() { ... } // from try @ 0097845c with catch @ 00978598 */
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x93f,"js_universe_FileInterface_writeStringToFile");
                    /* catch() { ... } // from try @ 00978388 with catch @ 0097859c */
                    /* catch() { ... } // from try @ 0097834c with catch @ 009785a0 */
                    /* catch() { ... } // from try @ 009782a4 with catch @ 009785a4 */
                    /* catch() { ... } // from try @ 00977ef4 with catch @ 009785a8 */
                    /* catch() { ... } // from try @ 009784ec with catch @ 009785ac */
                    /* catch() { ... } // from try @ 0097840c with catch @ 009785b0 */
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_writeStringToFile : Error processing arguments"
                             );
          goto LAB_009785b4;
        }
        bVar2 = true;
                    /* try { // try from 009784b4 to 00a784bb has its CatchHandler @ 0097857c */
      }
                    /* catch() { ... } // from try @ 009782f0 with catch @ 009785bc
                       catch() { ... } // from try @ 0097833c with catch @ 009785bc */
      if ((local_a0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00978304 with catch @ 009785c0 */
                    /* catch() { ... } // from try @ 009782dc with catch @ 009785c4 */
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar2) goto LAB_00978610;
    }
    else {
                    /* try { // try from 00978510 to 00a7851b has its CatchHandler @ 0097857c */
                    /* try { // try from 0097851c to 00a785f7 has its CatchHandler @ 00977d98 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2370): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,2);
    }
  }
                    /* try { // try from 009785f8 to 00a786c7 has its CatchHandler @ 009785f8
                       catch() { ... } // from try @ 009785f8 with catch @ 009785f8
                       catch() { ... } // from try @ 00978708 with catch @ 009785f8 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_writeStringToFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x945);
LAB_00978610:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_d0;
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
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

