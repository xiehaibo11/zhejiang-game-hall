
/* js_cocos2dx_spine_RegionAttachment_getScaleYRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_RegionAttachment_getScaleYRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  RegionAttachment *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  char *pcVar7;
  Isolate *pIVar8;
  float fVar9;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (RegionAttachment *)se::State::nativeThisObject(aSStack_60);
  if (this == (RegionAttachment *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x1fba,"js_cocos2dx_spine_RegionAttachment_getScaleY");
    pcVar7 = "js_cocos2dx_spine_RegionAttachment_getScaleY : Invalid Native Object";
LAB_00c4bd60:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    if (plVar4[1] - *plVar4 == 0) {
      fVar9 = (float)spine::RegionAttachment::getScaleY(this);
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      uVar5 = float_to_seval(fVar9,pVVar6);
      if ((uVar5 & 1) != 0) goto LAB_00c4bd98;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x1fc1,"js_cocos2dx_spine_RegionAttachment_getScaleY");
      pcVar7 = "js_cocos2dx_spine_RegionAttachment_getScaleY : Error processing arguments";
      goto LAB_00c4bd60;
    }
    __android_log_print(6,"jswrapper",&DAT_0190ccba,(ulong)(plVar4[1] - *plVar4) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_RegionAttachment_getScaleY",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x1fc7);
LAB_00c4bd98:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

