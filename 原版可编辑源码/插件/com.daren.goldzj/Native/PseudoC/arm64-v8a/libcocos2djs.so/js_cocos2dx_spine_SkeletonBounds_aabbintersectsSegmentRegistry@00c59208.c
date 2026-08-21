
/* js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegmentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  SkeletonBounds *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Value *pVVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  Isolate *pIVar13;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar13);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_c0);
  this = (SkeletonBounds *)se::State::nativeThisObject(aSStack_80);
  if (this == (SkeletonBounds *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x25cf,"js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegment");
    pcVar10 = "js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegment : Invalid Native Object";
LAB_00c59414:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_80);
    uVar12 = plVar5[1] - *plVar5;
    if (uVar12 == 0x40) {
      local_90 = 0;
      local_88 = 0;
      uVar12 = seval_to_float((Value *)*plVar5,(float *)((long)&local_88 + 4));
      uVar6 = seval_to_float((Value *)(*plVar5 + 0x10),(float *)&local_88);
      uVar7 = seval_to_float((Value *)(*plVar5 + 0x20),(float *)((long)&local_90 + 4));
      uVar8 = seval_to_float((Value *)(*plVar5 + 0x30),(float *)&local_90);
      if (((((uVar12 & 1) == 0) || ((uVar6 & 1) == 0)) || ((uVar7 & 1) == 0)) || ((uVar8 & 1) == 0))
      {
        uVar11 = 0x25dc;
      }
      else {
        bVar3 = spine::SkeletonBounds::aabbintersectsSegment
                          (this,local_88._4_4_,(float)local_88,local_90._4_4_,(float)local_90);
        pVVar9 = (Value *)se::State::rval(aSStack_80);
        uVar12 = boolean_to_seval((bool)(bVar3 & 1),pVVar9);
        if ((uVar12 & 1) != 0) goto LAB_00c5944c;
        uVar11 = 0x25df;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar11,"js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegment");
      pcVar10 = 
      "js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegment : Error processing arguments";
      goto LAB_00c59414;
    }
    __android_log_print(6,"jswrapper",&DAT_0191224f,uVar12 >> 4,4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonBounds_aabbintersectsSegment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x25e5);
LAB_00c5944c:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
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

