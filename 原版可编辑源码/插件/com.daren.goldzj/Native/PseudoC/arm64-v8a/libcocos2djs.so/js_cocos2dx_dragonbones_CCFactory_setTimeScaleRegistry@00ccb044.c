
/* js_cocos2dx_dragonbones_CCFactory_setTimeScaleRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCFactory_setTimeScaleRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  float fVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  Value *pVVar7;
  char *pcVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  float local_64;
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
  lVar5 = se::State::nativeThisObject(aSStack_60);
  if (lVar5 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1eb3,"js_cocos2dx_dragonbones_CCFactory_setTimeScale");
    pcVar8 = "js_cocos2dx_dragonbones_CCFactory_setTimeScale : Invalid Native Object";
LAB_00ccb1c0:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    puVar6 = (undefined8 *)se::State::args(aSStack_60);
    uVar9 = puVar6[1] - (long)*puVar6;
    if (uVar9 == 0x10) {
      local_64 = 0.0;
      uVar9 = seval_to_float((Value *)*puVar6,&local_64);
      fVar3 = local_64;
      if ((uVar9 & 1) != 0) {
        lVar5 = dragonBones::DragonBones::getClock(dragonBones::CCFactory::_dragonBonesInstance);
        *(float *)(lVar5 + 0xc) = fVar3;
        goto LAB_00ccb1f8;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x1eba,"js_cocos2dx_dragonbones_CCFactory_setTimeScale");
      pcVar8 = "js_cocos2dx_dragonbones_CCFactory_setTimeScale : Error processing arguments";
      goto LAB_00ccb1c0;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7870): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar9 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_CCFactory_setTimeScale",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1ec1);
LAB_00ccb1f8:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar7 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

