
/* js_cocos2dx_dragonbones_UserData_getIntRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_UserData_getIntRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  UserData *this;
  undefined8 *puVar5;
  Value *pVVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar10);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  this = (UserData *)se::State::nativeThisObject(aSStack_60);
  if (this == (UserData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x337,"js_cocos2dx_dragonbones_UserData_getInt");
    pcVar7 = "js_cocos2dx_dragonbones_UserData_getInt : Invalid Native Object";
LAB_00c99d84:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    uVar9 = puVar5[1] - (long)*puVar5;
    if (uVar9 == 0x10) {
      local_64 = 0;
      uVar9 = seval_to_uint32((Value *)*puVar5,&local_64);
      if ((uVar9 & 1) == 0) {
        uVar8 = 0x33e;
      }
      else {
        iVar3 = dragonBones::UserData::getInt(this,local_64);
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        uVar9 = int32_to_seval(iVar3,pVVar6);
        if ((uVar9 & 1) != 0) goto LAB_00c99dbc;
        uVar8 = 0x341;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar8,"js_cocos2dx_dragonbones_UserData_getInt");
      pcVar7 = "js_cocos2dx_dragonbones_UserData_getInt : Error processing arguments";
      goto LAB_00c99d84;
    }
    __android_log_print(6,"jswrapper",&DAT_0192e7be,uVar9 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_UserData_getInt",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x347);
LAB_00c99dbc:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

