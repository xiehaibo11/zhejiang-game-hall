
/* js_cocos2dx_spine_SkeletonAnimation_setTrackEndListenerRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonAnimation_setTrackEndListenerRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  SkeletonAnimation *this;
  long *plVar5;
  Object *pOVar6;
  TrackEntry *pTVar7;
  ulong uVar8;
  Object *pOVar9;
  Value *pVVar10;
  code *pcVar11;
  Isolate *pIVar12;
  Value *local_188;
  Value *local_180;
  Value *local_178;
  HandleScope aHStack_170 [24];
  State aSStack_158 [40];
  Value aVStack_130 [16];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_170,pIVar12);
  local_188 = operator_new(0xa0);
  local_178 = local_188 + 0xa0;
  local_180 = local_188;
  se::internal::jsToSeArgs(param_1,(vector *)&local_188);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_158,pvVar4,(vector *)&local_188);
  this = (SkeletonAnimation *)se::State::nativeThisObject(aSStack_158);
  if (this == (SkeletonAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x39bf,"js_cocos2dx_spine_SkeletonAnimation_setTrackEndListener");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonAnimation_setTrackEndListener : Invalid Native Object"
                       );
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_158);
    pVVar10 = (Value *)*plVar5;
    if (plVar5[1] - (long)pVVar10 == 0x20) {
      local_b0 = (long *)0x0;
      if (pVVar10[8] == (Value)0x5) {
        pOVar6 = (Object *)se::Value::toObject(pVVar10);
        pTVar7 = (TrackEntry *)se::Object::getPrivateData(pOVar6);
        pVVar10 = (Value *)*plVar5;
        bVar3 = pTVar7 == (TrackEntry *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar10[8];
        pTVar7 = (TrackEntry *)0x0;
      }
      if (pVVar10[0x18] == (Value)0x5) {
        pOVar6 = (Object *)se::Value::toObject(pVVar10 + 0x10);
        uVar8 = se::Object::isFunction(pOVar6);
        if ((uVar8 & 1) == 0) goto LAB_00c7b6dc;
        pOVar6 = (Object *)se::State::thisObject(aSStack_158);
        se::Value::Value(aVStack_100,pOVar6,false);
        se::Value::Value(aVStack_110,(Value *)(*plVar5 + 0x10));
        pOVar6 = (Object *)se::Value::toObject(aVStack_100);
        pOVar9 = (Object *)se::Value::toObject(aVStack_110);
        se::Object::attachObject(pOVar6,pOVar9);
        se::Value::Value(aVStack_130,aVStack_100);
        se::Value::Value(aVStack_120,aVStack_110);
        se::Value::Value(aVStack_f0,aVStack_130);
        se::Value::Value(aVStack_e0,aVStack_120);
        plVar5 = operator_new(0x28);
        *plVar5 = (long)&PTR_FUN_01c8d990;
        se::Value::Value((Value *)(plVar5 + 1),aVStack_f0);
        se::Value::Value((Value *)(plVar5 + 3),aVStack_e0);
        local_80 = plVar5;
        FUN_00c8c388(alStack_a0,alStack_d0);
        if (alStack_a0 == local_80) {
          pcVar11 = *(code **)(*local_80 + 0x20);
LAB_00c7b704:
          (*pcVar11)();
        }
        else if (local_80 != (long *)0x0) {
          pcVar11 = *(code **)(*local_80 + 0x28);
          goto LAB_00c7b704;
        }
        se::Value::~Value(aVStack_e0);
        se::Value::~Value(aVStack_f0);
        se::Value::~Value(aVStack_120);
        se::Value::~Value(aVStack_130);
        se::Value::~Value(aVStack_110);
        se::Value::~Value(aVStack_100);
        if (!bVar3) goto LAB_00c7b6e4;
LAB_00c7b73c:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x39e5,"js_cocos2dx_spine_SkeletonAnimation_setTrackEndListener");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_SkeletonAnimation_setTrackEndListener : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
LAB_00c7b6dc:
        local_b0 = (long *)0x0;
        if (bVar3) goto LAB_00c7b73c;
LAB_00c7b6e4:
        spine::SkeletonAnimation::setTrackEndListener(this,pTVar7,(function *)alStack_d0);
        bVar3 = true;
      }
      if (alStack_d0 == local_b0) {
        pcVar11 = *(code **)(*local_b0 + 0x20);
LAB_00c7b7ac:
        (*pcVar11)();
      }
      else if (local_b0 != (long *)0x0) {
        pcVar11 = *(code **)(*local_b0 + 0x28);
        goto LAB_00c7b7ac;
      }
      if (bVar3) goto LAB_00c7b7e0;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 14825): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - (long)pVVar10) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonAnimation_setTrackEndListener",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x39ec);
LAB_00c7b7e0:
  pVVar10 = (Value *)se::State::rval(aSStack_158);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_158);
  pVVar2 = local_188;
  pVVar10 = local_180;
  if (local_188 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_180 = pVVar2;
    operator_delete(local_188);
  }
  v8::HandleScope::~HandleScope(aHStack_170);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

