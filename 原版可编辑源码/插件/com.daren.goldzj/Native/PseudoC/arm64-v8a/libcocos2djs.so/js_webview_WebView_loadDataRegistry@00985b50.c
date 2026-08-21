
/* js_webview_WebView_loadDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_loadDataRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  WebView *this;
  long *plVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_108;
  Value *local_100;
  undefined8 local_f8;
  HandleScope aHStack_f0 [24];
  ulong local_d8;
  undefined8 local_d0;
  void *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  Data aDStack_90 [16];
  State aSStack_80 [40];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
                    /* try { // try from 00985ba0 to 00a85baf has its CatchHandler @ 009860c4 */
  v8::HandleScope::HandleScope(aHStack_f0,pIVar11);
  local_108 = (Value *)0x0;
  local_100 = (Value *)0x0;
  local_f8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_108,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_108);
  pvVar8 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_108);
                    /* try { // try from 00985be4 to 00a85c17 has its CatchHandler @ 009860ac */
  this = (WebView *)se::State::nativeThisObject(aSStack_80);
  if (this == (WebView *)0x0) {
                    /* try { // try from 00985ce8 to 00a85cff has its CatchHandler @ 0098601c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,500,"js_webview_WebView_loadData");
                    /* try { // try from 00985d10 to 00a85d1b has its CatchHandler @ 0098600c */
    __android_log_print(6,"jswrapper","js_webview_WebView_loadData : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_80);
    if (plVar9[1] - *plVar9 == 0x40) {
      cocos2d::Data::Data(aDStack_90);
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      local_d0 = 0;
      local_c8 = (void *)0x0;
                    /* try { // try from 00985c2c to 00a85c37 has its CatchHandler @ 00986060 */
      local_d8 = 0;
      uVar4 = seval_to_Data((Value *)*plVar9,aDStack_90);
      uVar5 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_a8);
                    /* try { // try from 00985c50 to 00a85c57 has its CatchHandler @ 0098605c */
      uVar6 = seval_to_std_string((Value *)(*plVar9 + 0x20),(basic_string *)&local_c0);
      uVar7 = seval_to_std_string((Value *)(*plVar9 + 0x30),(basic_string *)&local_d8);
      bVar1 = (uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0;
      if (bVar1) {
                    /* try { // try from 00985e08 to 00a85e13 has its CatchHandler @ 00985fc8 */
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                            ,0x201,"js_webview_WebView_loadData");
        __android_log_print(6,"jswrapper","js_webview_WebView_loadData : Error processing arguments"
                           );
      }
      else {
                    /* try { // try from 00985c94 to 00a85ca3 has its CatchHandler @ 00986090 */
        cocos2d::WebView::loadData
                  (this,aDStack_90,(basic_string *)&local_a8,(basic_string *)&local_c0,
                   (basic_string *)&local_d8);
      }
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      cocos2d::Data::~Data(aDStack_90);
      if (!bVar1) goto LAB_00985d70;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 517): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_loadData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x208);
LAB_00985d70:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_108;
  pVVar10 = local_100;
  if (local_108 != (Value *)0x0) {
                    /* try { // try from 00985d98 to 00a85d9b has its CatchHandler @ 00985fd0 */
    while (pVVar10 != pVVar3) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_100 = pVVar3;
    operator_delete(local_108);
  }
  v8::HandleScope::~HandleScope(aHStack_f0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00985de0 to 00a85df7 has its CatchHandler @ 00986018 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

