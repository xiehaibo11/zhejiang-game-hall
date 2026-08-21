
/* js_webview_WebView_canGoForwardRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_canGoForwardRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  WebView *this;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00984c14 to 00a84c17 has its CatchHandler @ 00984d2c */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
                    /* try { // try from 00984c30 to 00a84c37 has its CatchHandler @ 00984d48 */
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
                    /* try { // try from 00984c38 to 00a84c47 has its CatchHandler @ 00984d38 */
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00984c70 to 00a84c7b has its CatchHandler @ 00984d4c */
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
                    /* try { // try from 00984c7c to 00a84c9b has its CatchHandler @ 00984d34 */
  this = (WebView *)se::State::nativeThisObject(aSStack_60);
  if (this == (WebView *)0x0) {
                    /* try { // try from 00984ce8 to 00a84ceb has its CatchHandler @ 00984d28 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x186,"js_webview_WebView_canGoForward");
                    /* try { // try from 00984cec to 00a84d6b has its CatchHandler @ 00984bc0 */
    __android_log_print(6,"jswrapper","js_webview_WebView_canGoForward : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      bVar3 = cocos2d::WebView::canGoForward(this);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar6 = boolean_to_seval((bool)(bVar3 & 1),pVVar7);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984ce8 with catch @ 00984d28
                        */
      if ((uVar6 & 1) != 0) goto LAB_00984d9c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984c14 with catch @ 00984d2c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984c7c with catch @ 00984d34
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984c38 with catch @ 00984d38
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984c30 with catch @ 00984d48
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984c70 with catch @ 00984d4c
                       catch(type#1 @ 00000000) { ... } // from try @ 00984cbc with catch @ 00984d4c
                        */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                          ,0x18d,"js_webview_WebView_canGoForward");
                    /* try { // try from 00984d6c to 00a84d6f has its CatchHandler @ 00984d78 */
      __android_log_print(6,"jswrapper",
                          "js_webview_WebView_canGoForward : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 400): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
                    /* try { // try from 00984cbc to 00a84ccb has its CatchHandler @ 00984d4c */
    }
  }
                    /* try { // try from 00984d70 to 00a84d7b has its CatchHandler @ 00984bc0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984d6c with catch @ 00984d78
                        */
                    /* try { // try from 00984d7c to 00a84d7f has its CatchHandler @ 00984d88 */
                    /* try { // try from 00984d80 to 00a84d8b has its CatchHandler @ 00984bc0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984d7c with catch @ 00984d88
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984eb8 with catch @ 00984d8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00984f3c with catch @ 00984d8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00984f4c with catch @ 00984d8c
                        */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_canGoForward",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x193);
LAB_00984d9c:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar7 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
                    /* try { // try from 00984dfc to 00a84e03 has its CatchHandler @ 00984f14 */
                    /* try { // try from 00984e04 to 00a84e13 has its CatchHandler @ 00984f04 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

