
/* js_cocos2dx_spine_SkeletonCacheAnimation_addAnimationRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonCacheAnimation_addAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  SkeletonCacheAnimation *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Value *pVVar9;
  undefined8 uVar10;
  long lVar11;
  Isolate *pIVar12;
  float fVar13;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [24];
  float local_90;
  bool local_8c [4];
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar12);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_c0);
  this = (SkeletonCacheAnimation *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonCacheAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3da1,"js_cocos2dx_spine_SkeletonCacheAnimation_addAnimation");
    __android_log_print(6,"jswrapper",&DAT_01924032);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    lVar11 = plVar5[1] - *plVar5 >> 4;
    if (lVar11 == 3) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_90 = 0.0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar7 = seval_to_boolean((Value *)(*plVar5 + 0x10),local_8c);
      uVar8 = seval_to_float((Value *)(*plVar5 + 0x20),&local_90);
      if ((((uVar6 & 1) != 0) && ((uVar7 & 1) != 0)) && (fVar13 = local_90, (uVar8 & 1) != 0))
      goto LAB_00c8185c;
      uVar10 = 0x3db5;
LAB_00c818ec:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar10,"js_cocos2dx_spine_SkeletonCacheAnimation_addAnimation");
      __android_log_print(6,"jswrapper",&DAT_01924080);
      bVar2 = false;
    }
    else {
      if (lVar11 != 2) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 15801): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar5[1] - *plVar5) >> 4,3);
        goto LAB_00c81920;
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar7 = seval_to_boolean((Value *)(*plVar5 + 0x10),(bool *)&local_90);
      if (((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) {
        uVar10 = 0x3daa;
        goto LAB_00c818ec;
      }
      fVar13 = 0.0;
      local_8c[0] = (bool)local_90._0_1_;
LAB_00c8185c:
      spine::SkeletonCacheAnimation::addAnimation(this,(basic_string *)&local_88,local_8c[0],fVar13)
      ;
      bVar2 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar2) goto LAB_00c8194c;
  }
LAB_00c81920:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonCacheAnimation_addAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3dbc);
LAB_00c8194c:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

