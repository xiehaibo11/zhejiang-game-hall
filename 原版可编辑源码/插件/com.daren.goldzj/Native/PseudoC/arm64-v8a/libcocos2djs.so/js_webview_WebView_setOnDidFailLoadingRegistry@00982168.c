
/* js_webview_WebView_setOnDidFailLoadingRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_setOnDidFailLoadingRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  WebView *this;
  undefined8 *puVar4;
  Value *pVVar5;
  Object *pOVar6;
  ulong uVar7;
  Object *pOVar8;
  long *plVar9;
  code *pcVar10;
  Isolate *pIVar11;
  Value *local_178;
  Value *local_170;
  undefined8 local_168;
  HandleScope aHStack_160 [24];
  State aSStack_148 [40];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
                    /* catch() { ... } // from try @ 009820e8 with catch @ 00982168 */
                    /* catch() { ... } // from try @ 00982008 with catch @ 00982170 */
                    /* catch() { ... } // from try @ 00982120 with catch @ 00982178 */
                    /* catch() { ... } // from try @ 00982044 with catch @ 0098217c */
                    /* catch() { ... } // from try @ 00981ef0 with catch @ 00982180 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00981f24 with catch @ 00982188 */
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00981df4 with catch @ 0098218c */
                    /* catch() { ... } // from try @ 00981d10 with catch @ 00982194 */
                    /* catch() { ... } // from try @ 00981c34 with catch @ 0098219c */
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* catch() { ... } // from try @ 00981b5c with catch @ 009821a4 */
                    /* catch() { ... } // from try @ 00981e34 with catch @ 009821ac */
                    /* catch() { ... } // from try @ 00981d4c with catch @ 009821b0 */
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
                    /* catch() { ... } // from try @ 00981c70 with catch @ 009821b4 */
                    /* catch() { ... } // from try @ 00981b98 with catch @ 009821b8 */
  v8::HandleScope::HandleScope(aHStack_160,pIVar11);
                    /* catch() { ... } // from try @ 00981ab4 with catch @ 009821bc */
  local_178 = (Value *)0x0;
  local_170 = (Value *)0x0;
                    /* catch() { ... } // from try @ 009819e0 with catch @ 009821c0 */
  local_168 = 0;
                    /* catch() { ... } // from try @ 00981960 with catch @ 009821c4 */
                    /* catch() { ... } // from try @ 00981894 with catch @ 009821c8 */
                    /* catch() { ... } // from try @ 009817cc with catch @ 009821cc */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_178,10);
                    /* catch() { ... } // from try @ 009816fc with catch @ 009821d0 */
                    /* catch() { ... } // from try @ 00981630 with catch @ 009821d4 */
                    /* catch() { ... } // from try @ 0098155c with catch @ 009821d8 */
  se::internal::jsToSeArgs(param_1,(vector *)&local_178);
                    /* catch() { ... } // from try @ 009814cc with catch @ 009821dc */
                    /* catch() { ... } // from try @ 00981440 with catch @ 009821e0 */
                    /* catch() { ... } // from try @ 00981330 with catch @ 009821e4 */
                    /* catch() { ... } // from try @ 009812a8 with catch @ 009821e8 */
  pvVar3 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
                    /* catch() { ... } // from try @ 00981220 with catch @ 009821ec */
  se::State::State(aSStack_148,pvVar3,(vector *)&local_178);
  this = (WebView *)se::State::nativeThisObject(aSStack_148);
  if (this == (WebView *)0x0) {
                    /* try { // try from 0098233c to 00a82347 has its CatchHandler @ 00982374 */
                    /* try { // try from 00982348 to 00a82387 has its CatchHandler @ 00982310 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0x42,"js_webview_WebView_setOnDidFailLoading");
                    /* catch() { ... } // from try @ 0098233c with catch @ 00982374 */
    __android_log_print(6,"jswrapper",
                        "js_webview_WebView_setOnDidFailLoading : Invalid Native Object");
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_148);
    pVVar5 = (Value *)*puVar4;
    if (puVar4[1] - (long)pVVar5 == 0x10) {
      local_a0 = (long *)0x0;
      if (pVVar5[8] == (Value)0x5) {
        pOVar6 = (Object *)se::Value::toObject(pVVar5);
        uVar7 = se::Object::isFunction(pOVar6);
        plVar9 = local_a0;
        if ((uVar7 & 1) == 0) {
          local_a0 = (long *)0x0;
          if (alStack_c0 == plVar9) {
            pcVar10 = *(code **)(*plVar9 + 0x20);
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_009824c8;
            pcVar10 = *(code **)(*plVar9 + 0x28);
          }
          (*pcVar10)();
        }
        else {
          pOVar6 = (Object *)se::State::thisObject(aSStack_148);
          se::Value::Value(aVStack_f0,pOVar6,false);
          se::Value::Value(aVStack_100,(Value *)*puVar4);
          pOVar6 = (Object *)se::Value::toObject(aVStack_f0);
          pOVar8 = (Object *)se::Value::toObject(aVStack_100);
          se::Object::attachObject(pOVar6,pOVar8);
          se::Value::Value(aVStack_120,aVStack_f0);
          se::Value::Value(aVStack_110,aVStack_100);
          se::Value::Value(aVStack_e0,aVStack_120);
          se::Value::Value(aVStack_d0,aVStack_110);
          local_70 = (long *)0x0;
          plVar9 = operator_new(0x28);
          *plVar9 = (long)&PTR_FUN_01c6a1f8;
          se::Value::Value((Value *)(plVar9 + 1),aVStack_e0);
          se::Value::Value((Value *)(plVar9 + 3),aVStack_d0);
                    /* try { // try from 00982310 to 00a8233b has its CatchHandler @ 00982310
                       catch() { ... } // from try @ 00982310 with catch @ 00982310
                       catch() { ... } // from try @ 00982348 with catch @ 00982310 */
          local_70 = plVar9;
          FUN_00987f74(alStack_90,alStack_c0);
          if (alStack_90 == local_70) {
                    /* catch() { ... } // from try @ 009824cc with catch @ 00982490 */
            pcVar10 = *(code **)(*local_70 + 0x20);
LAB_00982494:
            (*pcVar10)();
          }
          else if (local_70 != (long *)0x0) {
            pcVar10 = *(code **)(*local_70 + 0x28);
            goto LAB_00982494;
          }
          se::Value::~Value(aVStack_d0);
          se::Value::~Value(aVStack_e0);
          se::Value::~Value(aVStack_110);
          se::Value::~Value(aVStack_120);
          se::Value::~Value(aVStack_100);
                    /* try { // try from 009824c4 to 00a824cb has its CatchHandler @ 00982534 */
          se::Value::~Value(aVStack_f0);
        }
      }
      else {
        local_a0 = (long *)0x0;
      }
LAB_009824c8:
                    /* try { // try from 009824cc to 00a8254f has its CatchHandler @ 00982490 */
      cocos2d::WebView::setOnDidFailLoading(this,(function *)alStack_c0);
      if (alStack_c0 == local_a0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      else if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x28))();
      }
      goto LAB_009823c8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 107): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_setOnDidFailLoading",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x6e);
LAB_009823c8:
  pVVar5 = (Value *)se::State::rval(aSStack_148);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_148);
  pVVar2 = local_178;
  pVVar5 = local_170;
  if (local_178 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_170 = pVVar2;
    operator_delete(local_178);
  }
  v8::HandleScope::~HandleScope(aHStack_160);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

