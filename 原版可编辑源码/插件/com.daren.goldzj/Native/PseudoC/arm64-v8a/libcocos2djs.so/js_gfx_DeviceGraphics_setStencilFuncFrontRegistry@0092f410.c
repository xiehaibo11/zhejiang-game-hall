
/* js_gfx_DeviceGraphics_setStencilFuncFrontRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_setStencilFuncFrontRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  DeviceGraphics *pDVar8;
  long *plVar9;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar12);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_b8);
  pDVar8 = (DeviceGraphics *)se::State::nativeThisObject(aSStack_80);
  if (pDVar8 == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x38c,"js_gfx_DeviceGraphics_setStencilFuncFront");
    __android_log_print(6,"jswrapper",
                        "js_gfx_DeviceGraphics_setStencilFuncFront : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_80);
    uVar11 = plVar9[1] - *plVar9;
    if (uVar11 == 0x30) {
      local_88 = 0;
      uVar4 = seval_to_int32((Value *)*plVar9,(int *)&local_88);
      uVar11 = local_88;
      local_88 = local_88 & 0xffffffff00000000;
      uVar5 = seval_to_int32((Value *)(*plVar9 + 0x10),(int *)&local_88);
      uVar3 = local_88;
      uVar6 = seval_to_uint32((Value *)(*plVar9 + 0x20),(uint *)((long)&local_88 + 4));
      if ((uVar4 & uVar5 & uVar6 & 1) != 0) {
        cocos2d::renderer::DeviceGraphics::setStencilFuncFront
                  (pDVar8,uVar11 & 0xffffffff,uVar3 & 0xffffffff,local_88._4_4_);
        goto LAB_0092f614;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x397,"js_gfx_DeviceGraphics_setStencilFuncFront");
      __android_log_print(6,"jswrapper",
                          "js_gfx_DeviceGraphics_setStencilFuncFront : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 923): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar11 >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_setStencilFuncFront",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x39e);
LAB_0092f614:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_b8;
  pVVar10 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b0 = pVVar2;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

