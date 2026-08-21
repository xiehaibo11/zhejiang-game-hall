
/* js_cocos2dx_spine_SkeletonRenderer_initWithSkeletonRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonRenderer_initWithSkeletonRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  SkeletonRenderer *this;
  long *plVar5;
  Object *pOVar6;
  Skeleton *pSVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  Value *pVVar11;
  char *pcVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [28];
  bool local_8c [4];
  bool local_88 [4];
  bool local_84 [4];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar14);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_c0);
  this = (SkeletonRenderer *)se::State::nativeThisObject(aSStack_80);
  if (this == (SkeletonRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x340c,"js_cocos2dx_spine_SkeletonRenderer_initWithSkeleton");
    pcVar12 = "js_cocos2dx_spine_SkeletonRenderer_initWithSkeleton : Invalid Native Object";
LAB_00c73204:
    __android_log_print(6,"jswrapper",pcVar12);
LAB_00c73210:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_spine_SkeletonRenderer_initWithSkeleton",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x343b);
    goto LAB_00c7323c;
  }
  plVar5 = (long *)se::State::args(aSStack_80);
  pVVar11 = (Value *)*plVar5;
  switch(plVar5[1] - (long)pVVar11 >> 4) {
  case 1:
    if (pVVar11[8] == (Value)0x5) {
      pOVar6 = (Object *)se::Value::toObject(pVVar11);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar6);
      if (pSVar7 == (Skeleton *)0x0) {
LAB_00c731cc:
        uVar13 = 0x3413;
        goto LAB_00c731f4;
      }
    }
    else {
      if (1 < (byte)pVVar11[8]) goto LAB_00c731cc;
      pSVar7 = (Skeleton *)0x0;
    }
    local_84[0] = false;
    break;
  case 2:
    if (pVVar11[8] == (Value)0x5) {
      pOVar6 = (Object *)se::Value::toObject(pVVar11);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar6);
      pVVar11 = (Value *)*plVar5;
      bVar3 = pSVar7 == (Skeleton *)0x0;
    }
    else {
      bVar3 = 1 < (byte)pVVar11[8];
      pSVar7 = (Skeleton *)0x0;
    }
    uVar8 = seval_to_boolean(pVVar11 + 0x10,local_84);
    if ((bVar3) || ((uVar8 & 1) == 0)) {
      uVar13 = 0x341c;
      goto LAB_00c731f4;
    }
    break;
  case 3:
    if (pVVar11[8] == (Value)0x5) {
      pOVar6 = (Object *)se::Value::toObject(pVVar11);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar6);
      pVVar11 = (Value *)*plVar5;
      bVar3 = pSVar7 == (Skeleton *)0x0;
    }
    else {
      bVar3 = 1 < (byte)pVVar11[8];
      pSVar7 = (Skeleton *)0x0;
    }
    uVar8 = seval_to_boolean(pVVar11 + 0x10,local_84);
    uVar9 = seval_to_boolean((Value *)(*plVar5 + 0x20),local_88);
    if (((bVar3) || ((uVar8 & 1) == 0)) || ((uVar9 & 1) == 0)) {
      uVar13 = 0x3427;
      goto LAB_00c731f4;
    }
    goto LAB_00c73194;
  case 4:
    if (pVVar11[8] == (Value)0x5) {
      pOVar6 = (Object *)se::Value::toObject(pVVar11);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar6);
      pVVar11 = (Value *)*plVar5;
      bVar3 = pSVar7 == (Skeleton *)0x0;
    }
    else {
      bVar3 = 1 < (byte)pVVar11[8];
      pSVar7 = (Skeleton *)0x0;
    }
    uVar8 = seval_to_boolean(pVVar11 + 0x10,local_84);
    uVar9 = seval_to_boolean((Value *)(*plVar5 + 0x20),local_88);
    uVar10 = seval_to_boolean((Value *)(*plVar5 + 0x30),local_8c);
    if ((((!bVar3) && ((uVar8 & 1) != 0)) && ((uVar9 & 1) != 0)) && ((uVar10 & 1) != 0)) {
      spine::SkeletonRenderer::initWithSkeleton(this,pSVar7,local_84[0],local_88[0],local_8c[0]);
      goto LAB_00c7323c;
    }
    uVar13 = 0x3434;
LAB_00c731f4:
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,uVar13,"js_cocos2dx_spine_SkeletonRenderer_initWithSkeleton");
    pcVar12 = "js_cocos2dx_spine_SkeletonRenderer_initWithSkeleton : Error processing arguments";
    goto LAB_00c73204;
  default:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 13368): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - (long)pVVar11) >> 4,4);
    goto LAB_00c73210;
  }
  local_88[0] = false;
LAB_00c73194:
  spine::SkeletonRenderer::initWithSkeleton(this,pSVar7,local_84[0],local_88[0],false);
LAB_00c7323c:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar11 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

