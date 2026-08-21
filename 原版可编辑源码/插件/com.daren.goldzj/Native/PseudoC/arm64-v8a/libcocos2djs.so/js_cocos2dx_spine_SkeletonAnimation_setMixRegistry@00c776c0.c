
/* js_cocos2dx_spine_SkeletonAnimation_setMixRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_SkeletonAnimation_setMixRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  SkeletonAnimation *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_d8;
  Value *local_d0;
  Value *local_c8;
  HandleScope aHStack_c0 [28];
  float local_a4;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar10);
  local_d8 = operator_new(0xa0);
  local_c8 = local_d8 + 0xa0;
  local_d0 = local_d8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_d8);
  this = (SkeletonAnimation *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3704,"js_cocos2dx_spine_SkeletonAnimation_setMix");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonAnimation_setMix : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    if (plVar5[1] - *plVar5 == 0x30) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_a4 = 0.0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar7 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
      uVar8 = seval_to_float((Value *)(*plVar5 + 0x20),&local_a4);
      if ((((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) || ((uVar8 & 1) == 0)) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x370f,"js_cocos2dx_spine_SkeletonAnimation_setMix");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_SkeletonAnimation_setMix : Error processing arguments"
                           );
        bVar2 = false;
      }
      else {
        spine::SkeletonAnimation::setMix
                  (this,(basic_string *)&local_88,(basic_string *)&local_a0,local_a4);
        bVar2 = true;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar2) goto LAB_00c778f0;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 14099): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonAnimation_setMix",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3716);
LAB_00c778f0:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_d8;
  pVVar9 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_d0 = pVVar3;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

