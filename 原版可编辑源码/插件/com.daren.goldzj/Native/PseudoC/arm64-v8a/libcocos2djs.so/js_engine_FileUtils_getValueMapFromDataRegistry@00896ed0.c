
/* js_engine_FileUtils_getValueMapFromDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_getValueMapFromDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  void *pvVar13;
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
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar12);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar7,(vector *)&local_e0);
  plVar8 = (long *)se::State::nativeThisObject(aSStack_98);
  if (plVar8 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x1aa,"js_engine_FileUtils_getValueMapFromData");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_getValueMapFromData : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_98);
    if (plVar9[1] - *plVar9 == 0x20) {
      local_a8 = 0;
      local_a0 = (void *)0x0;
      local_b0 = 0;
      uVar5 = seval_to_std_string((Value *)*plVar9,(basic_string *)&local_b0);
      local_70[0] = (void *)((ulong)local_70[0] & 0xffffffff00000000);
      pvVar7 = (void *)((ulong)&local_b0 | 1);
      if ((local_b0 & 1) != 0) {
        pvVar7 = local_a0;
      }
      uVar6 = seval_to_int32((Value *)(*plVar9 + 0x10),(int *)local_70);
      if ((uVar5 & uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x1b3,"js_engine_FileUtils_getValueMapFromData");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_getValueMapFromData : Error processing arguments");
        bVar2 = false;
      }
      else {
        (**(code **)(*plVar8 + 0xb8))(local_70,plVar8,pvVar7,(ulong)local_70[0] & 0xffffffff);
        pVVar10 = (Value *)se::State::rval(aSStack_98);
        uVar11 = ccvaluemap_to_seval((unordered_map *)local_70,pVVar10);
        if ((uVar11 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x1b6,"js_engine_FileUtils_getValueMapFromData");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_getValueMapFromData : Error processing arguments"
                             );
          bVar2 = false;
          pvVar7 = local_70[0];
          puVar3 = local_60;
        }
        else {
          bVar2 = true;
          pvVar7 = local_70[0];
          puVar3 = local_60;
        }
        while (puVar3 != (void *)0x0) {
          pvVar13 = (void *)*puVar3;
          local_70[0] = pvVar7;
          cocos2d::Value::~Value((Value *)(puVar3 + 5));
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          pvVar7 = local_70[0];
          puVar3 = pvVar13;
        }
        local_70[0] = (void *)0x0;
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (bVar2) goto LAB_00897154;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 441): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_getValueMapFromData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x1bc);
LAB_00897154:
  pVVar10 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_98);
  pVVar4 = local_e0;
  pVVar10 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
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

