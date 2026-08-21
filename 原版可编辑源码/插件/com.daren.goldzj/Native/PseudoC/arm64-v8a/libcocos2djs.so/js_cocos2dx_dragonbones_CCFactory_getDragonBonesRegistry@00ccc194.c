
/* js_cocos2dx_dragonbones_CCFactory_getDragonBonesRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCFactory_getDragonBonesRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  type *ptVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  Value *pVVar8;
  char *pcVar9;
  Isolate *pIVar10;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar10);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_90);
  lVar6 = se::State::nativeThisObject(aSStack_60);
  if (lVar6 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1f44,"js_cocos2dx_dragonbones_CCFactory_getDragonBones");
    pcVar9 = "js_cocos2dx_dragonbones_CCFactory_getDragonBones : Invalid Native Object";
LAB_00ccc300:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
    ptVar2 = dragonBones::CCFactory::_dragonBonesInstance;
    if (plVar7[1] - *plVar7 == 0) {
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      bVar4 = native_ptr_to_seval<dragonBones::DragonBones>(ptVar2,pVVar8,(bool *)0x0);
      if (bVar4) goto LAB_00ccc338;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x1f4b,"js_cocos2dx_dragonbones_CCFactory_getDragonBones");
      pcVar9 = "js_cocos2dx_dragonbones_CCFactory_getDragonBones : Error processing arguments";
      goto LAB_00ccc300;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 8014): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar7[1] - *plVar7) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_CCFactory_getDragonBones",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1f51);
LAB_00ccc338:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_90;
  pVVar8 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_88 = pVVar3;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

