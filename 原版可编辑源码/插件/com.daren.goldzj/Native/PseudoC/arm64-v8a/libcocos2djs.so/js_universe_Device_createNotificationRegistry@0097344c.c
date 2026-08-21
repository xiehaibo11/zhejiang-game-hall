
/* js_universe_Device_createNotificationRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_createNotificationRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  Value *pVVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long *plVar9;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [28];
  int local_94;
  ulong local_90;
  undefined8 local_88;
  char *local_80;
  long local_78;
  State aSStack_70 [40];
  long local_48;
  
                    /* try { // try from 0097344c to 00a7355f has its CatchHandler @ 009730c8 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar12);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
                    /* catch() { ... } // from try @ 00973410 with catch @ 009734a8 */
                    /* catch() { ... } // from try @ 00973214 with catch @ 009734ac */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar8 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_c8);
                    /* catch() { ... } // from try @ 009731dc with catch @ 009734e0 */
  plVar9 = (long *)se::State::args(aSStack_70);
                    /* catch() { ... } // from try @ 0097313c with catch @ 009734e4 */
  uVar11 = plVar9[1] - *plVar9;
  if (uVar11 == 0x30) {
    local_78 = 0;
    uVar5 = seval_to_long((Value *)*plVar9,&local_78);
    local_88 = 0;
    local_80 = (char *)0x0;
    local_90 = 0;
    uVar6 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_90);
    local_94 = 0;
    pcVar2 = (char *)((ulong)&local_90 | 1);
                    /* catch() { ... } // from try @ 00973104 with catch @ 00973544 */
    if ((local_90 & 1) != 0) {
      pcVar2 = local_80;
    }
    uVar7 = seval_to_int32((Value *)(*plVar9 + 0x20),&local_94);
    bVar1 = (uVar5 & uVar6 & uVar7 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x716,"js_universe_Device_createNotification");
                    /* try { // try from 00973658 to 00a7365f has its CatchHandler @ 009736a8 */
                    /* try { // try from 00973660 to 00a7369f has its CatchHandler @ 00973560 */
      __android_log_print(6,"jswrapper",
                          "js_universe_Device_createNotification : Error processing arguments");
    }
    else {
                    /* try { // try from 00973560 to 00a73657 has its CatchHandler @ 00973560
                       catch() { ... } // from try @ 00973560 with catch @ 00973560
                       catch() { ... } // from try @ 00973660 with catch @ 00973560
                       catch() { ... } // from try @ 009736a8 with catch @ 00973560 */
      universe::Device::createNotification(local_78,pcVar2,local_94);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (!bVar1) goto LAB_009735d8;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1818): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar11 >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_createNotification",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x71d);
LAB_009735d8:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_c8;
  pVVar10 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_c0 = pVVar4;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 009736a0 to 00a736a7 has its CatchHandler @ 009736a8 */
                    /* catch() { ... } // from try @ 00973658 with catch @ 009736a8
                       catch() { ... } // from try @ 009736a0 with catch @ 009736a8
                       try { // try from 009736a8 to 00a736c3 has its CatchHandler @ 00973560 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

