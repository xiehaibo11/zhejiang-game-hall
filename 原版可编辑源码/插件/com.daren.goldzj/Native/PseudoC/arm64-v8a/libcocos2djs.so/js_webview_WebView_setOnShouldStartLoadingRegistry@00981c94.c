
/* js_webview_WebView_setOnShouldStartLoadingRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_webview_WebView_setOnShouldStartLoadingRegistry(FunctionCallbackInfo *param_1)

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
  
                    /* try { // try from 00981c98 to 00a81d0f has its CatchHandler @ 009811b0 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_160,pIVar11);
  local_178 = (Value *)0x0;
  local_170 = (Value *)0x0;
  local_168 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_178,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_178);
                    /* try { // try from 00981d10 to 00a81d17 has its CatchHandler @ 00982194 */
  pvVar3 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_148,pvVar3,(vector *)&local_178);
  this = (WebView *)se::State::nativeThisObject(aSStack_148);
  if (this == (WebView *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                        ,0xd,"js_webview_WebView_setOnShouldStartLoading");
    __android_log_print(6,"jswrapper",
                        "js_webview_WebView_setOnShouldStartLoading : Invalid Native Object");
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_148);
    pVVar5 = (Value *)*puVar4;
                    /* try { // try from 00981d4c to 00a81d73 has its CatchHandler @ 009821b0 */
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
            if (plVar9 == (long *)0x0) goto LAB_00981ff4;
            pcVar10 = *(code **)(*plVar9 + 0x28);
          }
          (*pcVar10)();
        }
        else {
                    /* try { // try from 00981d74 to 00a81df3 has its CatchHandler @ 009811b0 */
          pOVar6 = (Object *)se::State::thisObject(aSStack_148);
          se::Value::Value(aVStack_f0,pOVar6,false);
          se::Value::Value(aVStack_100,(Value *)*puVar4);
          pOVar6 = (Object *)se::Value::toObject(aVStack_f0);
          pOVar8 = (Object *)se::Value::toObject(aVStack_100);
          se::Object::attachObject(pOVar6,pOVar8);
          se::Value::Value(aVStack_120,aVStack_f0);
          se::Value::Value(aVStack_110,aVStack_100);
          se::Value::Value(aVStack_e0,aVStack_120);
                    /* try { // try from 00981df4 to 00a81dfb has its CatchHandler @ 0098218c */
          se::Value::Value(aVStack_d0,aVStack_110);
          local_70 = (long *)0x0;
          plVar9 = operator_new(0x28);
          *plVar9 = (long)&PTR_FUN_01c6a168;
          se::Value::Value((Value *)(plVar9 + 1),aVStack_e0);
          se::Value::Value((Value *)(plVar9 + 3),aVStack_d0);
                    /* try { // try from 00981e34 to 00a81e5b has its CatchHandler @ 009821ac */
          local_70 = plVar9;
          FUN_00987a8c(alStack_90,alStack_c0);
          if (alStack_90 == local_70) {
            pcVar10 = *(code **)(*local_70 + 0x20);
LAB_00981fc0:
            (*pcVar10)();
          }
          else if (local_70 != (long *)0x0) {
            pcVar10 = *(code **)(*local_70 + 0x28);
                    /* try { // try from 00981e5c to 00a81eef has its CatchHandler @ 009811b0 */
            goto LAB_00981fc0;
          }
          se::Value::~Value(aVStack_d0);
          se::Value::~Value(aVStack_e0);
          se::Value::~Value(aVStack_110);
          se::Value::~Value(aVStack_120);
          se::Value::~Value(aVStack_100);
          se::Value::~Value(aVStack_f0);
        }
      }
      else {
        local_a0 = (long *)0x0;
      }
LAB_00981ff4:
      cocos2d::WebView::setOnShouldStartLoading(this,(function *)alStack_c0);
                    /* try { // try from 00982008 to 00a8200f has its CatchHandler @ 00982170 */
      if (alStack_c0 == local_a0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      else if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x28))();
      }
      goto LAB_00981ef4;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp, 58): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
  }
                    /* try { // try from 00981ef0 to 00a81ef7 has its CatchHandler @ 00982180 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_webview_WebView_setOnShouldStartLoading",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_webview_auto.cpp"
                      ,0x3d);
LAB_00981ef4:
  pVVar5 = (Value *)se::State::rval(aSStack_148);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_148);
  pVVar2 = local_178;
  pVVar5 = local_170;
  if (local_178 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
                    /* try { // try from 00981f24 to 00a81f4b has its CatchHandler @ 00982188 */
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_170 = pVVar2;
    operator_delete(local_178);
  }
                    /* try { // try from 00981f4c to 00a82007 has its CatchHandler @ 009811b0 */
  v8::HandleScope::~HandleScope(aHStack_160);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

