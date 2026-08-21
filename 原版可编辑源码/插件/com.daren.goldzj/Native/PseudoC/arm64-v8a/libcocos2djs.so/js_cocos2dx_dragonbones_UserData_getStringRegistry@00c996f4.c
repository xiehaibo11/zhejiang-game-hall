
/* js_cocos2dx_dragonbones_UserData_getStringRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_UserData_getStringRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  Value *pVVar7;
  char *pcVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [24];
  basic_string local_80 [16];
  void *local_70;
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar10);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_b0);
  lVar5 = se::State::nativeThisObject(aSStack_60);
  if (lVar5 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x310,"js_cocos2dx_dragonbones_UserData_getString");
    pcVar8 = "js_cocos2dx_dragonbones_UserData_getString : Invalid Native Object";
LAB_00c99890:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    puVar6 = (undefined8 *)se::State::args(aSStack_60);
    uVar9 = puVar6[1] - (long)*puVar6;
    if (uVar9 == 0x10) {
      local_64 = 0;
      uVar9 = seval_to_uint32((Value *)*puVar6,&local_64);
      if ((uVar9 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x317,"js_cocos2dx_dragonbones_UserData_getString");
        pcVar8 = "js_cocos2dx_dragonbones_UserData_getString : Error processing arguments";
        goto LAB_00c99890;
      }
      dragonBones::UserData::getString((uint)lVar5);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar9 = std_string_to_seval(local_80,pVVar7);
      bVar1 = (uVar9 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x31a,"js_cocos2dx_dragonbones_UserData_getString");
        __android_log_print(6,"jswrapper",&DAT_0192e4f4);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      if (!bVar1) goto LAB_00c998c8;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_0192e53c,uVar9 >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_UserData_getString",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,800);
LAB_00c998c8:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_b0;
  pVVar7 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

