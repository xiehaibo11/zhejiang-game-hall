
/* js_cocos2dx_dragonbones_AnimationData_addConstraintTimelineRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_AnimationData_addConstraintTimelineRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  AnimationData *this;
  undefined8 *puVar5;
  Object *pOVar6;
  ConstraintData *pCVar7;
  TimelineData *pTVar8;
  char *pcVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar11);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a0);
  this = (AnimationData *)se::State::nativeThisObject(aSStack_70);
  if (this == (AnimationData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xbfb,"js_cocos2dx_dragonbones_AnimationData_addConstraintTimeline");
    pcVar9 = "js_cocos2dx_dragonbones_AnimationData_addConstraintTimeline : Invalid Native Object";
LAB_00ca94b8:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_70);
    pVVar10 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar10 == 0x20) {
      if (pVVar10[8] == (Value)0x5) {
        pOVar6 = (Object *)se::Value::toObject(pVVar10);
        pCVar7 = (ConstraintData *)se::Object::getPrivateData(pOVar6);
        pVVar10 = (Value *)*puVar5;
        bVar3 = pCVar7 == (ConstraintData *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar10[8];
        pCVar7 = (ConstraintData *)0x0;
      }
      if (pVVar10[0x18] == (Value)0x5) {
        pOVar6 = (Object *)se::Value::toObject(pVVar10 + 0x10);
        pTVar8 = (TimelineData *)se::Object::getPrivateData(pOVar6);
        if ((pTVar8 != (TimelineData *)0x0) && (!bVar3)) {
LAB_00ca9588:
          dragonBones::AnimationData::addConstraintTimeline(this,pCVar7,pTVar8);
          goto LAB_00ca94f0;
        }
      }
      else {
        pTVar8 = (TimelineData *)0x0;
        if (!bVar3 && (byte)pVVar10[0x18] < 2) goto LAB_00ca9588;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0xc04,"js_cocos2dx_dragonbones_AnimationData_addConstraintTimeline");
      pcVar9 = 
      "js_cocos2dx_dragonbones_AnimationData_addConstraintTimeline : Error processing arguments";
      goto LAB_00ca94b8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 3080): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar5[1] - (long)pVVar10) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_AnimationData_addConstraintTimeline",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0xc0b);
LAB_00ca94f0:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar10 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

