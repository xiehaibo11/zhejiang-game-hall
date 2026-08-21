
/* js_cocos2dx_spine_TwoColorTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_TwoColorTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  TwoColorTimeline *this;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  Value *pVVar14;
  char *pcVar15;
  ulong uVar16;
  Isolate *pIVar17;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [28];
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar17 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar17);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar17,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar6,(vector *)&local_e8);
  this = (TwoColorTimeline *)se::State::nativeThisObject(aSStack_90);
  if (this == (TwoColorTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2faf,"js_cocos2dx_spine_TwoColorTimeline_setFrame");
    pcVar15 = "js_cocos2dx_spine_TwoColorTimeline_setFrame : Invalid Native Object";
LAB_00c6bba0:
    __android_log_print(6,"jswrapper",pcVar15);
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_90);
    uVar16 = plVar7[1] - *plVar7;
    if (uVar16 == 0x90) {
      local_a0 = 0;
      local_98 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_b4 = 0;
      uVar4 = seval_to_int32((Value *)*plVar7,&local_b4);
      iVar3 = local_b4;
      uVar5 = seval_to_float((Value *)(*plVar7 + 0x10),(float *)((long)&local_98 + 4));
      uVar16 = seval_to_float((Value *)(*plVar7 + 0x20),(float *)&local_98);
      uVar8 = seval_to_float((Value *)(*plVar7 + 0x30),(float *)((long)&local_a0 + 4));
      uVar9 = seval_to_float((Value *)(*plVar7 + 0x40),(float *)&local_a0);
      uVar10 = seval_to_float((Value *)(*plVar7 + 0x50),(float *)((long)&local_a8 + 4));
      uVar11 = seval_to_float((Value *)(*plVar7 + 0x60),(float *)&local_a8);
      uVar12 = seval_to_float((Value *)(*plVar7 + 0x70),(float *)((long)&local_b0 + 4));
      uVar13 = seval_to_float((Value *)(*plVar7 + 0x80),(float *)&local_b0);
      if (((((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar16 & 1) != 0)) &&
           (((uVar8 & 1) != 0 && ((uVar9 & 1) != 0)))) &&
          (((uVar10 & 1) != 0 && (((uVar11 & 1) != 0 && ((uVar12 & 1) != 0)))))) &&
         ((uVar13 & 1) != 0)) {
        spine::TwoColorTimeline::setFrame
                  (this,iVar3,local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                   local_a8._4_4_,(float)local_a8,local_b0._4_4_,(float)local_b0);
        goto LAB_00c6bbd8;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x2fc6,"js_cocos2dx_spine_TwoColorTimeline_setFrame");
      pcVar15 = "js_cocos2dx_spine_TwoColorTimeline_setFrame : Error processing arguments";
      goto LAB_00c6bba0;
    }
    __android_log_print(6,"jswrapper",&DAT_0191af1f,uVar16 >> 4,9);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_TwoColorTimeline_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2fcd);
LAB_00c6bbd8:
  pVVar14 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar14,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_e8;
  pVVar14 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar14 != pVVar2) {
      se::Value::~Value(pVVar14 + -0x10);
      pVVar14 = pVVar14 + -0x10;
    }
    local_e0 = pVVar2;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

