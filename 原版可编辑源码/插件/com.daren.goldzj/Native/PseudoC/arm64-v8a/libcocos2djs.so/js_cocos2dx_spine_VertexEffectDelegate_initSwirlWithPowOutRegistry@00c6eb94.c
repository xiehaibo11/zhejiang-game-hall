
/* js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOutRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOutRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  VertexEffectDelegate *this;
  long *plVar5;
  ulong uVar6;
  type *ptVar7;
  Value *pVVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  int local_78;
  float local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar12);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  this = (VertexEffectDelegate *)se::State::nativeThisObject(aSStack_70);
  if (this == (VertexEffectDelegate *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3185,"js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOut");
    pcVar9 = "js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOut : Invalid Native Object";
LAB_00c6ed74:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    uVar11 = plVar5[1] - *plVar5;
    if (uVar11 == 0x20) {
      local_74 = 0.0;
      uVar11 = seval_to_float((Value *)*plVar5,&local_74);
      local_78 = 0;
      uVar6 = seval_to_int32((Value *)(*plVar5 + 0x10),&local_78);
      if (((uVar11 & 1) == 0) || ((uVar6 & 1) == 0)) {
        uVar10 = 0x318e;
      }
      else {
        ptVar7 = (type *)spine::VertexEffectDelegate::initSwirlWithPowOut(this,local_74,local_78);
        pVVar8 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_rooted_seval<spine::SwirlVertexEffect>(ptVar7,pVVar8,(bool *)0x0);
        if (bVar3) goto LAB_00c6edac;
        uVar10 = 0x3191;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar10,"js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOut");
      pcVar9 = 
      "js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOut : Error processing arguments";
      goto LAB_00c6ed74;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 12692): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar11 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_VertexEffectDelegate_initSwirlWithPowOut",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3197);
LAB_00c6edac:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
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
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

