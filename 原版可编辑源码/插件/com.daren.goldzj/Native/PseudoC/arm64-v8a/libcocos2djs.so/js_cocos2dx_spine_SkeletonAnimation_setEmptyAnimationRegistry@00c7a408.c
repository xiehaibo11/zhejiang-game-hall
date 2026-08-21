
/* js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimationRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  SkeletonAnimation *this;
  long *plVar6;
  ulong uVar7;
  type *ptVar8;
  Value *pVVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  Isolate *pIVar13;
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
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar13);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  this = (SkeletonAnimation *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3917,"js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation");
    pcVar10 = "js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation : Invalid Native Object";
LAB_00c7a5e8:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    uVar12 = plVar6[1] - *plVar6;
    if (uVar12 == 0x20) {
      local_78 = 0;
      uVar12 = seval_to_int32((Value *)*plVar6,(int *)&local_78);
      iVar3 = (int)local_78;
      uVar7 = seval_to_float((Value *)(*plVar6 + 0x10),(float *)((long)&local_78 + 4));
      if (((uVar12 & 1) == 0) || ((uVar7 & 1) == 0)) {
        uVar11 = 0x3920;
      }
      else {
        ptVar8 = (type *)spine::SkeletonAnimation::setEmptyAnimation(this,iVar3,local_78._4_4_);
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        bVar4 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar8,pVVar9,(bool *)0x0);
        if (bVar4) goto LAB_00c7a620;
        uVar11 = 0x3923;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar11,"js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation");
      pcVar10 = "js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation : Error processing arguments"
      ;
      goto LAB_00c7a5e8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 14630): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar12 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonAnimation_setEmptyAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3929);
LAB_00c7a620:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
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

