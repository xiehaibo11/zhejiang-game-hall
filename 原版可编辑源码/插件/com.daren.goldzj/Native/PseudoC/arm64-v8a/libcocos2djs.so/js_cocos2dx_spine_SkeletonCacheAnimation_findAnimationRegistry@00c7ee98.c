
/* js_cocos2dx_spine_SkeletonCacheAnimation_findAnimationRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonCacheAnimation_findAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  SkeletonCacheAnimation *this;
  long *plVar5;
  ulong uVar6;
  type *ptVar7;
  Value *pVVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  this = (SkeletonCacheAnimation *)se::State::nativeThisObject(aSStack_60);
  if (this == (SkeletonCacheAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3c26,"js_cocos2dx_spine_SkeletonCacheAnimation_findAnimation");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonCacheAnimation_findAnimation : Invalid Native Object"
                       );
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0x10) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
      if ((uVar6 & 1) == 0) {
        uVar9 = 0x3c2d;
LAB_00c7f060:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,uVar9,"js_cocos2dx_spine_SkeletonCacheAnimation_findAnimation");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_SkeletonCacheAnimation_findAnimation : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        ptVar7 = (type *)spine::SkeletonCacheAnimation::findAnimation
                                   (this,(basic_string *)&local_78);
        pVVar8 = (Value *)se::State::rval(aSStack_60);
        bVar3 = native_ptr_to_rooted_seval<spine::Animation>(ptVar7,pVVar8,(bool *)0x0);
        if (!bVar3) {
          uVar9 = 0x3c30;
          goto LAB_00c7f060;
        }
        bVar3 = true;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar3) goto LAB_00c7f0c0;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 15411): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonCacheAnimation_findAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3c36);
LAB_00c7f0c0:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a8;
  pVVar8 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

