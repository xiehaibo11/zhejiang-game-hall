
/* js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpaceRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpaceRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Vec2 *pVVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  Vec2 aVStack_70 [8];
  undefined8 local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar10);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_a0);
  pVVar4 = (Vec2 *)se::State::nativeThisObject(aSStack_60);
  if (pVVar4 == (Vec2 *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1e4d,"js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpace");
    pcVar7 = "js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpace : Invalid Native Object";
LAB_00cca80c:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    uVar9 = puVar5[1] - (long)*puVar5;
    if (uVar9 == 0x10) {
      local_68 = 0;
      uVar9 = seval_to_Vec2((Value *)*puVar5,(Vec2 *)&local_68);
      if ((uVar9 & 1) == 0) {
        uVar8 = 0x1e54;
      }
      else {
        dragonBones::CCArmatureDisplay::convertToRootSpace(pVVar4);
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        uVar9 = Vec2_to_seval(aVStack_70,pVVar6);
        if ((uVar9 & 1) != 0) goto LAB_00cca844;
        uVar8 = 0x1e57;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar8,"js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpace");
      pcVar7 = 
      "js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpace : Error processing arguments";
      goto LAB_00cca80c;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7770): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar9 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_CCArmatureDisplay_convertToRootSpace",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1e5d);
LAB_00cca844:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a0;
  pVVar6 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

