
/* js_cocos2dx_spine_IkConstraintTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_IkConstraintTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  IkConstraintTimeline *this;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  Value *pVVar13;
  char *pcVar14;
  ulong uVar15;
  Isolate *pIVar16;
  Value *local_d8;
  Value *local_d0;
  Value *local_c8;
  HandleScope aHStack_c0 [24];
  int local_a8;
  bool local_a4 [4];
  bool local_a0 [4];
  float local_9c;
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar16);
  local_d8 = operator_new(0xa0);
  local_c8 = local_d8 + 0xa0;
  local_d0 = local_d8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar5,(vector *)&local_d8);
  this = (IkConstraintTimeline *)se::State::nativeThisObject(aSStack_90);
  if (this == (IkConstraintTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x16c9,"js_cocos2dx_spine_IkConstraintTimeline_setFrame");
    pcVar14 = "js_cocos2dx_spine_IkConstraintTimeline_setFrame : Invalid Native Object";
LAB_00c3aae0:
    __android_log_print(6,"jswrapper",pcVar14);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_90);
    uVar15 = plVar6[1] - *plVar6;
    if (uVar15 == 0x70) {
      local_98 = 0;
      local_9c = 0.0;
      local_a8 = 0;
      uVar15 = seval_to_int32((Value *)*plVar6,&local_a8);
      iVar3 = local_a8;
      uVar7 = seval_to_float((Value *)(*plVar6 + 0x10),(float *)((long)&local_98 + 4));
      uVar8 = seval_to_float((Value *)(*plVar6 + 0x20),(float *)&local_98);
      uVar9 = seval_to_float((Value *)(*plVar6 + 0x30),&local_9c);
      local_a8 = 0;
      uVar10 = seval_to_int32((Value *)(*plVar6 + 0x40),&local_a8);
      iVar4 = local_a8;
      uVar11 = seval_to_boolean((Value *)(*plVar6 + 0x50),local_a0);
      uVar12 = seval_to_boolean((Value *)(*plVar6 + 0x60),local_a4);
      if (((((uVar15 & 1) != 0) && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)) &&
         ((((uVar9 & 1) != 0 && ((uVar10 & 1) != 0)) && (((uVar11 & 1) != 0 && ((uVar12 & 1) != 0)))
          ))) {
        spine::IkConstraintTimeline::setFrame
                  (this,iVar3,local_98._4_4_,(float)local_98,local_9c,iVar4,local_a0[0],local_a4[0])
        ;
        goto LAB_00c3ab18;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x16dc,"js_cocos2dx_spine_IkConstraintTimeline_setFrame");
      pcVar14 = "js_cocos2dx_spine_IkConstraintTimeline_setFrame : Error processing arguments";
      goto LAB_00c3aae0;
    }
    __android_log_print(6,"jswrapper",&DAT_0190433d,uVar15 >> 4,7);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_IkConstraintTimeline_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x16e3);
LAB_00c3ab18:
  pVVar13 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d8;
  pVVar13 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar13 != pVVar2) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_d0 = pVVar2;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

