
/* js_renderer_RenderFlow_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_RenderFlow_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Object *this;
  undefined8 *puVar6;
  Value *pVVar7;
  Object *pOVar8;
  DeviceGraphics *pDVar9;
  Scene *pSVar10;
  ForwardRenderer *pFVar11;
  RenderFlow *this_00;
  ulong uVar12;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  Value aVStack_90 [16];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_a8,*(Isolate **)(*(long *)param_1 + 8));
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_RenderFlow_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_RenderFlow_finalizeRegistry);
  se::State::State(aSStack_80,this,(vector *)&local_c0);
  puVar6 = (undefined8 *)se::State::args(aSStack_80);
  pVVar7 = (Value *)*puVar6;
  if (pVVar7[8] == (Value)0x5) {
    pOVar8 = (Object *)se::Value::toObject(pVVar7);
    pDVar9 = (DeviceGraphics *)se::Object::getPrivateData(pOVar8);
    pVVar7 = (Value *)*puVar6;
    bVar4 = pDVar9 == (DeviceGraphics *)0x0;
  }
  else {
    bVar4 = 1 < (byte)pVVar7[8];
    pDVar9 = (DeviceGraphics *)0x0;
  }
  if (pVVar7[0x18] == (Value)0x5) {
    pOVar8 = (Object *)se::Value::toObject(pVVar7 + 0x10);
    pSVar10 = (Scene *)se::Object::getPrivateData(pOVar8);
    pVVar7 = (Value *)*puVar6;
    bVar5 = pSVar10 == (Scene *)0x0;
  }
  else {
    bVar5 = 1 < (byte)pVVar7[0x18];
    pSVar10 = (Scene *)0x0;
  }
  if (pVVar7[0x28] == (Value)0x5) {
    pOVar8 = (Object *)se::Value::toObject(pVVar7 + 0x20);
    pFVar11 = (ForwardRenderer *)se::Object::getPrivateData(pOVar8);
    if (pFVar11 != (ForwardRenderer *)0x0) {
      bVar3 = true;
      goto LAB_00954410;
    }
  }
  else {
    bVar3 = (byte)pVVar7[0x28] < 2;
    pFVar11 = (ForwardRenderer *)0x0;
LAB_00954410:
    if ((bool)((!bVar4 && !bVar5) & bVar3)) {
      this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
      if (this_00 != (RenderFlow *)0x0) {
        cocos2d::renderer::RenderFlow::RenderFlow(this_00,pDVar9,pSVar10,pFVar11);
      }
      pOVar8 = (Object *)se::State::thisObject(aSStack_80);
      se::Object::setPrivateData(pOVar8,this_00);
      se::NonRefNativePtrCreatedByCtorMap::emplace(this_00);
      goto LAB_009544d4;
    }
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xf55,"js_renderer_RenderFlow_constructor");
  __android_log_print(6,"jswrapper",
                      "js_renderer_RenderFlow_constructor : Error processing arguments");
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_RenderFlow_constructor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xf5b);
LAB_009544d4:
  se::Value::Value(aVStack_90);
  uVar12 = se::Object::getProperty(this,"_ctor",aVStack_90);
  if ((uVar12 & 1) != 0) {
    pOVar8 = (Object *)se::Value::toObject(aVStack_90);
    se::Object::call(pOVar8,(vector *)&local_c0,this,(Value *)0x0);
  }
  se::Value::~Value(aVStack_90);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar7 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

