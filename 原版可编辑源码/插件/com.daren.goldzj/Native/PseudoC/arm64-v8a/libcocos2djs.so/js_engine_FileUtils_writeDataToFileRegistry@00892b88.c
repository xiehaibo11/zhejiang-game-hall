
/* js_engine_FileUtils_writeDataToFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_writeDataToFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  Data aDStack_80 [16];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar12);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_c8);
  plVar8 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar8 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0xd,"js_engine_FileUtils_writeDataToFile");
    __android_log_print(6,"jswrapper","js_engine_FileUtils_writeDataToFile : Invalid Native Object")
    ;
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_70);
    if (plVar9[1] - *plVar9 == 0x20) {
      cocos2d::Data::Data(aDStack_80);
      local_90 = 0;
      local_88 = (void *)0x0;
      local_98 = 0;
      uVar5 = seval_to_Data((Value *)*plVar9,aDStack_80);
      uVar6 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_98);
      if ((uVar5 & uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x16,"js_engine_FileUtils_writeDataToFile");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_writeDataToFile : Error processing arguments");
LAB_00892db8:
        bVar2 = false;
      }
      else {
        bVar4 = (**(code **)(*plVar8 + 0xd0))(plVar8,aDStack_80,&local_98);
        pVVar10 = (Value *)se::State::rval(aSStack_70);
        uVar11 = boolean_to_seval((bool)(bVar4 & 1),pVVar10);
        if ((uVar11 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x19,"js_engine_FileUtils_writeDataToFile");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_writeDataToFile : Error processing arguments");
          goto LAB_00892db8;
        }
        bVar2 = true;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      cocos2d::Data::~Data(aDStack_80);
      if (bVar2) goto LAB_00892e04;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 28): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_writeDataToFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x1f);
LAB_00892e04:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c8;
  pVVar10 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar10 != pVVar3) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_c0 = pVVar3;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

