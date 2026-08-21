
/* js_engine_FileUtils_writeValueMapToFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_writeValueMapToFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  Value *pVVar11;
  ulong uVar12;
  Isolate *pIVar13;
  void *pvVar14;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  State aSStack_98 [40];
  void *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar13);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar8,(vector *)&local_e0);
  plVar9 = (long *)se::State::nativeThisObject(aSStack_98);
  if (plVar9 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x2b2,"js_engine_FileUtils_writeValueMapToFile");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_writeValueMapToFile : Invalid Native Object");
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_98);
    if (plVar10[1] - *plVar10 == 0x20) {
      local_a8 = 0;
      local_a0 = (void *)0x0;
      uStack_68 = 0;
      local_70 = (void *)0x0;
      uStack_58 = 0;
      local_60 = (undefined8 *)0x0;
      local_50 = 0x3f800000;
      local_b0 = 0;
      uVar6 = seval_to_ccvaluemap((Value *)*plVar10,(unordered_map *)&local_70);
      uVar7 = seval_to_std_string((Value *)(*plVar10 + 0x10),(basic_string *)&local_b0);
      if ((uVar6 & uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,699,"js_engine_FileUtils_writeValueMapToFile");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_writeValueMapToFile : Error processing arguments");
LAB_00899ba4:
        bVar2 = false;
      }
      else {
        bVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_70,&local_b0);
        pVVar11 = (Value *)se::State::rval(aSStack_98);
        uVar12 = boolean_to_seval((bool)(bVar5 & 1),pVVar11);
        if ((uVar12 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x2be,"js_engine_FileUtils_writeValueMapToFile");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_writeValueMapToFile : Error processing arguments"
                             );
          goto LAB_00899ba4;
        }
        bVar2 = true;
      }
      pvVar8 = local_70;
      puVar3 = local_60;
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
        pvVar8 = local_70;
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar14 = (void *)*puVar3;
        local_70 = pvVar8;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar8 = local_70;
        puVar3 = pvVar14;
      }
      local_70 = (void *)0x0;
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
      if (bVar2) goto LAB_00899c2c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 705): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar10[1] - *plVar10) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_writeValueMapToFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x2c4);
LAB_00899c2c:
  pVVar11 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_98);
  pVVar4 = local_e0;
  pVVar11 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar11 != pVVar4) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
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

