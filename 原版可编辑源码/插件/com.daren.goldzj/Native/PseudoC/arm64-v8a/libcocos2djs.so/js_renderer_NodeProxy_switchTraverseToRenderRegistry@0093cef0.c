
/* js_renderer_NodeProxy_switchTraverseToRenderRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_renderer_NodeProxy_switchTraverseToRenderRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  State aSStack_98 [40];
  undefined **local_70;
  code *pcStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar7);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar3,(vector *)&local_c8);
  lVar4 = se::State::nativeThisObject(aSStack_98);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x469,"js_renderer_NodeProxy_switchTraverseToRender");
    __android_log_print(6,"jswrapper",
                        "js_renderer_NodeProxy_switchTraverseToRender : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_98);
    if (plVar5[1] - *plVar5 == 0) {
      local_70 = &PTR_FUN_01c694f0;
      pcStack_68 = cocos2d::renderer::NodeProxy::render;
      local_50 = &local_70;
      FUN_00923dac(&local_70,lVar4 + 0x10);
      if (&local_70 == local_50) {
        (*(code *)(*local_50)[4])();
      }
      else if (local_50 != (undefined ***)0x0) {
        (*(code *)(*local_50)[5])();
      }
      goto LAB_0093d034;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 1136): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_NodeProxy_switchTraverseToRender",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x473);
LAB_0093d034:
  pVVar6 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_98);
  pVVar2 = local_c8;
  pVVar6 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

