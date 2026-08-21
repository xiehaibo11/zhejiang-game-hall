
/* js_universe_Device_createNotificationNowRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_createNotificationNowRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  bool bVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  State aSStack_60 [40];
  long local_38;
  
                    /* catch() { ... } // from try @ 0097285c with catch @ 009727dc */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 00972810 to 00a72813 has its CatchHandler @ 009728bc */
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
                    /* try { // try from 0097281c to 00a72823 has its CatchHandler @ 009728b8 */
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00972854 to 00a7285b has its CatchHandler @ 009728bc */
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
                    /* try { // try from 0097285c to 00a728d7 has its CatchHandler @ 009727dc */
  plVar5 = (long *)se::State::args(aSStack_60);
  if (plVar5[1] - *plVar5 == 0x10) {
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
    if ((uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x6b0,"js_universe_Device_createNotificationNow");
      __android_log_print(6,"jswrapper",
                          "js_universe_Device_createNotificationNow : Error processing arguments");
      bVar8 = false;
    }
    else {
      pcVar1 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar1 = local_68;
      }
      universe::Device::createNotificationNow(pcVar1);
      bVar8 = true;
    }
    if ((local_78 & 1) != 0) {
                    /* catch() { ... } // from try @ 0097281c with catch @ 009728b8 */
      operator_delete(local_68);
    }
                    /* catch() { ... } // from try @ 00972810 with catch @ 009728bc
                       catch() { ... } // from try @ 00972854 with catch @ 009728bc */
    if (bVar8) goto LAB_00972910;
  }
  else {
                    /* try { // try from 009728d8 to 00a72a5f has its CatchHandler @ 009728d8
                       catch() { ... } // from try @ 009728d8 with catch @ 009728d8
                       catch() { ... } // from try @ 00972a68 with catch @ 009728d8
                       catch() { ... } // from try @ 00972b04 with catch @ 009728d8
                       catch() { ... } // from try @ 00972be0 with catch @ 009728d8
                       catch() { ... } // from try @ 00972c60 with catch @ 009728d8
                       catch() { ... } // from try @ 00972d1c with catch @ 009728d8 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1716): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_createNotificationNow",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x6b7);
LAB_00972910:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

