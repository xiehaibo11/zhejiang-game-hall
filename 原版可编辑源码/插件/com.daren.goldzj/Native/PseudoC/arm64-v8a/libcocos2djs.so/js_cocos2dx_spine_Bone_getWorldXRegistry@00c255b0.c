
/* js_cocos2dx_spine_Bone_getWorldXRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Bone_getWorldXRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Bone *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  char *pcVar7;
  Isolate *pIVar8;
  float fVar9;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (Bone *)se::State::nativeThisObject(aSStack_60);
  if (this == (Bone *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0xafb,"js_cocos2dx_spine_Bone_getWorldX");
    pcVar7 = "js_cocos2dx_spine_Bone_getWorldX : Invalid Native Object";
LAB_00c2571c:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    if (plVar4[1] - *plVar4 == 0) {
      fVar9 = (float)spine::Bone::getWorldX(this);
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      uVar5 = float_to_seval(fVar9,pVVar6);
      if ((uVar5 & 1) != 0) goto LAB_00c25754;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0xb02,"js_cocos2dx_spine_Bone_getWorldX");
      pcVar7 = "js_cocos2dx_spine_Bone_getWorldX : Error processing arguments";
      goto LAB_00c2571c;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 2821): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar4[1] - *plVar4) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Bone_getWorldX",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0xb08);
LAB_00c25754:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

