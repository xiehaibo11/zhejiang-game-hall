
/* js_cocos2dx_spine_SkeletonAnimation_setAnimationRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonAnimation_setAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  SkeletonAnimation *this;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  type *ptVar10;
  Value *pVVar11;
  undefined8 uVar12;
  Isolate *pIVar13;
  Value *local_d0;
  Value *local_c8;
  Value *local_c0;
  HandleScope aHStack_b8 [28];
  int local_9c;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar13);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_d0);
  this = (SkeletonAnimation *)se::State::nativeThisObject(aSStack_80);
  if (this == (SkeletonAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x36a3,"js_cocos2dx_spine_SkeletonAnimation_setAnimation");
    __android_log_print(6,"jswrapper",&DAT_01920083);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_80);
    if (plVar6[1] - *plVar6 == 0x30) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_9c = 0;
      uVar7 = seval_to_int32((Value *)*plVar6,&local_9c);
      iVar3 = local_9c;
      uVar8 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_98);
      uVar9 = seval_to_boolean((Value *)(*plVar6 + 0x20),(bool *)&local_9c);
      if ((((uVar7 & 1) == 0) || ((uVar8 & 1) == 0)) || ((uVar9 & 1) == 0)) {
        uVar12 = 0x36ae;
LAB_00c76f20:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,uVar12,"js_cocos2dx_spine_SkeletonAnimation_setAnimation");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_SkeletonAnimation_setAnimation : Error processing arguments"
                           );
        bVar4 = false;
      }
      else {
        ptVar10 = (type *)spine::SkeletonAnimation::setAnimation
                                    (this,iVar3,(basic_string *)&local_98,local_9c._0_1_);
        pVVar11 = (Value *)se::State::rval(aSStack_80);
        bVar4 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar10,pVVar11,(bool *)0x0);
        if (!bVar4) {
          uVar12 = 0x36b1;
          goto LAB_00c76f20;
        }
        bVar4 = true;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (bVar4) goto LAB_00c76f80;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_0192011a,(ulong)(plVar6[1] - *plVar6) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonAnimation_setAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x36b7);
LAB_00c76f80:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_d0;
  pVVar11 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

