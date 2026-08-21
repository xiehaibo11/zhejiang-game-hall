
/* js_renderer_Assembler_ignoreWorldMatrixRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Assembler_ignoreWorldMatrixRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
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
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar7);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
                    /* try { // try from 009515fc to 00a51603 has its CatchHandler @ 00951730 */
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00951604 to 00a516c3 has its CatchHandler @ 009508b8 */
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xdf4,"js_renderer_Assembler_ignoreWorldMatrix");
    __android_log_print(6,"jswrapper",
                        "js_renderer_Assembler_ignoreWorldMatrix : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      *(undefined1 *)(lVar4 + 0x88) = 1;
      goto LAB_009516d8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3579): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
                    /* try { // try from 009516c4 to 00a516cb has its CatchHandler @ 0095172c */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Assembler_ignoreWorldMatrix",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xdfe);
                    /* try { // try from 009516cc to 00a51773 has its CatchHandler @ 009508b8 */
LAB_009516d8:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
                    /* catch() { ... } // from try @ 009516c4 with catch @ 0095172c */
                    /* catch() { ... } // from try @ 009515fc with catch @ 00951730 */
  v8::HandleScope::~HandleScope(aHStack_78);
                    /* catch() { ... } // from try @ 00951534 with catch @ 00951734 */
                    /* catch() { ... } // from try @ 0095146c with catch @ 00951738 */
                    /* catch() { ... } // from try @ 009513a4 with catch @ 0095173c */
                    /* catch() { ... } // from try @ 009512dc with catch @ 00951740 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00950e2c with catch @ 00951758 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00951214 with catch @ 00951744 */
                    /* catch() { ... } // from try @ 0095114c with catch @ 00951748 */
                    /* catch() { ... } // from try @ 00951084 with catch @ 0095174c */
                    /* catch() { ... } // from try @ 00950fbc with catch @ 00951750 */
                    /* catch() { ... } // from try @ 00950ef4 with catch @ 00951754 */
  return;
}

