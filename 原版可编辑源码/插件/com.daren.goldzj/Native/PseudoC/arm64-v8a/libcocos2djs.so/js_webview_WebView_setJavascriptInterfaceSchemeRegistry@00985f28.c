
/* js_webview_WebView_setJavascriptInterfaceSchemeRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_webview_WebView_setJavascriptInterfaceSchemeRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  WebView *this;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar8);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
                    /* try { // try from 00985f80 to 00a85f83 has its CatchHandler @ 00985f9c */
                    /* try { // try from 00985f84 to 00a8627b has its CatchHandler @ 009852b8 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
                    /* catch() { ... } // from try @ 00985680 with catch @ 00985f98 */
                    /* catch() { ... } // from try @ 00985f80 with catch @ 00985f9c */
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
                    /* catch() { ... } // from try @ 00985e90 with catch @ 00985fb4 */
  this = (WebView *)se::State::nativeThisObject(aSStack_60);
  if (this == (WebView *)0x0) {
                    /* catch() { ... } // from try @ 00985ce8 with catch @ 0098601c */
                    /* catch() { ... } // from try @ 00985b40 with catch @ 00986020 */
                    /* catch() { ... } // from try @ 00985990 with catch @ 00986028 */
                    /* catch() { ... } // from try @ 00985804 with catch @ 0098602c */
                    /* catch() { ... } // from try @ 009853b8 with catch @ 00986030 */
                    /* catch() { ... } // from try @ 00985410 with catch @ 00986034 */
                    /* catch() { ... } // from try @ 00985330 with catch @ 0098603c */
                    /* catch() { ... } // from try @ 009853ec with catch @ 00986044 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x20d,"js_webview_WebView_setJavascriptInterfaceScheme");
                    /* catch() { ... } // from try @ 00985c50 with catch @ 0098605c */
    __android_log_print(6,"jswrapper",
                        "js_webview_WebView_setJavascriptInterfaceScheme : Invalid Native Object");
                    /* catch() { ... } // from try @ 00985c2c with catch @ 00986060 */
  }
  else {
                    /* catch() { ... } // from try @ 00985e08 with catch @ 00985fc8 */
    plVar5 = (long *)se::State::args(aSStack_60);
                    /* catch() { ... } // from try @ 00985d98 with catch @ 00985fd0 */
    if (plVar5[1] - *plVar5 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
                    /* catch() { ... } // from try @ 00985700 with catch @ 00985fe8 */
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
      bVar1 = (uVar6 & 1) == 0;
      if (bVar1) {
                    /* catch() { ... } // from try @ 009859f8 with catch @ 0098613c */
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                            ,0x214,"js_webview_WebView_setJavascriptInterfaceScheme");
        __android_log_print(6,"jswrapper",
                            "js_webview_WebView_setJavascriptInterfaceScheme : Error processing arguments"
                           );
      }
      else {
                    /* catch() { ... } // from try @ 009855f4 with catch @ 00985ff4 */
                    /* catch() { ... } // from try @ 009854e8 with catch @ 00985ff8 */
        cocos2d::WebView::setJavascriptInterfaceScheme(this,(basic_string *)&local_78);
                    /* catch() { ... } // from try @ 00985788 with catch @ 00986000
                       catch() { ... } // from try @ 00985ef8 with catch @ 00986000 */
      }
      if ((local_78 & 1) != 0) {
                    /* catch() { ... } // from try @ 00985570 with catch @ 0098600c
                       catch() { ... } // from try @ 00985d10 with catch @ 0098600c */
        operator_delete(local_68);
      }
                    /* catch() { ... } // from try @ 00985ed0 with catch @ 00986014 */
      if (!bVar1) goto LAB_009860b0;
    }
    else {
                    /* catch() { ... } // from try @ 00985a88 with catch @ 00986068 */
                    /* catch() { ... } // from try @ 00985a60 with catch @ 00986080 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 536): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
    }
  }
                    /* catch() { ... } // from try @ 009858f8 with catch @ 00986084 */
                    /* catch() { ... } // from try @ 009858d4 with catch @ 00986088 */
                    /* catch() { ... } // from try @ 00985c94 with catch @ 00986090 */
                    /* catch() { ... } // from try @ 00985aec with catch @ 00986094 */
                    /* catch() { ... } // from try @ 0098593c with catch @ 00986098 */
                    /* catch() { ... } // from try @ 009857b0 with catch @ 0098609c */
                    /* catch() { ... } // from try @ 009856a8 with catch @ 009860a4 */
                    /* catch() { ... } // from try @ 00985598 with catch @ 009860a8 */
                    /* catch() { ... } // from try @ 00985be4 with catch @ 009860ac */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_setJavascriptInterfaceScheme",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x21b);
LAB_009860b0:
                    /* catch() { ... } // from try @ 00985a3c with catch @ 009860b0 */
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
                    /* catch() { ... } // from try @ 009858a4 with catch @ 009860c0 */
                    /* catch() { ... } // from try @ 00985ba0 with catch @ 009860c4 */
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

