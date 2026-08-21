
/* js_cocos2dx_spine_AnimationState_getCurrentRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_AnimationState_getCurrentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  AnimationState *this;
  undefined8 *puVar5;
  type *ptVar6;
  Value *pVVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [24];
  ulong local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar11);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  this = (AnimationState *)se::State::nativeThisObject(aSStack_60);
  if (this == (AnimationState *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3f6,"js_cocos2dx_spine_AnimationState_getCurrent");
    pcVar8 = "js_cocos2dx_spine_AnimationState_getCurrent : Invalid Native Object";
LAB_00c18c58:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    uVar10 = puVar5[1] - (long)*puVar5;
    if (uVar10 == 0x10) {
      local_68 = 0;
      uVar10 = seval_to_size((Value *)*puVar5,&local_68);
      if ((uVar10 & 1) == 0) {
        uVar9 = 0x3fd;
      }
      else {
        ptVar6 = (type *)spine::AnimationState::getCurrent(this,local_68);
        pVVar7 = (Value *)se::State::rval(aSStack_60);
        bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar6,pVVar7,(bool *)0x0);
        if (bVar3) goto LAB_00c18c90;
        uVar9 = 0x400;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar9,"js_cocos2dx_spine_AnimationState_getCurrent");
      pcVar8 = "js_cocos2dx_spine_AnimationState_getCurrent : Error processing arguments";
      goto LAB_00c18c58;
    }
    __android_log_print(6,"jswrapper",&DAT_018f3db6,uVar10 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AnimationState_getCurrent",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x406);
LAB_00c18c90:
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

