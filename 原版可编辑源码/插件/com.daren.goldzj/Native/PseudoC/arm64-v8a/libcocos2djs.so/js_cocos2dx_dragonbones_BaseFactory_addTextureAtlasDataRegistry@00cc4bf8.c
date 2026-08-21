
/* js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasDataRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  Value *pVVar7;
  Object *pOVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  Isolate *pIVar12;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar12);
  local_b8 = operator_new(0xa0);
  local_a8 = local_b8 + 0xa0;
  local_b0 = local_b8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_b8);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar5 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1b0e,"js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData");
    pcVar10 = "js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData : Invalid Native Object";
LAB_00cc4d1c:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    puVar6 = (undefined8 *)se::State::args(aSStack_70);
    pVVar7 = (Value *)*puVar6;
    lVar11 = puVar6[1] - (long)pVVar7 >> 4;
    if (lVar11 == 2) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      pVVar7 = (Value *)*puVar6;
      if (pVVar7[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar7);
        lVar11 = se::Object::getPrivateData(pOVar8);
        pVVar7 = (Value *)*puVar6;
        bVar3 = lVar11 == 0;
      }
      else {
        bVar3 = 1 < (byte)pVVar7[8];
        lVar11 = 0;
      }
      uVar9 = seval_to_std_string(pVVar7 + 0x10,(basic_string *)&local_88);
      if ((bVar3) || ((uVar9 & 1) == 0)) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x1b1e,"js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        (**(code **)(*plVar5 + 0x80))(plVar5,lVar11,&local_88);
        bVar3 = true;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar3) goto LAB_00cc4e94;
    }
    else {
      if (lVar11 == 1) {
        if (pVVar7[8] == (Value)0x5) {
          pOVar8 = (Object *)se::Value::toObject(pVVar7);
          lVar11 = se::Object::getPrivateData(pOVar8);
          if (lVar11 == 0) {
LAB_00cc4f18:
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                                ,0x1b15,"js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData");
            pcVar10 = 
            "js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData : Error processing arguments";
            goto LAB_00cc4d1c;
          }
        }
        else {
          if (1 < (byte)pVVar7[8]) goto LAB_00cc4f18;
          lVar11 = 0;
        }
        local_88 = 0;
        local_80 = 0;
        local_78 = (void *)0x0;
        (**(code **)(*plVar5 + 0x80))(plVar5,lVar11,&local_88);
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
        goto LAB_00cc4e94;
      }
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6946): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(puVar6[1] - (long)pVVar7) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1b25);
LAB_00cc4e94:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b8;
  pVVar7 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_b0 = pVVar2;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

