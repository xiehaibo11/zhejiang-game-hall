
/* js_cocos2dx_spine_AnimationState_addEmptyAnimationRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_AnimationState_addEmptyAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  AnimationState *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  type *ptVar8;
  Value *pVVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  Isolate *pIVar13;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [24];
  undefined8 local_80;
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar13);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_b0);
  this = (AnimationState *)se::State::nativeThisObject(aSStack_70);
  if (this == (AnimationState *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x4c8,"js_cocos2dx_spine_AnimationState_addEmptyAnimation");
    pcVar10 = "js_cocos2dx_spine_AnimationState_addEmptyAnimation : Invalid Native Object";
LAB_00c1a410:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    uVar12 = plVar5[1] - *plVar5;
    if (uVar12 == 0x30) {
      local_80 = 0;
      local_78 = 0;
      uVar12 = seval_to_size((Value *)*plVar5,&local_78);
      uVar6 = seval_to_float((Value *)(*plVar5 + 0x10),(float *)((long)&local_80 + 4));
      uVar7 = seval_to_float((Value *)(*plVar5 + 0x20),(float *)&local_80);
      if ((((uVar12 & 1) == 0) || ((uVar6 & 1) == 0)) || ((uVar7 & 1) == 0)) {
        uVar11 = 0x4d3;
      }
      else {
        ptVar8 = (type *)spine::AnimationState::addEmptyAnimation
                                   (this,local_78,local_80._4_4_,(float)local_80);
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar8,pVVar9,(bool *)0x0);
        if (bVar3) goto LAB_00c1a448;
        uVar11 = 0x4d6;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar11,"js_cocos2dx_spine_AnimationState_addEmptyAnimation");
      pcVar10 = "js_cocos2dx_spine_AnimationState_addEmptyAnimation : Error processing arguments";
      goto LAB_00c1a410;
    }
    __android_log_print(6,"jswrapper",&DAT_018f4985,uVar12 >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AnimationState_addEmptyAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x4dc);
LAB_00c1a448:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar9 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

