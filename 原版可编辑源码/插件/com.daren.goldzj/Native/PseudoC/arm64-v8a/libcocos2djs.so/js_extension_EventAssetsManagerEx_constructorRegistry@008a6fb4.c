
/* js_extension_EventAssetsManagerEx_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_extension_EventAssetsManagerEx_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  Object *this;
  long *plVar7;
  Object *pOVar8;
  AssetsManagerEx *pAVar9;
  EventAssetsManagerEx *this_00;
  ulong uVar10;
  long lVar11;
  Value *local_f0;
  Value *local_e8;
  undefined8 local_e0;
  HandleScope aHStack_d8 [24];
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_98;
  int local_8c;
  State aSStack_88 [40];
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_d8,*(Isolate **)(*(long *)param_1 + 8));
  local_f0 = (Value *)0x0;
  local_e8 = (Value *)0x0;
  local_e0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_extension_EventAssetsManagerEx_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_extension_EventAssetsManagerEx_finalizeRegistry);
  se::State::State(aSStack_88,this,(vector *)&local_f0);
  plVar7 = (long *)se::State::args(aSStack_88);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  bVar5 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_60);
  lVar11 = *plVar7;
  if (*(byte *)(lVar11 + 0x18) == 5) {
    pOVar8 = (Object *)se::Value::toObject((Value *)(lVar11 + 0x10));
    pAVar9 = (AssetsManagerEx *)se::Object::getPrivateData(pOVar8);
    lVar11 = *plVar7;
    bVar4 = pAVar9 == (AssetsManagerEx *)0x0;
  }
  else {
    bVar4 = 1 < *(byte *)(lVar11 + 0x18);
    pAVar9 = (AssetsManagerEx *)0x0;
  }
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  bVar6 = seval_to_int32((Value *)(lVar11 + 0x20),(int *)&local_a8);
  local_8c = (int)local_a8;
  if ((bVar5 & !bVar4 & bVar6) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0xff,"js_extension_EventAssetsManagerEx_constructor");
    __android_log_print(6,"jswrapper",
                        "js_extension_EventAssetsManagerEx_constructor : Error processing arguments"
                       );
    bVar4 = false;
  }
  else {
    this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
    if (this_00 != (EventAssetsManagerEx *)0x0) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
                (this_00,(basic_string *)&local_60,pAVar9,(EventCode *)&local_8c,
                 (basic_string *)&local_a8,(basic_string *)&local_c0,0,0);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    pOVar8 = (Object *)se::State::thisObject(aSStack_88);
    se::Object::setPrivateData(pOVar8,this_00);
    bVar4 = true;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (!bVar4) {
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_extension_EventAssetsManagerEx_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x104);
  }
  se::Value::Value((Value *)&local_60);
  uVar10 = se::Object::getProperty(this,"_ctor",(Value *)&local_60);
  if ((uVar10 & 1) != 0) {
    pOVar8 = (Object *)se::Value::toObject((Value *)&local_60);
    se::Object::call(pOVar8,(vector *)&local_f0,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_60);
  se::State::~State(aSStack_88);
  pVVar3 = local_f0;
  pVVar2 = local_e8;
  if (local_f0 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_e8 = pVVar3;
    operator_delete(local_f0);
  }
  v8::HandleScope::~HandleScope(aHStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

