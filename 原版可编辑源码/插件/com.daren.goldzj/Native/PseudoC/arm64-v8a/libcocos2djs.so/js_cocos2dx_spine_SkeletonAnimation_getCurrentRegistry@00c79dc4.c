
/* js_cocos2dx_spine_SkeletonAnimation_getCurrentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonAnimation_getCurrentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  SkeletonAnimation *this;
  undefined8 *puVar5;
  type *ptVar6;
  Value *pVVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  Isolate *pIVar12;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar12);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  this = (SkeletonAnimation *)se::State::nativeThisObject(aSStack_60);
  if (this == (SkeletonAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x38cb,"js_cocos2dx_spine_SkeletonAnimation_getCurrent");
    pcVar8 = "js_cocos2dx_spine_SkeletonAnimation_getCurrent : Invalid Native Object";
LAB_00c79fe0:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    uVar10 = puVar5[1] - (long)*puVar5;
    lVar11 = (long)uVar10 >> 4;
    if (lVar11 == 1) {
      local_64 = 0;
      uVar10 = seval_to_int32((Value *)*puVar5,&local_64);
      if ((uVar10 & 1) == 0) {
        uVar9 = 0x38d8;
      }
      else {
        ptVar6 = (type *)spine::SkeletonAnimation::getCurrent(this,local_64);
        pVVar7 = (Value *)se::State::rval(aSStack_60);
        bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar6,pVVar7,(bool *)0x0);
        if (bVar3) goto LAB_00c7a018;
        uVar9 = 0x38db;
      }
LAB_00c79fd0:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar9,"js_cocos2dx_spine_SkeletonAnimation_getCurrent");
      pcVar8 = "js_cocos2dx_spine_SkeletonAnimation_getCurrent : Error processing arguments";
      goto LAB_00c79fe0;
    }
    if (lVar11 == 0) {
      ptVar6 = (type *)spine::SkeletonAnimation::getCurrent(this,0);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar6,pVVar7,(bool *)0x0);
      if (bVar3) goto LAB_00c7a018;
      uVar9 = 0x38d2;
      goto LAB_00c79fd0;
    }
    __android_log_print(6,"jswrapper",&DAT_019213f0,uVar10 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonAnimation_getCurrent",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x38e1);
LAB_00c7a018:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar7 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

