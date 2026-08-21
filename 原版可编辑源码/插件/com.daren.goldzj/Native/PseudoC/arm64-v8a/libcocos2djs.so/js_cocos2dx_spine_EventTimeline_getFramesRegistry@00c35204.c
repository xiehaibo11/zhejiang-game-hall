
/* js_cocos2dx_spine_EventTimeline_getFramesRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_EventTimeline_getFramesRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [24];
  undefined **local_80;
  undefined8 uStack_78;
  long local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar8);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_b0);
  lVar5 = se::State::nativeThisObject(aSStack_60);
  if (lVar5 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x13d2,"js_cocos2dx_spine_EventTimeline_getFrames");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_EventTimeline_getFrames : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0) {
      spine::EventTimeline::getFrames();
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      bVar3 = spine_Vector_T_to_seval<float>((Vector *)&local_80,pVVar7);
      if (!bVar3) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x13d9,"js_cocos2dx_spine_EventTimeline_getFrames");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_EventTimeline_getFrames : Error processing arguments"
                           );
      }
      local_80 = &PTR__Vector_01c8d048;
      uStack_78 = 0;
      if (local_68 != 0) {
        plVar6 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,local_68,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce)
        ;
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_80);
      if (bVar3) goto LAB_00c35404;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_01901612,(ulong)(plVar6[1] - *plVar6) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_EventTimeline_getFrames",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x13df);
LAB_00c35404:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_b0;
  pVVar7 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

