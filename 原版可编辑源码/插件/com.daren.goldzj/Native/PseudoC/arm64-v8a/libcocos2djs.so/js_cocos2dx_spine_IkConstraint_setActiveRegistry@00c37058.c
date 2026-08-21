
/* js_cocos2dx_spine_IkConstraint_setActiveRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_IkConstraint_setActiveRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  char *pcVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  bool local_64 [4];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar9);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  plVar4 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar4 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x14d7,"js_cocos2dx_spine_IkConstraint_setActive");
    pcVar7 = "js_cocos2dx_spine_IkConstraint_setActive : Invalid Native Object";
LAB_00c371d0:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    uVar8 = puVar5[1] - (long)*puVar5;
    if (uVar8 == 0x10) {
      uVar8 = seval_to_boolean((Value *)*puVar5,local_64);
      if ((uVar8 & 1) != 0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,local_64[0]);
        goto LAB_00c37208;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x14de,"js_cocos2dx_spine_IkConstraint_setActive");
      pcVar7 = "js_cocos2dx_spine_IkConstraint_setActive : Error processing arguments";
      goto LAB_00c371d0;
    }
    __android_log_print(6,"jswrapper",&DAT_01902604,uVar8 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_IkConstraint_setActive",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x14e5);
LAB_00c37208:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

