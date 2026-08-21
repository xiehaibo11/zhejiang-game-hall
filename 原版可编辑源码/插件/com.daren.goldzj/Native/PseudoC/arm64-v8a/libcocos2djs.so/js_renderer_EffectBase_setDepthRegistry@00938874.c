
/* js_renderer_EffectBase_setDepthRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectBase_setDepthRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  EffectBase *pEVar9;
  long *plVar10;
  Value *pVVar11;
  ulong uVar12;
  Isolate *pIVar13;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [28];
  int local_8c;
  bool local_88 [4];
  bool local_84 [4];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar13);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_c0);
  pEVar9 = (EffectBase *)se::State::nativeThisObject(aSStack_80);
  if (pEVar9 == (EffectBase *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x20a,"js_renderer_EffectBase_setDepth");
    __android_log_print(6,"jswrapper","js_renderer_EffectBase_setDepth : Invalid Native Object");
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_80);
    pVVar11 = (Value *)*plVar10;
    switch(plVar10[1] - (long)pVVar11 >> 4) {
    case 0:
      cocos2d::renderer::EffectBase::setDepth(pEVar9,0,0,0x201,0xffffffff);
      goto LAB_00938c64;
    case 1:
      uVar12 = seval_to_boolean(pVVar11,(bool *)&local_8c);
      if ((uVar12 & 1) != 0) {
        cocos2d::renderer::EffectBase::setDepth(pEVar9,local_8c._0_1_,0,0x201,0xffffffff);
        goto LAB_00938c64;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x215,"js_renderer_EffectBase_setDepth");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setDepth : Error processing arguments");
      break;
    case 2:
      uVar4 = seval_to_boolean(pVVar11,(bool *)&local_8c);
      uVar5 = seval_to_boolean((Value *)(*plVar10 + 0x10),local_84);
      if ((uVar4 & uVar5 & 1) != 0) {
        cocos2d::renderer::EffectBase::setDepth(pEVar9,local_8c._0_1_,local_84[0],0x201,0xffffffff);
        goto LAB_00938c64;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x21e,"js_renderer_EffectBase_setDepth");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setDepth : Error processing arguments");
      break;
    case 3:
      uVar4 = seval_to_boolean(pVVar11,local_84);
      uVar5 = seval_to_boolean((Value *)(*plVar10 + 0x10),local_88);
      local_8c = 0;
      uVar6 = seval_to_int32((Value *)(*plVar10 + 0x20),&local_8c);
      if ((uVar4 & uVar5 & uVar6 & 1) != 0) {
        cocos2d::renderer::EffectBase::setDepth(pEVar9,local_84[0],local_88[0],local_8c,0xffffffff);
        goto LAB_00938c64;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x229,"js_renderer_EffectBase_setDepth");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setDepth : Error processing arguments");
      break;
    case 4:
      uVar4 = seval_to_boolean(pVVar11,local_84);
      uVar5 = seval_to_boolean((Value *)(*plVar10 + 0x10),local_88);
      local_8c = 0;
      uVar6 = seval_to_int32((Value *)(*plVar10 + 0x20),&local_8c);
      iVar3 = local_8c;
      local_8c = 0;
      uVar7 = seval_to_int32((Value *)(*plVar10 + 0x30),&local_8c);
      if ((uVar4 & uVar5 & uVar6 & uVar7 & 1) != 0) {
        cocos2d::renderer::EffectBase::setDepth(pEVar9,local_84[0],local_88[0],iVar3,local_8c);
        goto LAB_00938c64;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x236,"js_renderer_EffectBase_setDepth");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setDepth : Error processing arguments");
      break;
    default:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 570): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar10[1] - (long)pVVar11) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectBase_setDepth",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x23d);
LAB_00938c64:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar11 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
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

