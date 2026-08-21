
/* js_cocos2dx_dragonbones_AnimationState_fadeOutRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_AnimationState_fadeOutRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  AnimationState *this;
  long *plVar4;
  Value *pVVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  bool local_78 [4];
  float local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_a8);
  this = (AnimationState *)se::State::nativeThisObject(aSStack_70);
  if (this == (AnimationState *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1025,"js_cocos2dx_dragonbones_AnimationState_fadeOut");
    pcVar8 = "js_cocos2dx_dragonbones_AnimationState_fadeOut : Invalid Native Object";
LAB_00cb0e6c:
    __android_log_print(6,"jswrapper",pcVar8);
LAB_00cb0e78:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_dragonbones_AnimationState_fadeOut",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x103c);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    pVVar5 = (Value *)*plVar4;
    lVar10 = plVar4[1] - (long)pVVar5 >> 4;
    if (lVar10 == 2) {
      local_74 = 0.0;
      uVar6 = seval_to_float(pVVar5,&local_74);
      uVar7 = seval_to_boolean((Value *)(*plVar4 + 0x10),local_78);
      if (((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) {
        uVar9 = 0x1035;
LAB_00cb0e5c:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar9,"js_cocos2dx_dragonbones_AnimationState_fadeOut");
        pcVar8 = "js_cocos2dx_dragonbones_AnimationState_fadeOut : Error processing arguments";
        goto LAB_00cb0e6c;
      }
    }
    else {
      if (lVar10 != 1) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 4153): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar4[1] - (long)pVVar5) >> 4,2);
        goto LAB_00cb0e78;
      }
      local_74 = 0.0;
      uVar6 = seval_to_float(pVVar5,&local_74);
      if ((uVar6 & 1) == 0) {
        uVar9 = 0x102c;
        goto LAB_00cb0e5c;
      }
      local_78[0] = true;
    }
    dragonBones::AnimationState::fadeOut(this,local_74,local_78[0]);
  }
  pVVar5 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar5 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
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

