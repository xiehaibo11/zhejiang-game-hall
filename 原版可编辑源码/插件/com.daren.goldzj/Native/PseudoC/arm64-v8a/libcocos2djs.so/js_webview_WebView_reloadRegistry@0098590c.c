
/* js_webview_WebView_reloadRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_reloadRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  WebView *this;
  long *plVar4;
  Value *pVVar5;
  Isolate *pIVar6;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0098593c to 00a8594b has its CatchHandler @ 00986098 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar6);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar6,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00985990 to 00a859a7 has its CatchHandler @ 00986028 */
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (WebView *)se::State::nativeThisObject(aSStack_60);
  if (this == (WebView *)0x0) {
                    /* try { // try from 009859f8 to 00a85a07 has its CatchHandler @ 0098613c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x1e5,"js_webview_WebView_reload");
    __android_log_print(6,"jswrapper","js_webview_WebView_reload : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    if (plVar4[1] - *plVar4 == 0) {
      cocos2d::WebView::reload(this);
      goto LAB_00985a5c;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 492): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar4[1] - *plVar4) >> 4,0);
  }
                    /* try { // try from 00985a3c to 00a85a5b has its CatchHandler @ 009860b0 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_reload",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x1ef);
LAB_00985a5c:
                    /* try { // try from 00985a60 to 00a85a6f has its CatchHandler @ 00986080 */
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar5 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
                    /* try { // try from 00985a88 to 00a85a8f has its CatchHandler @ 00986068 */
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

