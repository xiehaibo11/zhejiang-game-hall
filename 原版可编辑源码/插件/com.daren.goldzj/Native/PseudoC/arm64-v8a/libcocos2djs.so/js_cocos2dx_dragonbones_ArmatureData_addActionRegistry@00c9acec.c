
/* js_cocos2dx_dragonbones_ArmatureData_addActionRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_ArmatureData_addActionRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  ArmatureData *this;
  undefined8 *puVar5;
  Object *this_00;
  ActionData *pAVar6;
  ulong uVar7;
  char *pcVar8;
  Value *pVVar9;
  Isolate *pIVar10;
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
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  this = (ArmatureData *)se::State::nativeThisObject(aSStack_70);
  if (this == (ArmatureData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x3ca,"js_cocos2dx_dragonbones_ArmatureData_addAction");
    pcVar8 = "js_cocos2dx_dragonbones_ArmatureData_addAction : Invalid Native Object";
LAB_00c9aea0:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_70);
    pVVar9 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar9 == 0x20) {
      if (pVVar9[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar9);
        pAVar6 = (ActionData *)se::Object::getPrivateData(this_00);
        pVVar9 = (Value *)*puVar5;
        bVar3 = pAVar6 == (ActionData *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar9[8];
        pAVar6 = (ActionData *)0x0;
      }
      uVar7 = seval_to_boolean(pVVar9 + 0x10,local_74);
      if ((!bVar3) && ((uVar7 & 1) != 0)) {
        dragonBones::ArmatureData::addAction(this,pAVar6,local_74[0]);
        goto LAB_00c9aed8;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x3d3,"js_cocos2dx_dragonbones_ArmatureData_addAction");
      pcVar8 = "js_cocos2dx_dragonbones_ArmatureData_addAction : Error processing arguments";
      goto LAB_00c9aea0;
    }
    __android_log_print(6,"jswrapper",&DAT_0192ef68,(ulong)(puVar5[1] - (long)pVVar9) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_ArmatureData_addAction",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x3da);
LAB_00c9aed8:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
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

