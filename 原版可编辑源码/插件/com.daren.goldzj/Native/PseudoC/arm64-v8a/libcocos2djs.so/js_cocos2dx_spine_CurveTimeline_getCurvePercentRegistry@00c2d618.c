
/* js_cocos2dx_spine_CurveTimeline_getCurvePercentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_CurveTimeline_getCurvePercentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  CurveTimeline *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  float fVar11;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [28];
  float local_7c;
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar10);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_b0);
  this = (CurveTimeline *)se::State::nativeThisObject(aSStack_70);
  if (this == (CurveTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0xf77,"js_cocos2dx_spine_CurveTimeline_getCurvePercent");
    puVar7 = &DAT_018fdacb;
LAB_00c2d7f4:
    __android_log_print(6,"jswrapper",puVar7);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    uVar9 = plVar4[1] - *plVar4;
    if (uVar9 == 0x20) {
      local_78 = 0;
      local_7c = 0.0;
      uVar9 = seval_to_size((Value *)*plVar4,&local_78);
      uVar5 = seval_to_float((Value *)(*plVar4 + 0x10),&local_7c);
      if (((uVar9 & 1) == 0) || ((uVar5 & 1) == 0)) {
        uVar8 = 0xf80;
      }
      else {
        fVar11 = (float)spine::CurveTimeline::getCurvePercent(this,local_78,local_7c);
        pVVar6 = (Value *)se::State::rval(aSStack_70);
        uVar9 = float_to_seval(fVar11,pVVar6);
        if ((uVar9 & 1) != 0) goto LAB_00c2d82c;
        uVar8 = 0xf83;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar8,"js_cocos2dx_spine_CurveTimeline_getCurvePercent");
      puVar7 = (undefined *)0x18fdb13;
      goto LAB_00c2d7f4;
    }
    __android_log_print(6,"jswrapper",&DAT_018fdb60,uVar9 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_CurveTimeline_getCurvePercent",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0xf89);
LAB_00c2d82c:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar6 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

