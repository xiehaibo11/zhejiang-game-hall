
/* js_universe_Device_changeIconRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_changeIconRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  byte bVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
                    /* try { // try from 009715dc to 00a7163b has its CatchHandler @ 00971510 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
                    /* catch() { ... } // from try @ 009715ac with catch @ 00971618 */
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
                    /* catch() { ... } // from try @ 009715b4 with catch @ 00971620 */
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
                    /* try { // try from 0097163c to 00a716db has its CatchHandler @ 0097163c
                       catch() { ... } // from try @ 0097163c with catch @ 0097163c
                       catch() { ... } // from try @ 00971708 with catch @ 0097163c */
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::args(aSStack_60);
  if (plVar6[1] - *plVar6 == 0x10) {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_78);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 009716e4 to 00a71707 has its CatchHandler @ 00971758 */
                    /* try { // try from 00971708 to 00a71783 has its CatchHandler @ 0097163c */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x63c,"js_universe_Device_changeIcon");
      __android_log_print(6,"jswrapper","js_universe_Device_changeIcon : Error processing arguments"
                         );
LAB_00971770:
      bVar2 = false;
    }
    else {
      bVar4 = universe::Device::changeIcon((basic_string *)&local_78);
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      uVar7 = boolean_to_seval((bool)(bVar4 & 1),pVVar8);
      if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 009716dc with catch @ 00971750 */
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x63f,"js_universe_Device_changeIcon");
                    /* catch() { ... } // from try @ 009716e4 with catch @ 00971758 */
        __android_log_print(6,"jswrapper",
                            "js_universe_Device_changeIcon : Error processing arguments");
        goto LAB_00971770;
      }
      bVar2 = true;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar2) goto LAB_009717b4;
  }
  else {
                    /* try { // try from 009716dc to 00a716e3 has its CatchHandler @ 00971750 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1602): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
  }
                    /* catch() { ... } // from try @ 009717e4 with catch @ 00971790
                       catch() { ... } // from try @ 009718b4 with catch @ 00971790 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_changeIcon",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x645);
LAB_009717b4:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar8 = local_a0;
  if (local_a8 != (Value *)0x0) {
                    /* try { // try from 009717d8 to 00a717e3 has its CatchHandler @ 00971940 */
    while (pVVar8 != pVVar3) {
                    /* try { // try from 009717e4 to 00a718a7 has its CatchHandler @ 00971790 */
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

