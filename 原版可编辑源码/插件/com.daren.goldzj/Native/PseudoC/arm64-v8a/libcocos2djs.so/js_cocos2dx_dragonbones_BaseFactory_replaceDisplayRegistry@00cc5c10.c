
/* js_cocos2dx_dragonbones_BaseFactory_replaceDisplayRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_replaceDisplayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  Value *pVVar13;
  Isolate *pIVar14;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [28];
  int local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar14);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1b93,"js_cocos2dx_dragonbones_BaseFactory_replaceDisplay");
    pcVar12 = "js_cocos2dx_dragonbones_BaseFactory_replaceDisplay : Invalid Native Object";
LAB_00cc5e14:
    __android_log_print(6,"jswrapper",pcVar12);
  }
  else {
    puVar7 = (undefined8 *)se::State::args(aSStack_70);
    pVVar13 = (Value *)*puVar7;
    if (puVar7[1] - (long)pVVar13 == 0x30) {
      if (pVVar13[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar13);
        lVar9 = se::Object::getPrivateData(pOVar8);
        pVVar13 = (Value *)*puVar7;
        bVar3 = lVar9 == 0;
      }
      else {
        bVar3 = 1 < (byte)pVVar13[8];
        lVar9 = 0;
      }
      if (pVVar13[0x18] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar13 + 0x10);
        lVar10 = se::Object::getPrivateData(pOVar8);
        pVVar13 = (Value *)*puVar7;
        bVar4 = lVar10 == 0;
      }
      else {
        bVar4 = 1 < (byte)pVVar13[0x18];
        lVar10 = 0;
      }
      local_74 = 0;
      uVar11 = seval_to_int32(pVVar13 + 0x20,&local_74);
      if ((!bVar3 && !bVar4) && ((uVar11 & 1) != 0)) {
        (**(code **)(*plVar6 + 0xa8))(plVar6,lVar9,lVar10,local_74);
        goto LAB_00cc5e4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x1b9e,"js_cocos2dx_dragonbones_BaseFactory_replaceDisplay");
      pcVar12 = "js_cocos2dx_dragonbones_BaseFactory_replaceDisplay : Error processing arguments";
      goto LAB_00cc5e14;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7074): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar7[1] - (long)pVVar13) >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_replaceDisplay",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1ba5);
LAB_00cc5e4c:
  pVVar13 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar13 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar13 != pVVar2) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
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

