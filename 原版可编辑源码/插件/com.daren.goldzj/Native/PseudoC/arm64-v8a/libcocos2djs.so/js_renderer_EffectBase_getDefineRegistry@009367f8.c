
/* js_renderer_EffectBase_getDefineRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectBase_getDefineRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  EffectBase *this;
  long *plVar7;
  ulong uVar8;
  type *ptVar9;
  Value *pVVar10;
  long lVar11;
  Isolate *pIVar12;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [28];
  int local_8c;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar12);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_c0);
  this = (EffectBase *)se::State::nativeThisObject(aSStack_70);
  if (this == (EffectBase *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x99,"js_renderer_EffectBase_getDefine");
    __android_log_print(6,"jswrapper","js_renderer_EffectBase_getDefine : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    lVar11 = plVar7[1] - *plVar7 >> 4;
    if (lVar11 == 2) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar4 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      local_8c = 0;
      uVar5 = seval_to_int32((Value *)(*plVar7 + 0x10),&local_8c);
      if ((uVar4 & uVar5 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0xab,"js_renderer_EffectBase_getDefine");
        __android_log_print(6,"jswrapper",
                            "js_renderer_EffectBase_getDefine : Error processing arguments");
LAB_00936b04:
        bVar3 = false;
      }
      else {
        ptVar9 = (type *)cocos2d::renderer::EffectBase::getDefine
                                   (this,(basic_string *)&local_88,local_8c);
        pVVar10 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_seval<cocos2d::Value>(ptVar9,pVVar10,(bool *)0x0);
        if (!bVar3) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                              ,0xae,"js_renderer_EffectBase_getDefine");
          __android_log_print(6,"jswrapper",
                              "js_renderer_EffectBase_getDefine : Error processing arguments");
          goto LAB_00936b04;
        }
LAB_009369fc:
        bVar3 = true;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar3) goto LAB_00936b48;
    }
    else {
      if (lVar11 == 1) {
        local_80 = 0;
        local_78 = (void *)0x0;
        local_88 = 0;
        uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
        if ((uVar8 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                              ,0xa0,"js_renderer_EffectBase_getDefine");
          __android_log_print(6,"jswrapper",
                              "js_renderer_EffectBase_getDefine : Error processing arguments");
        }
        else {
          ptVar9 = (type *)cocos2d::renderer::EffectBase::getDefine
                                     (this,(basic_string *)&local_88,-1);
          pVVar10 = (Value *)se::State::rval(aSStack_70);
          bVar3 = native_ptr_to_seval<cocos2d::Value>(ptVar9,pVVar10,(bool *)0x0);
          if (bVar3) goto LAB_009369fc;
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                              ,0xa3,"js_renderer_EffectBase_getDefine");
          __android_log_print(6,"jswrapper",
                              "js_renderer_EffectBase_getDefine : Error processing arguments");
        }
        goto LAB_00936b04;
      }
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 177): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectBase_getDefine",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xb4);
LAB_00936b48:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c0;
  pVVar10 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

