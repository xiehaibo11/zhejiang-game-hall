
/* js_renderer_EffectBase_setCullModeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectBase_setCullModeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  EffectBase *pEVar7;
  long *plVar8;
  Value *pVVar9;
  ulong uVar10;
  long lVar11;
  Isolate *pIVar12;
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
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar12);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_a8);
  pEVar7 = (EffectBase *)se::State::nativeThisObject(aSStack_70);
  if (pEVar7 == (EffectBase *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xb9,"js_renderer_EffectBase_setCullMode");
    __android_log_print(6,"jswrapper","js_renderer_EffectBase_setCullMode : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    pVVar9 = (Value *)*plVar8;
    lVar11 = plVar8[1] - (long)pVVar9 >> 4;
    if (lVar11 == 2) {
      local_74 = 0;
      uVar4 = seval_to_int32(pVVar9,&local_74);
      iVar3 = local_74;
      local_74 = 0;
      uVar5 = seval_to_int32((Value *)(*plVar8 + 0x10),&local_74);
      if ((uVar4 & uVar5 & 1) != 0) {
        cocos2d::renderer::EffectBase::setCullMode(pEVar7,iVar3,local_74);
        goto LAB_00936ec0;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xc9,"js_renderer_EffectBase_setCullMode");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setCullMode : Error processing arguments");
    }
    else if (lVar11 == 1) {
      local_74 = 0;
      uVar10 = seval_to_int32(pVVar9,&local_74);
      if ((uVar10 & 1) != 0) {
        cocos2d::renderer::EffectBase::setCullMode(pEVar7,local_74,0xffffffff);
        goto LAB_00936ec0;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xc0,"js_renderer_EffectBase_setCullMode");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setCullMode : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 205): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - (long)pVVar9) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectBase_setCullMode",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xd0);
LAB_00936ec0:
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

