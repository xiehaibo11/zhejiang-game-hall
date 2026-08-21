
/* js_webview_WebView_setBackgroundTransparentRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_webview_WebView_setBackgroundTransparentRegistry(FunctionCallbackInfo *param_1)

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
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
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
                        ,0x161,"js_webview_WebView_setBackgroundTransparent");
    __android_log_print(6,"jswrapper",
                        "js_webview_WebView_setBackgroundTransparent : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
                    /* try { // try from 00984774 to 00a8477f has its CatchHandler @ 00984970 */
    uVar7 = puVar5[1] - (long)*puVar5;
    if (uVar7 == 0x10) {
                    /* try { // try from 00984780 to 00a8481b has its CatchHandler @ 00984618 */
      uVar7 = seval_to_boolean((Value *)*puVar5,local_64);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,local_64[0]);
        goto LAB_00984880;
      }
                    /* try { // try from 0098481c to 00a84823 has its CatchHandler @ 00984960 */
                    /* try { // try from 00984834 to 00a84837 has its CatchHandler @ 00984970 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                          ,0x168,"js_webview_WebView_setBackgroundTransparent");
      __android_log_print(6,"jswrapper",
                          "js_webview_WebView_setBackgroundTransparent : Error processing arguments"
                         );
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 364): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar7 >> 4,1);
    }
  }
                    /* try { // try from 00984874 to 00a8487b has its CatchHandler @ 00984958 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_setBackgroundTransparent",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x16f);
LAB_00984880:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
                    /* try { // try from 0098488c to 00a848cf has its CatchHandler @ 00984970 */
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
                    /* try { // try from 009848d0 to 00a849d3 has its CatchHandler @ 00984618 */
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

