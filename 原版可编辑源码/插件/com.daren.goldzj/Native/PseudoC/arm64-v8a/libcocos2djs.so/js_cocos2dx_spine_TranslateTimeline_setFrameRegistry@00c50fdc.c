
/* js_cocos2dx_spine_TranslateTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_TranslateTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  TranslateTimeline *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Value *pVVar9;
  undefined *puVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar12);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_c0);
  this = (TranslateTimeline *)se::State::nativeThisObject(aSStack_80);
  if (this == (TranslateTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x220f,"js_cocos2dx_spine_TranslateTimeline_setFrame");
    puVar10 = &DAT_0190ef22;
LAB_00c511ac:
    __android_log_print(6,"jswrapper",puVar10);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_80);
    uVar11 = plVar5[1] - *plVar5;
    if (uVar11 == 0x40) {
      local_90 = 0;
      local_88 = 0;
      uVar11 = seval_to_int32((Value *)*plVar5,(int *)&local_90);
      iVar3 = (int)local_90;
      uVar6 = seval_to_float((Value *)(*plVar5 + 0x10),(float *)((long)&local_88 + 4));
      uVar7 = seval_to_float((Value *)(*plVar5 + 0x20),(float *)&local_88);
      uVar8 = seval_to_float((Value *)(*plVar5 + 0x30),(float *)((long)&local_90 + 4));
      if (((((uVar11 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0))
      {
        spine::TranslateTimeline::setFrame(this,iVar3,local_88._4_4_,(float)local_88,local_90._4_4_)
        ;
        goto LAB_00c511e4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x221c,"js_cocos2dx_spine_TranslateTimeline_setFrame");
      puVar10 = (undefined *)0x190ef67;
      goto LAB_00c511ac;
    }
    __android_log_print(6,"jswrapper",&DAT_0190efb1,uVar11 >> 4,4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_TranslateTimeline_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2223);
LAB_00c511e4:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
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

