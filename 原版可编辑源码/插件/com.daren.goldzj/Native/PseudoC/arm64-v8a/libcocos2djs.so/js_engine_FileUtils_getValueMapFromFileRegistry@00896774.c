
/* js_engine_FileUtils_getValueMapFromFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_getValueMapFromFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  void *pvVar11;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  State aSStack_98 [40];
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar10);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar5,(vector *)&local_e0);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_98);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x180,"js_engine_FileUtils_getValueMapFromFile");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_getValueMapFromFile : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_98);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_a8 = 0;
      local_a0 = (void *)0x0;
      local_b0 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_b0);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x187,"js_engine_FileUtils_getValueMapFromFile");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_getValueMapFromFile : Error processing arguments");
        bVar2 = false;
      }
      else {
        (**(code **)(*plVar6 + 0xb0))(local_70,plVar6,&local_b0);
        pVVar9 = (Value *)se::State::rval(aSStack_98);
        uVar8 = ccvaluemap_to_seval((unordered_map *)local_70,pVVar9);
        if ((uVar8 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x18a,"js_engine_FileUtils_getValueMapFromFile");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_getValueMapFromFile : Error processing arguments"
                             );
          bVar2 = false;
          pvVar5 = local_70[0];
          puVar3 = local_60;
        }
        else {
          bVar2 = true;
          pvVar5 = local_70[0];
          puVar3 = local_60;
        }
        while (puVar3 != (void *)0x0) {
          pvVar11 = (void *)*puVar3;
          local_70[0] = pvVar5;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          pvVar5 = local_70[0];
          puVar3 = pvVar11;
        }
        local_70[0] = (void *)0x0;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (bVar2) goto LAB_008969bc;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 397): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_getValueMapFromFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,400);
LAB_008969bc:
  pVVar9 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_98);
  pVVar4 = local_e0;
  pVVar9 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar9 != pVVar4) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_d8 = pVVar4;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

