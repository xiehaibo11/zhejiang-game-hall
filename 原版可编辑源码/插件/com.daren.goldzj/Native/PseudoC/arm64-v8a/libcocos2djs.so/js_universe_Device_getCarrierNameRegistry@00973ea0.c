
/* js_universe_Device_getCarrierNameRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_getCarrierNameRegistry(FunctionCallbackInfo *param_1)

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
                    /* try { // try from 00973ec4 to 00a73f0b has its CatchHandler @ 00973cf8 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar7);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
                    /* try { // try from 00973f0c to 00a73f13 has its CatchHandler @ 00973f18 */
                    /* catch() { ... } // from try @ 00973e0c with catch @ 00973f14
                       try { // try from 00973f14 to 00a73f33 has its CatchHandler @ 00973cf8 */
                    /* catch() { ... } // from try @ 00973dec with catch @ 00973f18
                       catch() { ... } // from try @ 00973e48 with catch @ 00973f18
                       catch() { ... } // from try @ 00973f0c with catch @ 00973f18 */
  pvVar4 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  this = (Device *)se::State::args(aSStack_60);
                    /* try { // try from 00973f34 to 00a7412b has its CatchHandler @ 00973f34
                       catch() { ... } // from try @ 00973f34 with catch @ 00973f34
                       catch() { ... } // from try @ 00974138 with catch @ 00973f34 */
  if (*(long *)(this + 8) - *(long *)this == 0) {
    universe::Device::getCarrierName(this);
    pVVar6 = (Value *)se::State::rval(aSStack_60);
    uVar5 = std_string_to_seval(local_78,pVVar6);
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x758,"js_universe_Device_getCarrierName");
      __android_log_print(6,"jswrapper",
                          "js_universe_Device_getCarrierName : Error processing arguments");
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (!bVar1) goto LAB_00973fc8;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1883): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(*(long *)(this + 8) - *(long *)this) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_getCarrierName",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x75e);
LAB_00973fc8:
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
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

