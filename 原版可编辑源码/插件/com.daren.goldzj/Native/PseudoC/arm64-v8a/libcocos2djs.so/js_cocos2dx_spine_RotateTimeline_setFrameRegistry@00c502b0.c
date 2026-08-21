
/* js_cocos2dx_spine_RotateTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_RotateTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  RotateTimeline *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  Value *pVVar8;
  char *pcVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [28];
  int local_8c;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_c0);
  this = (RotateTimeline *)se::State::nativeThisObject(aSStack_80);
  if (this == (RotateTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2195,"js_cocos2dx_spine_RotateTimeline_setFrame");
    pcVar9 = "js_cocos2dx_spine_RotateTimeline_setFrame : Invalid Native Object";
LAB_00c50468:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_80);
    uVar10 = plVar5[1] - *plVar5;
    if (uVar10 == 0x30) {
      local_88 = 0;
      local_8c = 0;
      uVar10 = seval_to_int32((Value *)*plVar5,&local_8c);
      iVar3 = local_8c;
      uVar6 = seval_to_float((Value *)(*plVar5 + 0x10),(float *)((long)&local_88 + 4));
      uVar7 = seval_to_float((Value *)(*plVar5 + 0x20),(float *)&local_88);
      if ((((uVar10 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
        spine::RotateTimeline::setFrame(this,iVar3,local_88._4_4_,(float)local_88);
        goto LAB_00c504a0;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x21a0,"js_cocos2dx_spine_RotateTimeline_setFrame");
      pcVar9 = "js_cocos2dx_spine_RotateTimeline_setFrame : Error processing arguments";
      goto LAB_00c50468;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 8612): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar10 >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_RotateTimeline_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x21a7);
LAB_00c504a0:
  pVVar8 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
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

