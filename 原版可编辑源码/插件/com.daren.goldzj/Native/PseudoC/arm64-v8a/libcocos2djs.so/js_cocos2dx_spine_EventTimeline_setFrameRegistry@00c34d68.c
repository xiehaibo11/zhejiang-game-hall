
/* js_cocos2dx_spine_EventTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_EventTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  byte bVar1;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  byte bVar5;
  void *pvVar6;
  EventTimeline *this;
  long *plVar7;
  Object *this_00;
  Event *pEVar8;
  Value *pVVar9;
  char *pcVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [24];
  ulong local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar12);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar6 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar6,(vector *)&local_98);
  this = (EventTimeline *)se::State::nativeThisObject(aSStack_60);
  if (this == (EventTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x13ab,"js_cocos2dx_spine_EventTimeline_setFrame");
    pcVar10 = "js_cocos2dx_spine_EventTimeline_setFrame : Invalid Native Object";
LAB_00c34f20:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
    uVar11 = plVar7[1] - *plVar7;
    if (uVar11 == 0x20) {
      local_68 = 0;
      bVar5 = seval_to_size((Value *)*plVar7,&local_68);
      bVar1 = *(byte *)(*plVar7 + 0x18);
      if (bVar1 == 5) {
        this_00 = (Object *)se::Value::toObject((Value *)(*plVar7 + 0x10));
        pEVar8 = (Event *)se::Object::getPrivateData(this_00);
        if (pEVar8 != (Event *)0x0) {
          bVar4 = true;
          goto LAB_00c34ecc;
        }
      }
      else {
        bVar4 = bVar1 < 2;
        pEVar8 = (Event *)0x0;
LAB_00c34ecc:
        if ((bVar5 & bVar4) == 1) {
          spine::EventTimeline::setFrame(this,local_68,pEVar8);
          goto LAB_00c34f58;
        }
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x13b4,"js_cocos2dx_spine_EventTimeline_setFrame");
      pcVar10 = "js_cocos2dx_spine_EventTimeline_setFrame : Error processing arguments";
      goto LAB_00c34f20;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 5048): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar11 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_EventTimeline_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x13bb);
LAB_00c34f58:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_98;
  pVVar9 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_90 = pVVar3;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

