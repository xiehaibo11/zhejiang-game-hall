
/* js_cocos2dx_spine_TrackEntry_getMixBlendRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_TrackEntry_getMixBlendRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  void *pvVar4;
  TrackEntry *this;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  undefined *puVar8;
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
  this = (TrackEntry *)se::State::nativeThisObject(aSStack_60);
  if (this == (TrackEntry *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x118,"js_cocos2dx_spine_TrackEntry_getMixBlend");
    puVar8 = &DAT_018f11a0;
LAB_00c138ac:
    __android_log_print(6,"jswrapper",puVar8);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      uVar3 = spine::TrackEntry::getMixBlend(this);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar6 = uint32_to_seval(uVar3,pVVar7);
      if ((uVar6 & 1) != 0) goto LAB_00c138e4;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x11f,"js_cocos2dx_spine_TrackEntry_getMixBlend");
      puVar8 = &DAT_018f11e1;
      goto LAB_00c138ac;
    }
    __android_log_print(6,"jswrapper",&DAT_018f1227,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_TrackEntry_getMixBlend",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x125);
LAB_00c138e4:
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

