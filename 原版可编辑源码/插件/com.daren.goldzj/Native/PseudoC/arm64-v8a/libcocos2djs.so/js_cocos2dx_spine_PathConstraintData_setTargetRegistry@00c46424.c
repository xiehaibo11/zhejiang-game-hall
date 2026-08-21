
/* js_cocos2dx_spine_PathConstraintData_setTargetRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_PathConstraintData_setTargetRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  PathConstraintData *this;
  undefined8 *puVar4;
  Value *pVVar5;
  Object *this_00;
  SlotData *pSVar6;
  char *pcVar7;
  Isolate *pIVar8;
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
  this = (PathConstraintData *)se::State::nativeThisObject(aSStack_60);
  if (this == (PathConstraintData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x1ca1,"js_cocos2dx_spine_PathConstraintData_setTarget");
    pcVar7 = "js_cocos2dx_spine_PathConstraintData_setTarget : Invalid Native Object";
LAB_00c465b0:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    pVVar5 = (Value *)*puVar4;
    if (puVar4[1] - (long)pVVar5 == 0x10) {
      if (pVVar5[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar5);
        pSVar6 = (SlotData *)se::Object::getPrivateData(this_00);
        if (pSVar6 == (SlotData *)0x0) {
LAB_00c46578:
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,0x1ca8,"js_cocos2dx_spine_PathConstraintData_setTarget");
          pcVar7 = "js_cocos2dx_spine_PathConstraintData_setTarget : Error processing arguments";
          goto LAB_00c465b0;
        }
      }
      else {
        if (1 < (byte)pVVar5[8]) goto LAB_00c46578;
        pSVar6 = (SlotData *)0x0;
      }
      spine::PathConstraintData::setTarget(this,pSVar6);
      goto LAB_00c465e8;
    }
    __android_log_print(6,"jswrapper",&DAT_01909f3d,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_PathConstraintData_setTarget",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x1caf);
LAB_00c465e8:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar5 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
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

