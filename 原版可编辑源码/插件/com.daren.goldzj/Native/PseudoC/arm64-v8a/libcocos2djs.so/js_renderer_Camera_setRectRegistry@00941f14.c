
/* js_renderer_Camera_setRectRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Camera_setRectRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  Camera *this;
  long *plVar8;
  Value *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_c0);
  this = (Camera *)se::State::nativeThisObject(aSStack_80);
  if (this == (Camera *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x6bf,"js_renderer_Camera_setRect");
    __android_log_print(6,"jswrapper","js_renderer_Camera_setRect : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    uVar10 = plVar8[1] - *plVar8;
    if (uVar10 == 0x40) {
      local_90 = 0;
      local_88 = 0;
      uVar3 = seval_to_float((Value *)*plVar8,(float *)((long)&local_88 + 4));
      uVar4 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)&local_88);
      uVar5 = seval_to_float((Value *)(*plVar8 + 0x20),(float *)((long)&local_90 + 4));
      uVar6 = seval_to_float((Value *)(*plVar8 + 0x30),(float *)&local_90);
      if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
        cocos2d::renderer::Camera::setRect
                  (this,local_88._4_4_,(float)local_88,local_90._4_4_,(float)local_90);
        goto LAB_00942120;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x6cc,"js_renderer_Camera_setRect");
      __android_log_print(6,"jswrapper","js_renderer_Camera_setRect : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 1744): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar10 >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Camera_setRect",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x6d3);
LAB_00942120:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
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

