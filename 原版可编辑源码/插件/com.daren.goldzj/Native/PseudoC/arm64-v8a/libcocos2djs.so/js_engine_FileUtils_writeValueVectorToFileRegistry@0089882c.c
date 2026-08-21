
/* js_engine_FileUtils_writeValueVectorToFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_writeValueVectorToFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  Value *pVVar4;
  Value *pVVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  Value *pVVar12;
  ulong uVar13;
  Isolate *pIVar14;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  Value *local_88;
  Value *local_80;
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar14);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar9 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar9,(vector *)&local_d0);
  plVar10 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar10 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x24b,"js_engine_FileUtils_writeValueVectorToFile");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_writeValueVectorToFile : Invalid Native Object");
  }
  else {
    plVar11 = (long *)se::State::args(aSStack_70);
    if (plVar11[1] - *plVar11 == 0x20) {
      local_88 = (Value *)0x0;
      local_80 = (Value *)0x0;
      local_78 = 0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      uVar7 = seval_to_ccvaluevector((Value *)*plVar11,(vector *)&local_88);
      uVar8 = seval_to_std_string((Value *)(*plVar11 + 0x10),(basic_string *)&local_a0);
      if ((uVar7 & uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x254,"js_engine_FileUtils_writeValueVectorToFile");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_writeValueVectorToFile : Error processing arguments"
                           );
LAB_00898a5c:
        bVar2 = false;
      }
      else {
        bVar6 = (**(code **)(*plVar10 + 0xe0))(plVar10,&local_88,&local_a0);
        pVVar12 = (Value *)se::State::rval(aSStack_70);
        uVar13 = boolean_to_seval((bool)(bVar6 & 1),pVVar12);
        if ((uVar13 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,599,"js_engine_FileUtils_writeValueVectorToFile");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_writeValueVectorToFile : Error processing arguments"
                             );
          goto LAB_00898a5c;
        }
        bVar2 = true;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      pVVar5 = local_88;
      pVVar3 = local_80;
      if (local_88 != (Value *)0x0) {
        while (pVVar3 != pVVar5) {
          cocos2d::Value::~Value(pVVar3 + -0x10);
          pVVar3 = pVVar3 + -0x10;
        }
        local_80 = pVVar5;
        operator_delete(local_88);
      }
      if (bVar2) goto LAB_00898adc;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 602): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar11[1] - *plVar11) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_writeValueVectorToFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x25d);
LAB_00898adc:
  pVVar12 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_d0;
  pVVar12 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar12 != pVVar4) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_c8 = pVVar4;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

