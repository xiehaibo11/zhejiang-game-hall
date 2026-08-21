
/* js_engine_CanvasGradient_addColorStopRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_CanvasGradient_addColorStopRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  basic_string *pbVar7;
  long *plVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  float local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar10);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_c0);
  pbVar7 = (basic_string *)se::State::nativeThisObject(aSStack_70);
  if (pbVar7 == (basic_string *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x4cf,"js_engine_CanvasGradient_addColorStop");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasGradient_addColorStop : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    if (plVar8[1] - *plVar8 == 0x20) {
      local_74 = 0.0;
      local_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      uVar4 = seval_to_float((Value *)*plVar8,&local_74);
      uVar5 = seval_to_std_string((Value *)(*plVar8 + 0x10),(basic_string *)&local_90);
      bVar1 = (uVar4 & uVar5 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x4d8,"js_engine_CanvasGradient_addColorStop");
        __android_log_print(6,"jswrapper",
                            "js_engine_CanvasGradient_addColorStop : Error processing arguments");
      }
      else {
        cocos2d::CanvasGradient::addColorStop(local_74,pbVar7);
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (!bVar1) goto LAB_0089e250;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1244): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_CanvasGradient_addColorStop",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x4df);
LAB_0089e250:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

