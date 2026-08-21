
/* js_renderer_Light_getColorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Light_getColorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  undefined8 local_70;
  undefined4 local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar8);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_a0);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xa42,"js_renderer_Light_getColor");
    __android_log_print(6,"jswrapper","js_renderer_Light_getColor : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      local_70 = *(undefined8 *)(lVar4 + 0x10);
      local_68 = *(undefined4 *)(lVar4 + 0x18);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar6 = Color3F_to_seval((Color3F *)&local_70,pVVar7);
      if ((uVar6 & 1) != 0) goto LAB_00949c8c;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xa49,"js_renderer_Light_getColor");
      __android_log_print(6,"jswrapper","js_renderer_Light_getColor : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 2636): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Light_getColor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xa4f);
LAB_00949c8c:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a0;
  pVVar7 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

