
/* js_cocos2dx_dragonbones_ArmatureData_setParentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_ArmatureData_setParentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this;
  long lVar7;
  char *pcVar8;
  Isolate *pIVar9;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar9);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x442,"js_cocos2dx_dragonbones_ArmatureData_setParent");
    pcVar8 = "js_cocos2dx_dragonbones_ArmatureData_setParent : Invalid Native Object";
LAB_00c9bd10:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      if (pVVar6[8] == (Value)0x5) {
        this = (Object *)se::Value::toObject(pVVar6);
        lVar7 = se::Object::getPrivateData(this);
        if (lVar7 != 0) {
LAB_00c9bcd0:
          *(long *)(lVar4 + 0x158) = lVar7;
          goto LAB_00c9bd48;
        }
      }
      else if ((byte)pVVar6[8] < 2) {
        lVar7 = 0;
        goto LAB_00c9bcd0;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x449,"js_cocos2dx_dragonbones_ArmatureData_setParent");
      pcVar8 = "js_cocos2dx_dragonbones_ArmatureData_setParent : Error processing arguments";
      goto LAB_00c9bd10;
    }
    __android_log_print(6,"jswrapper",&DAT_0192f74d,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_ArmatureData_setParent",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x450);
LAB_00c9bd48:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

