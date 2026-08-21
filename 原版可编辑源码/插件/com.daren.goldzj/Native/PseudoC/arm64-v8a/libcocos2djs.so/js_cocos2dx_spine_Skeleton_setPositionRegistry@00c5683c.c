
/* js_cocos2dx_spine_Skeleton_setPositionRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skeleton_setPositionRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Skeleton *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  char *pcVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_a8);
  this = (Skeleton *)se::State::nativeThisObject(aSStack_70);
  if (this == (Skeleton *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x246d,"js_cocos2dx_spine_Skeleton_setPosition");
    pcVar7 = "js_cocos2dx_spine_Skeleton_setPosition : Invalid Native Object";
LAB_00c569cc:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    uVar8 = plVar4[1] - *plVar4;
    if (uVar8 == 0x20) {
      local_78 = 0;
      uVar8 = seval_to_float((Value *)*plVar4,(float *)((long)&local_78 + 4));
      uVar5 = seval_to_float((Value *)(*plVar4 + 0x10),(float *)&local_78);
      if (((uVar8 & 1) != 0) && ((uVar5 & 1) != 0)) {
        spine::Skeleton::setPosition(this,local_78._4_4_,(float)local_78);
        goto LAB_00c56a04;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x2476,"js_cocos2dx_spine_Skeleton_setPosition");
      pcVar7 = "js_cocos2dx_spine_Skeleton_setPosition : Error processing arguments";
      goto LAB_00c569cc;
    }
    __android_log_print(6,"jswrapper",&DAT_019110bb,uVar8 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skeleton_setPosition",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x247d);
LAB_00c56a04:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar6 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

