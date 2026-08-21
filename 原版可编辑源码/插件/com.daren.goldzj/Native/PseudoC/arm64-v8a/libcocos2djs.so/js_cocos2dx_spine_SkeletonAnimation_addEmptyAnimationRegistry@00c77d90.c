
/* js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimationRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  void *pvVar6;
  SkeletonAnimation *this;
  long *plVar7;
  Value *pVVar8;
  ulong uVar9;
  ulong uVar10;
  type *ptVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  Isolate *pIVar16;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [28];
  int local_8c;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar16);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar6,(vector *)&local_c0);
  this = (SkeletonAnimation *)se::State::nativeThisObject(aSStack_80);
  if (this == (SkeletonAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x374d,"js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation");
    pcVar13 = "js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation : Invalid Native Object";
LAB_00c78054:
    __android_log_print(6,"jswrapper",pcVar13);
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_80);
    pVVar8 = (Value *)*plVar7;
    lVar15 = plVar7[1] - (long)pVVar8 >> 4;
    if (lVar15 == 3) {
      local_88 = 0;
      local_8c = 0;
      uVar9 = seval_to_int32(pVVar8,&local_8c);
      iVar3 = local_8c;
      uVar10 = seval_to_float((Value *)(*plVar7 + 0x10),(float *)((long)&local_88 + 4));
      uVar12 = seval_to_float((Value *)(*plVar7 + 0x20),(float *)&local_88);
      if ((((uVar9 & 1) == 0) || ((uVar10 & 1) == 0)) || ((uVar12 & 1) == 0)) {
        uVar14 = 0x3763;
      }
      else {
        ptVar11 = (type *)spine::SkeletonAnimation::addEmptyAnimation
                                    (this,iVar3,local_88._4_4_,(float)local_88);
        pVVar8 = (Value *)se::State::rval(aSStack_80);
        bVar5 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar11,pVVar8,(bool *)0x0);
        if (bVar5) goto LAB_00c7808c;
        uVar14 = 0x3766;
      }
LAB_00c78044:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar14,"js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation");
      pcVar13 = "js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation : Error processing arguments"
      ;
      goto LAB_00c78054;
    }
    if (lVar15 == 2) {
      local_88 = 0;
      uVar9 = seval_to_int32(pVVar8,(int *)&local_88);
      fVar4 = (float)local_88;
      uVar10 = seval_to_float((Value *)(*plVar7 + 0x10),(float *)((long)&local_88 + 4));
      if (((uVar9 & 1) == 0) || ((uVar10 & 1) == 0)) {
        uVar14 = 0x3756;
      }
      else {
        ptVar11 = (type *)spine::SkeletonAnimation::addEmptyAnimation
                                    (this,(int)fVar4,local_88._4_4_,0.0);
        pVVar8 = (Value *)se::State::rval(aSStack_80);
        bVar5 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar11,pVVar8,(bool *)0x0);
        if (bVar5) goto LAB_00c7808c;
        uVar14 = 0x3759;
      }
      goto LAB_00c78044;
    }
    __android_log_print(6,"jswrapper",&DAT_019207c4,(ulong)(plVar7[1] - (long)pVVar8) >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonAnimation_addEmptyAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x376c);
LAB_00c7808c:
  pVVar8 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
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

