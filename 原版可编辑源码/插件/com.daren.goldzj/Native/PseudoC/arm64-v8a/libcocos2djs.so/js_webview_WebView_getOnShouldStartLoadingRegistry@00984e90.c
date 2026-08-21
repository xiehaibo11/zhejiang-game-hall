
/* js_webview_WebView_getOnShouldStartLoadingRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_getOnShouldStartLoadingRegistry(FunctionCallbackInfo *param_1)

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
                    /* try { // try from 00984eb4 to 00a84eb7 has its CatchHandler @ 00984ef4 */
                    /* try { // try from 00984eb8 to 00a84f37 has its CatchHandler @ 00984d8c */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar7);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984eb4 with catch @ 00984ef4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984de0 with catch @ 00984ef8
                        */
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984e48 with catch @ 00984f00
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984e04 with catch @ 00984f04
                        */
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984dfc with catch @ 00984f14
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984e3c with catch @ 00984f18
                       catch(type#1 @ 00000000) { ... } // from try @ 00984e88 with catch @ 00984f18
                        */
  se::State::State(aSStack_98,pvVar3,(vector *)&local_c8);
  lVar4 = se::State::nativeThisObject(aSStack_98);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x198,"js_webview_WebView_getOnShouldStartLoading");
    __android_log_print(6,"jswrapper",
                        "js_webview_WebView_getOnShouldStartLoading : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_98);
                    /* try { // try from 00984f38 to 00a84f3b has its CatchHandler @ 00984f44 */
                    /* try { // try from 00984f3c to 00a84f47 has its CatchHandler @ 00984d8c */
    if (plVar5[1] - *plVar5 == 0) {
      cocos2d::WebView::getOnShouldStartLoading();
      if (alStack_70 == local_50) {
                    /* try { // try from 00985084 to 00a85103 has its CatchHandler @ 00984f58 */
        (**(code **)(*local_50 + 0x20))();
      }
      else if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x28))();
      }
      goto LAB_00984fd4;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984f38 with catch @ 00984f44
                        */
                    /* try { // try from 00984f48 to 00a84f4b has its CatchHandler @ 00984f54 */
                    /* try { // try from 00984f4c to 00a84f57 has its CatchHandler @ 00984d8c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984f48 with catch @ 00984f54
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00985084 with catch @ 00984f58
                       catch(type#1 @ 00000000) { ... } // from try @ 00985108 with catch @ 00984f58
                       catch(type#1 @ 00000000) { ... } // from try @ 00985118 with catch @ 00984f58
                        */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 418): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
                    /* try { // try from 00984fac to 00a84faf has its CatchHandler @ 009850c4 */
                    /* try { // try from 00984fc8 to 00a84fcf has its CatchHandler @ 009850e0 */
                    /* try { // try from 00984fd0 to 00a84fdf has its CatchHandler @ 009850d0 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_getOnShouldStartLoading",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x1a5);
LAB_00984fd4:
  pVVar6 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_98);
  pVVar2 = local_c8;
  pVVar6 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
                    /* try { // try from 00985008 to 00a85013 has its CatchHandler @ 009850e4 */
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
                    /* try { // try from 00985050 to 00a85063 has its CatchHandler @ 009850e4 */
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00985080 to 00a85083 has its CatchHandler @ 009850c0 */
  return;
}

