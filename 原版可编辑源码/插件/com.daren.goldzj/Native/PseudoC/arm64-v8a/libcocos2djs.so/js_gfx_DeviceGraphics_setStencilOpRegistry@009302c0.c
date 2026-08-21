
/* js_gfx_DeviceGraphics_setStencilOpRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_setStencilOpRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  DeviceGraphics *pDVar10;
  long *plVar11;
  Value *pVVar12;
  ulong uVar13;
  Isolate *pIVar14;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar14);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar9 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar9,(vector *)&local_c8);
  pDVar10 = (DeviceGraphics *)se::State::nativeThisObject(aSStack_90);
  if (pDVar10 == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x3fb,"js_gfx_DeviceGraphics_setStencilOp");
    __android_log_print(6,"jswrapper","js_gfx_DeviceGraphics_setStencilOp : Invalid Native Object");
  }
  else {
    plVar11 = (long *)se::State::args(aSStack_90);
    uVar13 = plVar11[1] - *plVar11;
    if (uVar13 == 0x40) {
      local_98 = 0;
      uVar5 = seval_to_int32((Value *)*plVar11,(int *)&local_98);
      uVar13 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar6 = seval_to_int32((Value *)(*plVar11 + 0x10),(int *)&local_98);
      uVar3 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar7 = seval_to_int32((Value *)(*plVar11 + 0x20),(int *)&local_98);
      uVar4 = local_98;
      uVar8 = seval_to_uint32((Value *)(*plVar11 + 0x30),(uint *)((long)&local_98 + 4));
      if ((uVar5 & uVar6 & uVar7 & uVar8 & 1) != 0) {
        cocos2d::renderer::DeviceGraphics::setStencilOp
                  (pDVar10,uVar13 & 0xffffffff,uVar3 & 0xffffffff,uVar4 & 0xffffffff,local_98._4_4_)
        ;
        goto LAB_009304ec;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x408,"js_gfx_DeviceGraphics_setStencilOp");
      __android_log_print(6,"jswrapper",
                          "js_gfx_DeviceGraphics_setStencilOp : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1036): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar13 >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_setStencilOp",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x40f);
LAB_009304ec:
  pVVar12 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_c8;
  pVVar12 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

