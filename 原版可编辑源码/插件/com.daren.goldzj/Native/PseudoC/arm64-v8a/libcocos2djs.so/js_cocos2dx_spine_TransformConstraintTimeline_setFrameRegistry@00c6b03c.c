
/* js_cocos2dx_spine_TransformConstraintTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_TransformConstraintTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  TransformConstraintTimeline *this;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Value *pVVar10;
  char *pcVar11;
  ulong uVar12;
  Isolate *pIVar13;
  Value *local_e0;
  Value *local_d8;
  Value *local_d0;
  HandleScope aHStack_c8 [28];
  float local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar13);
  local_e0 = operator_new(0xa0);
  local_d0 = local_e0 + 0xa0;
  local_d8 = local_e0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar3,(vector *)&local_e0);
  this = (TransformConstraintTimeline *)se::State::nativeThisObject(aSStack_90);
  if (this == (TransformConstraintTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2f56,&DAT_018ee48f);
    pcVar11 = "js_cocos2dx_spine_TransformConstraintTimeline_setFrame : Invalid Native Object";
LAB_00c6b248:
    __android_log_print(6,"jswrapper",pcVar11);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_90);
    uVar12 = plVar4[1] - *plVar4;
    if (uVar12 == 0x60) {
      local_a0 = 0;
      local_98 = 0;
      local_a8 = 0;
      local_ac = 0.0;
      uVar12 = seval_to_size((Value *)*plVar4,&local_98);
      uVar5 = seval_to_float((Value *)(*plVar4 + 0x10),(float *)((long)&local_a0 + 4));
      uVar6 = seval_to_float((Value *)(*plVar4 + 0x20),(float *)&local_a0);
      uVar7 = seval_to_float((Value *)(*plVar4 + 0x30),(float *)((long)&local_a8 + 4));
      uVar8 = seval_to_float((Value *)(*plVar4 + 0x40),(float *)&local_a8);
      uVar9 = seval_to_float((Value *)(*plVar4 + 0x50),&local_ac);
      if (((((uVar12 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) &&
         ((((uVar7 & 1) != 0 && ((uVar8 & 1) != 0)) && ((uVar9 & 1) != 0)))) {
        spine::TransformConstraintTimeline::setFrame
                  (this,local_98,local_a0._4_4_,(float)local_a0,local_a8._4_4_,(float)local_a8,
                   local_ac);
        goto LAB_00c6b280;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x2f67,&DAT_018ee48f);
      pcVar11 = 
      "js_cocos2dx_spine_TransformConstraintTimeline_setFrame : Error processing arguments";
      goto LAB_00c6b248;
    }
    __android_log_print(6,"jswrapper",&DAT_0191ab41,uVar12 >> 4,6);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_018ee48f,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2f6e);
LAB_00c6b280:
  pVVar10 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_e0;
  pVVar10 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_d8 = pVVar2;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

