
/* js_cocos2dx_spine_SkeletonRenderer_setSlotsRangeRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonRenderer_setSlotsRangeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  SkeletonRenderer *this;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  char *pcVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [28];
  int local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  this = (SkeletonRenderer *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x34f9,"js_cocos2dx_spine_SkeletonRenderer_setSlotsRange");
    pcVar8 = "js_cocos2dx_spine_SkeletonRenderer_setSlotsRange : Invalid Native Object";
LAB_00c74a94:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    uVar9 = plVar5[1] - *plVar5;
    if (uVar9 == 0x20) {
      local_74 = 0;
      uVar9 = seval_to_int32((Value *)*plVar5,&local_74);
      iVar3 = local_74;
      local_74 = 0;
      uVar6 = seval_to_int32((Value *)(*plVar5 + 0x10),&local_74);
      if (((uVar9 & 1) != 0) && ((uVar6 & 1) != 0)) {
        spine::SkeletonRenderer::setSlotsRange(this,iVar3,local_74);
        goto LAB_00c74acc;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x3502,"js_cocos2dx_spine_SkeletonRenderer_setSlotsRange");
      pcVar8 = "js_cocos2dx_spine_SkeletonRenderer_setSlotsRange : Error processing arguments";
      goto LAB_00c74a94;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 13574): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar9 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonRenderer_setSlotsRange",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3509);
LAB_00c74acc:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

