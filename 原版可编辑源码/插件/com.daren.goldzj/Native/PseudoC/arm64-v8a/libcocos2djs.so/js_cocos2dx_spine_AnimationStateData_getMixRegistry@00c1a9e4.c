
/* js_cocos2dx_spine_AnimationStateData_getMixRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_AnimationStateData_getMixRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  AnimationStateData *this;
  undefined8 *puVar5;
  Object *pOVar6;
  Animation *pAVar7;
  Animation *pAVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  Value *pVVar12;
  Isolate *pIVar13;
  float fVar14;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar13);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a0);
  this = (AnimationStateData *)se::State::nativeThisObject(aSStack_70);
  if (this == (AnimationStateData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x516,"js_cocos2dx_spine_AnimationStateData_getMix");
    pcVar10 = "js_cocos2dx_spine_AnimationStateData_getMix : Invalid Native Object";
LAB_00c1ac04:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_70);
    pVVar12 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar12 == 0x20) {
      if (pVVar12[8] == (Value)0x5) {
        pOVar6 = (Object *)se::Value::toObject(pVVar12);
        pAVar7 = (Animation *)se::Object::getPrivateData(pOVar6);
        pVVar12 = (Value *)*puVar5;
        bVar3 = pAVar7 == (Animation *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar12[8];
        pAVar7 = (Animation *)0x0;
      }
      if (pVVar12[0x18] == (Value)0x5) {
        pOVar6 = (Object *)se::Value::toObject(pVVar12 + 0x10);
        pAVar8 = (Animation *)se::Object::getPrivateData(pOVar6);
        if ((pAVar8 != (Animation *)0x0) && (!bVar3)) goto LAB_00c1aba8;
LAB_00c1ab68:
        uVar11 = 0x51f;
      }
      else {
        pAVar8 = (Animation *)0x0;
        if (bVar3 || 1 < (byte)pVVar12[0x18]) goto LAB_00c1ab68;
LAB_00c1aba8:
        fVar14 = (float)spine::AnimationStateData::getMix(this,pAVar7,pAVar8);
        pVVar12 = (Value *)se::State::rval(aSStack_70);
        uVar9 = float_to_seval(fVar14,pVVar12);
        if ((uVar9 & 1) != 0) goto LAB_00c1ac3c;
        uVar11 = 0x522;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,uVar11,"js_cocos2dx_spine_AnimationStateData_getMix");
      pcVar10 = "js_cocos2dx_spine_AnimationStateData_getMix : Error processing arguments";
      goto LAB_00c1ac04;
    }
    __android_log_print(6,"jswrapper",&DAT_018f4c0f,(ulong)(puVar5[1] - (long)pVVar12) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AnimationStateData_getMix",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x528);
LAB_00c1ac3c:
  pVVar12 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar12 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
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

