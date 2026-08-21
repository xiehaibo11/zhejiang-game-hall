
/* js_universe_Device_getBatteryStateRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_getBatteryStateRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  Device *this;
  ulong uVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  void *local_78 [3];
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00972480 with catch @ 0097255c */
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00972494 with catch @ 00972560 */
                    /* catch() { ... } // from try @ 00972410 with catch @ 00972564 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 00972580 to 00a725d3 has its CatchHandler @ 00972580
                       catch() { ... } // from try @ 00972580 with catch @ 00972580
                       catch() { ... } // from try @ 00972600 with catch @ 00972580 */
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar7);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
                    /* try { // try from 009725d4 to 00a725e3 has its CatchHandler @ 00972640 */
  this = (Device *)se::State::args(aSStack_60);
  if (*(long *)(this + 8) - *(long *)this == 0) {
    universe::Device::getBatteryState(this);
    pVVar6 = (Value *)se::State::rval(aSStack_60);
    uVar5 = std_vector_int_to_seval((vector *)local_78,pVVar6);
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x6a0,"js_universe_Device_getBatteryState");
      __android_log_print(6,"jswrapper",
                          "js_universe_Device_getBatteryState : Error processing arguments");
    }
    if (local_78[0] != (void *)0x0) {
      operator_delete(local_78[0]);
    }
                    /* catch() { ... } // from try @ 009725f4 with catch @ 0097263c */
    if (!bVar1) goto LAB_0097266c;
  }
  else {
                    /* try { // try from 009725f4 to 00a725ff has its CatchHandler @ 0097263c */
                    /* try { // try from 00972600 to 00a72653 has its CatchHandler @ 00972580 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1699): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(*(long *)(this + 8) - *(long *)this) >> 4,0);
  }
                    /* catch() { ... } // from try @ 009725d4 with catch @ 00972640 */
                    /* try { // try from 00972654 to 00a726cf has its CatchHandler @ 00972654
                       catch() { ... } // from try @ 00972654 with catch @ 00972654
                       catch() { ... } // from try @ 009726d4 with catch @ 00972654 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_getBatteryState",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x6a6);
LAB_0097266c:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar6 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
                    /* try { // try from 009726d0 to 00a726d3 has its CatchHandler @ 009727c0 */
                    /* try { // try from 009726d4 to 00a727db has its CatchHandler @ 00972654 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

