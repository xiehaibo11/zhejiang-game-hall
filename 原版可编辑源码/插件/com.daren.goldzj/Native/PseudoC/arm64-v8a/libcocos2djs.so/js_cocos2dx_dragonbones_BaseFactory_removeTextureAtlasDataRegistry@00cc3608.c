
/* js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasDataRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasDataRegistry
               (FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  Value *pVVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [28];
  bool local_8c [4];
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_c0);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar5 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1a56,"js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData : Invalid Native Object"
                       );
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    lVar10 = plVar6[1] - *plVar6 >> 4;
    if (lVar10 == 2) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_88);
      uVar8 = seval_to_boolean((Value *)(*plVar6 + 0x10),local_8c);
      if (((uVar7 & 1) == 0) || ((uVar8 & 1) == 0)) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x1a66,"js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData : Error processing arguments"
                           );
        bVar1 = false;
      }
      else {
        (**(code **)(*plVar5 + 0x88))(plVar5,&local_88,local_8c[0]);
        bVar1 = true;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar1) goto LAB_00cc38bc;
    }
    else if (lVar10 == 1) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_88);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x1a5d,"js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData : Error processing arguments"
                           );
      }
      else {
        (**(code **)(*plVar5 + 0x88))(plVar5,&local_88,1);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (!bVar1) goto LAB_00cc38bc;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6762): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1a6d);
LAB_00cc38bc:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

