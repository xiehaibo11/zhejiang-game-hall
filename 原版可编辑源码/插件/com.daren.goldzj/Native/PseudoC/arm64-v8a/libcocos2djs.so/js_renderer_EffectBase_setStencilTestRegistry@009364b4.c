
/* js_renderer_EffectBase_setStencilTestRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectBase_setStencilTestRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  EffectBase *this;
  long *plVar6;
  Value *pVVar7;
  ulong uVar8;
  long lVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  int local_78;
  bool local_74 [4];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  this = (EffectBase *)se::State::nativeThisObject(aSStack_70);
  if (this == (EffectBase *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x7d,"js_renderer_EffectBase_setStencilTest");
    __android_log_print(6,"jswrapper",
                        "js_renderer_EffectBase_setStencilTest : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    pVVar7 = (Value *)*plVar6;
    lVar9 = plVar6[1] - (long)pVVar7 >> 4;
    if (lVar9 == 2) {
      uVar3 = seval_to_boolean(pVVar7,local_74);
      local_78 = 0;
      uVar4 = seval_to_int32((Value *)(*plVar6 + 0x10),&local_78);
      if ((uVar3 & uVar4 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencilTest(this,local_74[0],local_78);
        goto LAB_00936700;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x8d,"js_renderer_EffectBase_setStencilTest");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencilTest : Error processing arguments");
    }
    else if (lVar9 == 1) {
      uVar8 = seval_to_boolean(pVVar7,(bool *)&local_78);
      if ((uVar8 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencilTest(this,local_78._0_1_,-1);
        goto LAB_00936700;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x84,"js_renderer_EffectBase_setStencilTest");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencilTest : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 145): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - (long)pVVar7) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectBase_setStencilTest",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x94);
LAB_00936700:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

