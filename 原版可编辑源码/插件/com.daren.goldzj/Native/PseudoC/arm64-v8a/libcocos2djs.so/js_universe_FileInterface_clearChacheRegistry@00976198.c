
/* js_universe_FileInterface_clearChacheRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_clearChacheRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009761c8 to 00a76223 has its CatchHandler @ 00976370 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar7);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
                    /* try { // try from 00976224 to 00a7631b has its CatchHandler @ 00975ec8 */
  plVar4 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar4 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x861,"js_universe_FileInterface_clearChache");
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_clearChache : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      (**(code **)(*plVar4 + 0x80))(plVar4);
      goto LAB_009762f0;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2152): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_clearChache",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x86b);
LAB_009762f0:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
                    /* try { // try from 0097631c to 00a76323 has its CatchHandler @ 00976344 */
                    /* try { // try from 00976324 to 00a76327 has its CatchHandler @ 00975ec8 */
      se::Value::~Value(pVVar6 + -0x10);
                    /* try { // try from 00976328 to 00a76337 has its CatchHandler @ 00976340 */
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
                    /* catch() { ... } // from try @ 00976328 with catch @ 00976340
                       try { // try from 00976340 to 00a763c3 has its CatchHandler @ 00975ec8 */
    operator_delete(local_90);
  }
                    /* catch() { ... } // from try @ 0097631c with catch @ 00976344 */
                    /* catch() { ... } // from try @ 00975f84 with catch @ 00976348
                       catch() { ... } // from try @ 00976338 with catch @ 00976348 */
  v8::HandleScope::~HandleScope(aHStack_78);
                    /* catch() { ... } // from try @ 00975fc8 with catch @ 0097634c */
                    /* catch() { ... } // from try @ 00975f18 with catch @ 00976350 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0097609c with catch @ 00976370
                       catch() { ... } // from try @ 009761c8 with catch @ 00976370 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0097605c with catch @ 00976360 */
  return;
}

