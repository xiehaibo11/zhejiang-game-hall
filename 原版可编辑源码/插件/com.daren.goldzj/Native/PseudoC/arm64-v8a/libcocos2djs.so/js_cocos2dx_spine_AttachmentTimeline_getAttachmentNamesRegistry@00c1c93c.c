
/* js_cocos2dx_spine_AttachmentTimeline_getAttachmentNamesRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_AttachmentTimeline_getAttachmentNamesRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  AttachmentTimeline *this;
  long *plVar4;
  Vector *pVVar5;
  ulong uVar6;
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
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (AttachmentTimeline *)se::State::nativeThisObject(aSStack_60);
  if (this == (AttachmentTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x63d,"js_cocos2dx_spine_AttachmentTimeline_getAttachmentNames");
    pcVar8 = "js_cocos2dx_spine_AttachmentTimeline_getAttachmentNames : Invalid Native Object";
LAB_00c1caa8:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    if (plVar4[1] - *plVar4 == 0) {
      pVVar5 = (Vector *)spine::AttachmentTimeline::getAttachmentNames(this);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar6 = spine_Vector_String_to_seval(pVVar5,pVVar7);
      if ((uVar6 & 1) != 0) goto LAB_00c1cae0;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x644,"js_cocos2dx_spine_AttachmentTimeline_getAttachmentNames");
      pcVar8 = 
      "js_cocos2dx_spine_AttachmentTimeline_getAttachmentNames : Error processing arguments";
      goto LAB_00c1caa8;
    }
    __android_log_print(6,"jswrapper",&DAT_018f58d1,(ulong)(plVar4[1] - *plVar4) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AttachmentTimeline_getAttachmentNames",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x64a);
LAB_00c1cae0:
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

