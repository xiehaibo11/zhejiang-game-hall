
/* js_universe_Device_getIosIDFARegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_getIosIDFARegistry(FunctionCallbackInfo *param_1)

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
  basic_string local_78 [16];
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009722b0 with catch @ 009722dc */
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 009722f8 to 00a72343 has its CatchHandler @ 009722f8
                       catch() { ... } // from try @ 009722f8 with catch @ 009722f8
                       catch() { ... } // from try @ 00972354 with catch @ 009722f8 */
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar7);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00972344 to 00a72353 has its CatchHandler @ 0097237c */
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  this = (Device *)se::State::args(aSStack_60);
                    /* try { // try from 00972354 to 00a7238f has its CatchHandler @ 009722f8 */
  if (*(long *)(this + 8) - *(long *)this == 0) {
    universe::Device::getIosIDFA(this);
    pVVar6 = (Value *)se::State::rval(aSStack_60);
                    /* try { // try from 00972390 to 00a7240f has its CatchHandler @ 00972390
                       catch() { ... } // from try @ 00972390 with catch @ 00972390
                       catch() { ... } // from try @ 009724d4 with catch @ 00972390 */
    uVar5 = std_string_to_seval(local_78,pVVar6);
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
                    /* try { // try from 00972480 to 00a7248b has its CatchHandler @ 0097255c */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x690,"js_universe_Device_getIosIDFA");
                    /* try { // try from 00972494 to 00a724d3 has its CatchHandler @ 00972560 */
      __android_log_print(6,"jswrapper","js_universe_Device_getIosIDFA : Error processing arguments"
                         );
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (!bVar1) goto LAB_009723e4;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1683): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(*(long *)(this + 8) - *(long *)this) >> 4,0);
                    /* catch() { ... } // from try @ 00972344 with catch @ 0097237c */
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_getIosIDFA",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x696);
LAB_009723e4:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar6 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
                    /* try { // try from 00972410 to 00a72423 has its CatchHandler @ 00972564 */
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
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

