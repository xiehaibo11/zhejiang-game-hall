
/* js_webview_WebView_loadFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_loadFileRegistry(FunctionCallbackInfo *param_1)

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
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  this = (WebView *)se::State::nativeThisObject(aSStack_60);
  if (this == (WebView *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0xe4,"js_webview_WebView_loadFile");
    __android_log_print(6,"jswrapper","js_webview_WebView_loadFile : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
      bVar1 = (uVar6 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                            ,0xeb,"js_webview_WebView_loadFile");
        __android_log_print(6,"jswrapper","js_webview_WebView_loadFile : Error processing arguments"
                           );
      }
      else {
        cocos2d::WebView::loadFile(this,(basic_string *)&local_78);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (!bVar1) goto LAB_00983818;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 239): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_loadFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0xf2);
LAB_00983818:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
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

