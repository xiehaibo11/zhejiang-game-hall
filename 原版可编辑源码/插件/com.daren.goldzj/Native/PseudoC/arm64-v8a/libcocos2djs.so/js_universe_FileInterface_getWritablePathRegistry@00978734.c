
/* js_universe_FileInterface_getWritablePathRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_getWritablePathRegistry(FunctionCallbackInfo *param_1)

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
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  basic_string local_78 [16];
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009786c8 with catch @ 00978750 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 0097876c to 00a787ef has its CatchHandler @ 0097876c
                       catch() { ... } // from try @ 0097876c with catch @ 0097876c
                       catch() { ... } // from try @ 0097881c with catch @ 0097876c */
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
  plVar5 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00978814 to 00a7881b has its CatchHandler @ 009788b8 */
                    /* try { // try from 0097881c to 00a788eb has its CatchHandler @ 0097876c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x94a,"js_universe_FileInterface_getWritablePath");
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_getWritablePath : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(local_78,plVar5);
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      uVar7 = std_string_to_seval(local_78,pVVar8);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
                    /* try { // try from 00978950 to 00a78957 has its CatchHandler @ 00978c14 */
                    /* try { // try from 00978958 to 00a78a8b has its CatchHandler @ 00978900 */
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x951,"js_universe_FileInterface_getWritablePath");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_getWritablePath : Error processing arguments"
                           );
      }
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      if (!bVar1) goto LAB_009788c0;
    }
    else {
                    /* try { // try from 009787f0 to 00a787fb has its CatchHandler @ 009788a4 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2388): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,0);
    }
  }
                    /* catch() { ... } // from try @ 009787f0 with catch @ 009788a4 */
                    /* catch() { ... } // from try @ 00978814 with catch @ 009788b8 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_getWritablePath",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x957);
LAB_009788c0:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar8 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
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

