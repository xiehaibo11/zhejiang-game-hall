
/* js_cocos2dx_spine_SkeletonAnimation_setGlobalTimeScaleRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonAnimation_setGlobalTimeScaleRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Value *pVVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  float local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar7);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  puVar4 = (undefined8 *)se::State::args(aSStack_60);
  uVar6 = puVar4[1] - (long)*puVar4;
  if (uVar6 == 0x10) {
    local_64 = 0.0;
    uVar6 = seval_to_float((Value *)*puVar4,&local_64);
    if ((uVar6 & 1) != 0) {
      spine::SkeletonAnimation::setGlobalTimeScale(local_64);
      goto LAB_00c7cb30;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3ac8,&DAT_018ef7ef);
    __android_log_print(6,"jswrapper",&DAT_01922207);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 15052): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar6 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_018ef7ef,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3acf);
LAB_00c7cb30:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
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

