
/* js_universe_Device_getIpRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_getIpRegistry(FunctionCallbackInfo *param_1)

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
                    /* try { // try from 00972064 to 00a72173 has its CatchHandler @ 00972064
                       catch() { ... } // from try @ 00972064 with catch @ 00972064
                       catch() { ... } // from try @ 0097217c with catch @ 00972064 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
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
  this = (Device *)se::State::args(aSStack_60);
  if (*(long *)(this + 8) - *(long *)this == 0) {
    universe::Device::getIp(this);
    pVVar6 = (Value *)se::State::rval(aSStack_60);
    uVar5 = std_string_to_seval(local_78,pVVar6);
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x680,"js_universe_Device_getIp");
      __android_log_print(6,"jswrapper","js_universe_Device_getIp : Error processing arguments");
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (!bVar1) goto LAB_0097215c;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1667): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(*(long *)(this + 8) - *(long *)this) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_getIp",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x686);
LAB_0097215c:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
                    /* try { // try from 00972174 to 00a7217b has its CatchHandler @ 009721c4 */
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
                    /* catch() { ... } // from try @ 00972174 with catch @ 009721c4 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

