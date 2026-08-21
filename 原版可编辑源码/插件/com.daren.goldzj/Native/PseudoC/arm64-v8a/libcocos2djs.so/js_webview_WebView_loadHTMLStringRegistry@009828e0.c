
/* js_webview_WebView_loadHTMLStringRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_loadHTMLStringRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  WebView *this;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar11);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
                    /* catch() { ... } // from try @ 00982874 with catch @ 00982940 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
                    /* catch() { ... } // from try @ 00982840 with catch @ 00982944 */
                    /* catch() { ... } // from try @ 00982814 with catch @ 00982948 */
                    /* catch() { ... } // from try @ 009827f0 with catch @ 0098294c */
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
                    /* catch() { ... } // from try @ 009827c8 with catch @ 00982950 */
                    /* catch() { ... } // from try @ 009828a4 with catch @ 00982954 */
                    /* catch() { ... } // from try @ 00982890 with catch @ 00982958 */
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
                    /* catch() { ... } // from try @ 00982794 with catch @ 00982968 */
  se::State::State(aSStack_70,pvVar6,(vector *)&local_d0);
  this = (WebView *)se::State::nativeThisObject(aSStack_70);
  if (this == (WebView *)0x0) {
                    /* try { // try from 00982a14 to 00a82a1b has its CatchHandler @ 00982b7c */
                    /* try { // try from 00982a1c to 00a82b7f has its CatchHandler @ 009829c8 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x85,"js_webview_WebView_loadHTMLString");
    __android_log_print(6,"jswrapper","js_webview_WebView_loadHTMLString : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    lVar10 = plVar7[1] - *plVar7 >> 4;
    if (lVar10 == 2) {
      local_88 = 0;
      local_80 = 0;
      local_78 = (void *)0x0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      uVar4 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      uVar5 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_a0);
      bVar1 = (uVar4 & uVar5 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                            ,0x95,"js_webview_WebView_loadHTMLString");
        __android_log_print(6,"jswrapper",
                            "js_webview_WebView_loadHTMLString : Error processing arguments");
      }
      else {
        cocos2d::WebView::loadHTMLString(this,(basic_string *)&local_88,(basic_string *)&local_a0);
      }
      bVar1 = !bVar1;
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) == 0) goto LAB_00982b30;
      operator_delete(local_78);
      if (bVar1) goto LAB_00982b60;
    }
    else if (lVar10 == 1) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                            ,0x8c,"js_webview_WebView_loadHTMLString");
        __android_log_print(6,"jswrapper",
                            "js_webview_WebView_loadHTMLString : Error processing arguments");
        bVar1 = false;
      }
      else {
        local_a0 = 0;
        local_98 = 0;
        local_90 = (void *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982a1c with catch @ 009829c8
                        */
        cocos2d::WebView::loadHTMLString(this,(basic_string *)&local_88,(basic_string *)&local_a0);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        bVar1 = true;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
LAB_00982b30:
      if (bVar1) goto LAB_00982b60;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 153): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_loadHTMLString",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x9c);
LAB_00982b60:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_d0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00982a14 with catch @ 00982b7c
                        */
  pVVar9 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

