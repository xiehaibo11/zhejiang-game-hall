
/* js_renderer_EffectBase_defineRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectBase_defineRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  EffectBase *this;
  long *plVar8;
  Value *pVVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [28];
  int local_9c;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar11);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_d0);
  this = (EffectBase *)se::State::nativeThisObject(aSStack_80);
  if (this == (EffectBase *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x242,"js_renderer_EffectBase_define");
    __android_log_print(6,"jswrapper","js_renderer_EffectBase_define : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    lVar10 = plVar8[1] - *plVar8 >> 4;
    if (lVar10 == 3) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      cocos2d::Value::Value(aVStack_58);
      uVar4 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_98);
      uVar5 = seval_to_ccvalue((Value *)(*plVar8 + 0x10),aVStack_58);
      local_9c = 0;
      uVar6 = seval_to_int32((Value *)(*plVar8 + 0x20),&local_9c);
      if ((uVar4 & uVar5 & uVar6 & 1) != 0) {
        cocos2d::renderer::EffectBase::define(this,(basic_string *)&local_98,aVStack_58,local_9c);
        goto LAB_00938f28;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x256,"js_renderer_EffectBase_define");
      __android_log_print(6,"jswrapper","js_renderer_EffectBase_define : Error processing arguments"
                         );
LAB_00938fe0:
      bVar2 = false;
    }
    else {
      if (lVar10 != 2) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 602): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar8[1] - *plVar8) >> 4,3);
        goto LAB_00939000;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      cocos2d::Value::Value(aVStack_58);
      uVar4 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_98);
      uVar5 = seval_to_ccvalue((Value *)(*plVar8 + 0x10),aVStack_58);
      if ((uVar4 & uVar5 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0x24b,"js_renderer_EffectBase_define");
        __android_log_print(6,"jswrapper",
                            "js_renderer_EffectBase_define : Error processing arguments");
        goto LAB_00938fe0;
      }
      cocos2d::renderer::EffectBase::define(this,(basic_string *)&local_98,aVStack_58,-1);
LAB_00938f28:
      bVar2 = true;
    }
    cocos2d::Value::~Value(aVStack_58);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (bVar2) goto LAB_0093902c;
  }
LAB_00939000:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectBase_define",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x25d);
LAB_0093902c:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_d0;
  pVVar9 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

