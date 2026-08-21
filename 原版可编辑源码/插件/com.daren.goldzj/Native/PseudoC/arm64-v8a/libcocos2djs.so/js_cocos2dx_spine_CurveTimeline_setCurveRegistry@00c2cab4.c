
/* js_cocos2dx_spine_CurveTimeline_setCurveRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_CurveTimeline_setCurveRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  CurveTimeline *this;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Value *pVVar9;
  char *pcVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_c8;
  Value *local_c0;
  Value *local_b8;
  HandleScope aHStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar12);
  local_c8 = operator_new(0xa0);
  local_b8 = local_c8 + 0xa0;
  local_c0 = local_c8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar3,(vector *)&local_c8);
  this = (CurveTimeline *)se::State::nativeThisObject(aSStack_80);
  if (this == (CurveTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0xf12,"js_cocos2dx_spine_CurveTimeline_setCurve");
    pcVar10 = "js_cocos2dx_spine_CurveTimeline_setCurve : Invalid Native Object";
LAB_00c2cc9c:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_80);
    uVar11 = plVar4[1] - *plVar4;
    if (uVar11 == 0x50) {
      local_90 = 0;
      local_88 = 0;
      local_98 = 0;
      uVar11 = seval_to_size((Value *)*plVar4,&local_88);
      uVar5 = seval_to_float((Value *)(*plVar4 + 0x10),(float *)((long)&local_90 + 4));
      uVar6 = seval_to_float((Value *)(*plVar4 + 0x20),(float *)&local_90);
      uVar7 = seval_to_float((Value *)(*plVar4 + 0x30),(float *)((long)&local_98 + 4));
      uVar8 = seval_to_float((Value *)(*plVar4 + 0x40),(float *)&local_98);
      if (((((uVar11 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) &&
         (((uVar7 & 1) != 0 && ((uVar8 & 1) != 0)))) {
        spine::CurveTimeline::setCurve
                  (this,local_88,local_90._4_4_,(float)local_90,local_98._4_4_,(float)local_98);
        goto LAB_00c2ccd4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0xf21,"js_cocos2dx_spine_CurveTimeline_setCurve");
      pcVar10 = "js_cocos2dx_spine_CurveTimeline_setCurve : Error processing arguments";
      goto LAB_00c2cc9c;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 3877): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar11 >> 4,5);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_CurveTimeline_setCurve",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0xf28);
LAB_00c2ccd4:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c8;
  pVVar9 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

