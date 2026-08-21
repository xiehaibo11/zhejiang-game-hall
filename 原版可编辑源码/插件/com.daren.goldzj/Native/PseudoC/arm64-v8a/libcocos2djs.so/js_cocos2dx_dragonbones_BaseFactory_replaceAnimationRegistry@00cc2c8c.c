
/* js_cocos2dx_dragonbones_BaseFactory_replaceAnimationRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_replaceAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  Object *pOVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  Value *pVVar14;
  long lVar15;
  Isolate *pIVar16;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [28];
  bool local_74 [4];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar16);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_a8);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1a04,"js_cocos2dx_dragonbones_BaseFactory_replaceAnimation");
    pcVar12 = "js_cocos2dx_dragonbones_BaseFactory_replaceAnimation : Invalid Native Object";
LAB_00cc2fe0:
    __android_log_print(6,"jswrapper",pcVar12);
  }
  else {
    puVar8 = (undefined8 *)se::State::args(aSStack_70);
    pVVar14 = (Value *)*puVar8;
    lVar15 = puVar8[1] - (long)pVVar14 >> 4;
    if (lVar15 == 3) {
      if (pVVar14[8] == (Value)0x5) {
        pOVar9 = (Object *)se::Value::toObject(pVVar14);
        lVar15 = se::Object::getPrivateData(pOVar9);
        pVVar14 = (Value *)*puVar8;
        bVar3 = lVar15 == 0;
      }
      else {
        bVar3 = 1 < (byte)pVVar14[8];
        lVar15 = 0;
      }
      if (pVVar14[0x18] == (Value)0x5) {
        pOVar9 = (Object *)se::Value::toObject(pVVar14 + 0x10);
        lVar10 = se::Object::getPrivateData(pOVar9);
        pVVar14 = (Value *)*puVar8;
        bVar4 = lVar10 == 0;
      }
      else {
        bVar4 = 1 < (byte)pVVar14[0x18];
        lVar10 = 0;
      }
      uVar11 = seval_to_boolean(pVVar14 + 0x20,local_74);
      if ((bVar3 || bVar4) || ((uVar11 & 1) == 0)) {
        uVar13 = 0x1a1a;
      }
      else {
        bVar5 = (**(code **)(*plVar7 + 200))(plVar7,lVar15,lVar10,local_74[0]);
        pVVar14 = (Value *)se::State::rval(aSStack_70);
        uVar11 = boolean_to_seval((bool)(bVar5 & 1),pVVar14);
        if ((uVar11 & 1) != 0) goto LAB_00cc3018;
        uVar13 = 0x1a1d;
      }
LAB_00cc2fd0:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar13,"js_cocos2dx_dragonbones_BaseFactory_replaceAnimation");
      pcVar12 = "js_cocos2dx_dragonbones_BaseFactory_replaceAnimation : Error processing arguments";
      goto LAB_00cc2fe0;
    }
    if (lVar15 == 2) {
      if (pVVar14[8] == (Value)0x5) {
        pOVar9 = (Object *)se::Value::toObject(pVVar14);
        lVar15 = se::Object::getPrivateData(pOVar9);
        pVVar14 = (Value *)*puVar8;
        bVar3 = lVar15 == 0;
      }
      else {
        bVar3 = 1 < (byte)pVVar14[8];
        lVar15 = 0;
      }
      if (pVVar14[0x18] == (Value)0x5) {
        pOVar9 = (Object *)se::Value::toObject(pVVar14 + 0x10);
        lVar10 = se::Object::getPrivateData(pOVar9);
        if ((lVar10 != 0) && (!bVar3)) {
LAB_00cc2ebc:
          bVar5 = (**(code **)(*plVar7 + 200))(plVar7,lVar15,lVar10,1);
          pVVar14 = (Value *)se::State::rval(aSStack_70);
          uVar11 = boolean_to_seval((bool)(bVar5 & 1),pVVar14);
          if ((uVar11 & 1) != 0) goto LAB_00cc3018;
          uVar13 = 0x1a10;
          goto LAB_00cc2fd0;
        }
      }
      else {
        lVar10 = 0;
        if (!bVar3 && (byte)pVVar14[0x18] < 2) goto LAB_00cc2ebc;
      }
      uVar13 = 0x1a0d;
      goto LAB_00cc2fd0;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6688): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar8[1] - (long)pVVar14) >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_replaceAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1a23);
LAB_00cc3018:
  pVVar14 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar14,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar14 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar14 != pVVar2) {
      se::Value::~Value(pVVar14 + -0x10);
      pVVar14 = pVVar14 + -0x10;
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

