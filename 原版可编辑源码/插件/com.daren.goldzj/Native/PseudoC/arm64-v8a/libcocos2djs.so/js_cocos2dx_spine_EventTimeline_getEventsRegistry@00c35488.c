
/* js_cocos2dx_spine_EventTimeline_getEventsRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_EventTimeline_getEventsRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  EventTimeline *this;
  long *plVar5;
  Vector *pVVar6;
  Value *pVVar7;
  char *pcVar8;
  Isolate *pIVar9;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar9);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  this = (EventTimeline *)se::State::nativeThisObject(aSStack_60);
  if (this == (EventTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x13e4,"js_cocos2dx_spine_EventTimeline_getEvents");
    pcVar8 = "js_cocos2dx_spine_EventTimeline_getEvents : Invalid Native Object";
LAB_00c355f4:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      pVVar6 = (Vector *)spine::EventTimeline::getEvents(this);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      bVar3 = spine_Vector_T_ptr_to_seval<spine::Event>(pVVar6,pVVar7);
      if (bVar3) goto LAB_00c3562c;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x13eb,"js_cocos2dx_spine_EventTimeline_getEvents");
      pcVar8 = "js_cocos2dx_spine_EventTimeline_getEvents : Error processing arguments";
      goto LAB_00c355f4;
    }
    __android_log_print(6,"jswrapper",&DAT_01901751,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_EventTimeline_getEvents",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x13f1);
LAB_00c3562c:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar7 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

