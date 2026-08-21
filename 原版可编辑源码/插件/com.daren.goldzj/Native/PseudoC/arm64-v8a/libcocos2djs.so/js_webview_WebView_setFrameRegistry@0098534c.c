
/* js_webview_WebView_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar12);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
                    /* try { // try from 009853b8 to 00a853c7 has its CatchHandler @ 00986030 */
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_c0);
  plVar8 = (long *)se::State::nativeThisObject(aSStack_80);
                    /* try { // try from 009853ec to 00a853ff has its CatchHandler @ 00986044 */
  if (plVar8 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x1b9,"js_webview_WebView_setFrame");
    __android_log_print(6,"jswrapper","js_webview_WebView_setFrame : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_80);
    uVar11 = plVar9[1] - *plVar9;
    if (uVar11 == 0x40) {
                    /* try { // try from 00985410 to 00a85417 has its CatchHandler @ 00986034 */
      local_90 = 0;
      local_88 = 0;
      uVar3 = seval_to_float((Value *)*plVar9,(float *)((long)&local_88 + 4));
      uVar4 = seval_to_float((Value *)(*plVar9 + 0x10),(float *)&local_88);
      uVar5 = seval_to_float((Value *)(*plVar9 + 0x20),(float *)((long)&local_90 + 4));
      uVar6 = seval_to_float((Value *)(*plVar9 + 0x30),(float *)&local_90);
      if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
        (**(code **)(*plVar8 + 0x18))
                  (local_88._4_4_,(float)local_88,local_90._4_4_,(float)local_90,plVar8);
        goto LAB_00985560;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                          ,0x1c6,"js_webview_WebView_setFrame");
      __android_log_print(6,"jswrapper","js_webview_WebView_setFrame : Error processing arguments");
    }
    else {
                    /* try { // try from 009854e8 to 00a854f3 has its CatchHandler @ 00985ff8 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 458): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar11 >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x1cd);
LAB_00985560:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
                    /* try { // try from 00985570 to 00a85583 has its CatchHandler @ 0098600c */
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar10 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
                    /* try { // try from 00985598 to 00a855a7 has its CatchHandler @ 009860a8 */
      pVVar10 = pVVar10 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

