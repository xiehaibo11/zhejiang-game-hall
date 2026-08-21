
/* js_webview_WebView_setVisibleRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_setVisibleRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  bool local_64 [4];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00985680 to 00a85693 has its CatchHandler @ 00985f98 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
                    /* try { // try from 009856a8 to 00a856b7 has its CatchHandler @ 009860a4 */
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  plVar4 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar4 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x1d2,"js_webview_WebView_setVisible");
    __android_log_print(6,"jswrapper","js_webview_WebView_setVisible : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
                    /* try { // try from 00985700 to 00a8570b has its CatchHandler @ 00985fe8 */
    uVar7 = puVar5[1] - (long)*puVar5;
    if (uVar7 == 0x10) {
      uVar7 = seval_to_boolean((Value *)*puVar5,local_64);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,local_64[0]);
        goto LAB_00985818;
      }
                    /* try { // try from 009857b0 to 00a857bf has its CatchHandler @ 0098609c */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                          ,0x1d9,"js_webview_WebView_setVisible");
      __android_log_print(6,"jswrapper","js_webview_WebView_setVisible : Error processing arguments"
                         );
    }
    else {
                    /* try { // try from 00985788 to 00a8579b has its CatchHandler @ 00986000 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 477): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar7 >> 4,1);
    }
  }
                    /* try { // try from 00985804 to 00a8581b has its CatchHandler @ 0098602c */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_setVisible",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x1e0);
LAB_00985818:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

