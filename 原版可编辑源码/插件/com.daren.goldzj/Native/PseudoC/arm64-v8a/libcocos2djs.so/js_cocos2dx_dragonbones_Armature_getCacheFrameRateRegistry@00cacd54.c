
/* js_cocos2dx_dragonbones_Armature_getCacheFrameRateRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Armature_getCacheFrameRateRegistry(FunctionCallbackInfo *param_1)

{
  uint uVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  undefined *puVar9;
  Isolate *pIVar10;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar10);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  lVar5 = se::State::nativeThisObject(aSStack_60);
  if (lVar5 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xde3,"js_cocos2dx_dragonbones_Armature_getCacheFrameRate");
    puVar9 = &DAT_01935d90;
LAB_00cacebc:
    __android_log_print(6,"jswrapper",puVar9);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0) {
      uVar1 = *(uint *)(*(long *)(lVar5 + 0x20) + 0x18);
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      uVar7 = uint32_to_seval(uVar1,pVVar8);
      if ((uVar7 & 1) != 0) goto LAB_00cacef4;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0xdea,"js_cocos2dx_dragonbones_Armature_getCacheFrameRate");
      puVar9 = &DAT_01935ddb;
      goto LAB_00cacebc;
    }
    __android_log_print(6,"jswrapper",&DAT_01935e2b,(ulong)(plVar6[1] - *plVar6) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Armature_getCacheFrameRate",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0xdf0);
LAB_00cacef4:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_90;
  pVVar8 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_88 = pVVar3;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

