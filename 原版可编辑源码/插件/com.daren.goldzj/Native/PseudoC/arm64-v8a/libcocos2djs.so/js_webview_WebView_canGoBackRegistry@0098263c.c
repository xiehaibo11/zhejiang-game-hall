
/* js_webview_WebView_canGoBackRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_canGoBackRegistry(FunctionCallbackInfo *param_1)

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
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
                    /* try { // try from 00982684 to 00a8268f has its CatchHandler @ 009826a8 */
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
                    /* try { // try from 00982690 to 00a826bb has its CatchHandler @ 00982628 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
                    /* catch() { ... } // from try @ 00982684 with catch @ 009826a8 */
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  this = (WebView *)se::State::nativeThisObject(aSStack_60);
  if (this == (WebView *)0x0) {
                    /* try { // try from 00982728 to 00a82793 has its CatchHandler @ 00982728
                       catch() { ... } // from try @ 00982728 with catch @ 00982728
                       catch() { ... } // from try @ 009828c8 with catch @ 00982728 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x73,"js_webview_WebView_canGoBack");
    __android_log_print(6,"jswrapper","js_webview_WebView_canGoBack : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      bVar3 = cocos2d::WebView::canGoBack(this);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar6 = boolean_to_seval((bool)(bVar3 & 1),pVVar7);
      if ((uVar6 & 1) != 0) goto LAB_009827ec;
                    /* try { // try from 00982794 to 00a8279f has its CatchHandler @ 00982968 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                          ,0x7a,"js_webview_WebView_canGoBack");
      __android_log_print(6,"jswrapper","js_webview_WebView_canGoBack : Error processing arguments")
      ;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 125): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
    }
  }
                    /* try { // try from 009827c8 to 00a827cb has its CatchHandler @ 00982950 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_canGoBack",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x80);
LAB_009827ec:
                    /* try { // try from 009827f0 to 00a827f7 has its CatchHandler @ 0098294c */
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar7 = local_88;
  if (local_90 != (Value *)0x0) {
                    /* try { // try from 00982814 to 00a82817 has its CatchHandler @ 00982948 */
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
                    /* try { // try from 00982840 to 00a8284b has its CatchHandler @ 00982944 */
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

