
/* js_webview_WebView_getOnJSCallbackRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_getOnJSCallbackRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  State aSStack_98 [40];
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar7);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984b20 with catch @ 009849d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00984ba4 with catch @ 009849d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00984bb4 with catch @ 009849d4
                        */
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar3,(vector *)&local_c8);
  lVar4 = se::State::nativeThisObject(aSStack_98);
  if (lVar4 == 0) {
                    /* try { // try from 00984a48 to 00a84a4f has its CatchHandler @ 00984b7c */
                    /* try { // try from 00984a50 to 00a84a5f has its CatchHandler @ 00984b6c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x174,"js_webview_WebView_getOnJSCallback");
                    /* try { // try from 00984a88 to 00a84a93 has its CatchHandler @ 00984b80 */
    __android_log_print(6,"jswrapper","js_webview_WebView_getOnJSCallback : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_98);
    if (plVar5[1] - *plVar5 == 0) {
      cocos2d::WebView::getOnJSCallback();
      if (alStack_70 == local_50) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984a94 with catch @ 00984b68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984a50 with catch @ 00984b6c
                        */
        (**(code **)(*local_50 + 0x20))();
      }
      else {
                    /* try { // try from 00984b1c to 00a84b1f has its CatchHandler @ 00984b5c */
        if (local_50 != (long *)0x0) {
                    /* try { // try from 00984b20 to 00a84b9f has its CatchHandler @ 009849d4 */
          (**(code **)(*local_50 + 0x28))();
        }
      }
      goto LAB_00984ab8;
    }
                    /* try { // try from 00984a28 to 00a84a2b has its CatchHandler @ 00984b60 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 382): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
                    /* try { // try from 00984a94 to 00a84ab3 has its CatchHandler @ 00984b68 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_getOnJSCallback",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x181);
LAB_00984ab8:
  pVVar6 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_98);
  pVVar2 = local_c8;
  pVVar6 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
                    /* try { // try from 00984af0 to 00a84aff has its CatchHandler @ 00984b80 */
      pVVar6 = pVVar6 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984b1c with catch @ 00984b5c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984a28 with catch @ 00984b60
                        */
  return;
}

