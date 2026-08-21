
/* js_gfx_DeviceGraphics_setBlendFuncSeparateRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_setBlendFuncSeparateRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  DeviceGraphics *pDVar11;
  long *plVar12;
  Value *pVVar13;
  ulong uVar14;
  Isolate *pIVar15;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [28];
  int local_94;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar15);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar10 = (void *)se::internal::getPrivate(pIVar15,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar10,(vector *)&local_c8);
  pDVar11 = (DeviceGraphics *)se::State::nativeThisObject(aSStack_90);
  if (pDVar11 == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x1cc,"js_gfx_DeviceGraphics_setBlendFuncSeparate");
    __android_log_print(6,"jswrapper",
                        "js_gfx_DeviceGraphics_setBlendFuncSeparate : Invalid Native Object");
  }
  else {
    plVar12 = (long *)se::State::args(aSStack_90);
    uVar14 = plVar12[1] - *plVar12;
    if (uVar14 == 0x40) {
      local_94 = 0;
      uVar6 = seval_to_int32((Value *)*plVar12,&local_94);
      iVar3 = local_94;
      local_94 = 0;
      uVar7 = seval_to_int32((Value *)(*plVar12 + 0x10),&local_94);
      iVar4 = local_94;
      local_94 = 0;
      uVar8 = seval_to_int32((Value *)(*plVar12 + 0x20),&local_94);
      iVar5 = local_94;
      local_94 = 0;
      uVar9 = seval_to_int32((Value *)(*plVar12 + 0x30),&local_94);
      if ((uVar6 & uVar7 & uVar8 & uVar9 & 1) != 0) {
        cocos2d::renderer::DeviceGraphics::setBlendFuncSeparate(pDVar11,iVar3,iVar4,iVar5,local_94);
        goto LAB_0092bbdc;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x1d9,"js_gfx_DeviceGraphics_setBlendFuncSeparate");
      __android_log_print(6,"jswrapper",
                          "js_gfx_DeviceGraphics_setBlendFuncSeparate : Error processing arguments")
      ;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 477): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar14 >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_setBlendFuncSeparate",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x1e0);
LAB_0092bbdc:
  pVVar13 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_c8;
  pVVar13 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar13 != pVVar2) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
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

