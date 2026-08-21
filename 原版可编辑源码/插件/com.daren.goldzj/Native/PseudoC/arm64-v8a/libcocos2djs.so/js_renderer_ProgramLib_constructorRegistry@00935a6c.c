
/* js_renderer_ProgramLib_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_ProgramLib_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  bool bVar5;
  byte bVar6;
  Object *this;
  undefined8 *puVar7;
  Value *pVVar8;
  Object *pOVar9;
  DeviceGraphics *pDVar10;
  ProgramLib *this_00;
  ulong uVar11;
  void *pvVar12;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  State aSStack_88 [40];
  void *local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_a0,*(Isolate **)(*(long *)param_1 + 8));
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_ProgramLib_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_ProgramLib_finalizeRegistry);
  se::State::State(aSStack_88,this,(vector *)&local_b8);
  puVar7 = (undefined8 *)se::State::args(aSStack_88);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_60 = (void *)0x0;
  pVVar8 = (Value *)*puVar7;
  if (pVVar8[8] == (Value)0x5) {
    pOVar9 = (Object *)se::Value::toObject(pVVar8);
    pDVar10 = (DeviceGraphics *)se::Object::getPrivateData(pOVar9);
    pVVar8 = (Value *)*puVar7;
    bVar5 = pDVar10 == (DeviceGraphics *)0x0;
  }
  else {
    bVar5 = 1 < (byte)pVVar8[8];
    pDVar10 = (DeviceGraphics *)0x0;
  }
  bVar6 = seval_to_std_vector_ProgramLib_Template(pVVar8 + 0x10,(vector *)&local_60);
  if ((!bVar5 & bVar6) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x2e,"js_renderer_ProgramLib_constructor");
    __android_log_print(6,"jswrapper",
                        "js_renderer_ProgramLib_constructor : Error processing arguments");
    bVar2 = false;
    bVar5 = false;
    if (local_60 == (void *)0x0) goto LAB_00935bbc;
LAB_00935c14:
    pvVar4 = local_60;
    if (local_58 != local_60) {
      pvVar12 = local_58;
      do {
        pvVar12 = (void *)((long)pvVar12 + -0x68);
        FUN_008e15e8(&uStack_50,pvVar12);
      } while (pvVar4 != pvVar12);
    }
    local_58 = pvVar4;
    operator_delete(local_60);
    if (bVar5) goto LAB_00935c84;
  }
  else {
    this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
    if (this_00 != (ProgramLib *)0x0) {
      cocos2d::renderer::ProgramLib::ProgramLib(this_00,pDVar10,(vector *)&local_60);
    }
    pOVar9 = (Object *)se::State::thisObject(aSStack_88);
    se::Object::setPrivateData(pOVar9,this_00);
    se::NonRefNativePtrCreatedByCtorMap::emplace(this_00);
    bVar5 = true;
    bVar2 = bVar5;
    if (local_60 != (void *)0x0) goto LAB_00935c14;
LAB_00935bbc:
    if (bVar2) goto LAB_00935c84;
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_ProgramLib_constructor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x34);
LAB_00935c84:
  se::Value::Value((Value *)&local_60);
  uVar11 = se::Object::getProperty(this,"_ctor",(Value *)&local_60);
  if ((uVar11 & 1) != 0) {
    pOVar9 = (Object *)se::Value::toObject((Value *)&local_60);
    se::Object::call(pOVar9,(vector *)&local_b8,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_60);
  se::State::~State(aSStack_88);
  pVVar3 = local_b8;
  pVVar8 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b0 = pVVar3;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

