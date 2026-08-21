
/* js_universe_FileInterface_getSuitableFOpenRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_getSuitableFOpenRegistry(FunctionCallbackInfo *param_1)

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
                    /* try { // try from 00976908 to 00a7690f has its CatchHandler @ 00976938 */
                    /* catch() { ... } // from try @ 009768f8 with catch @ 00976910
                       try { // try from 00976910 to 00a769ab has its CatchHandler @ 00976438 */
                    /* catch() { ... } // from try @ 009768f0 with catch @ 00976914 */
                    /* catch() { ... } // from try @ 00976780 with catch @ 00976918 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x889,"js_universe_FileInterface_getSuitableFOpen");
                    /* catch() { ... } // from try @ 00976720 with catch @ 00976938
                       catch() { ... } // from try @ 00976908 with catch @ 00976938 */
                    /* catch() { ... } // from try @ 0097660c with catch @ 0097693c */
                    /* catch() { ... } // from try @ 00976558 with catch @ 00976940 */
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_getSuitableFOpen : Invalid Native Object");
                    /* catch() { ... } // from try @ 0097679c with catch @ 00976944 */
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
                            ,0x890,"js_universe_FileInterface_getSuitableFOpen");
                    /* catch() { ... } // from try @ 00976a8c with catch @ 009769ac */
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_getSuitableFOpen : Error processing arguments"
                           );
        bVar1 = false;
      }
      else {
        (**(code **)(*plVar5 + 0x58))(local_90,plVar5,&local_78);
        pVVar8 = (Value *)se::State::rval(aSStack_60);
        uVar7 = std_string_to_seval(local_90,pVVar8);
        bVar1 = (uVar7 & 1) == 0;
        if (bVar1) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x893,"js_universe_FileInterface_getSuitableFOpen");
                    /* try { // try from 009769ec to 00a769fb has its CatchHandler @ 00976b28 */
                    /* try { // try from 009769fc to 00a76a0f has its CatchHandler @ 00976b08 */
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_getSuitableFOpen : Error processing arguments"
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
      if (bVar1) goto LAB_00976a58;
    }
    else {
                    /* catch() { ... } // from try @ 009767dc with catch @ 00976948 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2198): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
    }
  }
                    /* try { // try from 00976a48 to 00a76a4f has its CatchHandler @ 00976ad0 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_getSuitableFOpen",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x899);
LAB_00976a58:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
                    /* try { // try from 00976a88 to 00a76a8b has its CatchHandler @ 00976acc */
                    /* try { // try from 00976a8c to 00a76b43 has its CatchHandler @ 009769ac */
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00976a88 with catch @ 00976acc */
                    /* catch() { ... } // from try @ 00976a48 with catch @ 00976ad0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

