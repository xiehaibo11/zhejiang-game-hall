
/* js_gfx_DeviceGraphics_setBlendFuncRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_setBlendFuncRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  DeviceGraphics *pDVar7;
  long *plVar8;
  Value *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [28];
  int local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_a8);
  pDVar7 = (DeviceGraphics *)se::State::nativeThisObject(aSStack_70);
  if (pDVar7 == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x3d3,"js_gfx_DeviceGraphics_setBlendFunc");
    __android_log_print(6,"jswrapper","js_gfx_DeviceGraphics_setBlendFunc : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    uVar10 = plVar8[1] - *plVar8;
    if (uVar10 == 0x20) {
      local_74 = 0;
      uVar4 = seval_to_int32((Value *)*plVar8,&local_74);
      iVar3 = local_74;
      local_74 = 0;
      uVar5 = seval_to_int32((Value *)(*plVar8 + 0x10),&local_74);
      if ((uVar4 & uVar5 & 1) != 0) {
        cocos2d::renderer::DeviceGraphics::setBlendFunc(pDVar7,iVar3,local_74);
        goto LAB_0092ff1c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                          ,0x3dc,"js_gfx_DeviceGraphics_setBlendFunc");
      __android_log_print(6,"jswrapper",
                          "js_gfx_DeviceGraphics_setBlendFunc : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 992): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar10 >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_setBlendFunc",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x3e3);
LAB_0092ff1c:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

