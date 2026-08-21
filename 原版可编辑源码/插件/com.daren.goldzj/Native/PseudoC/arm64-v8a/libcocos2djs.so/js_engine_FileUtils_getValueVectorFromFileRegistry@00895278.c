
/* js_engine_FileUtils_getValueVectorFromFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_getValueVectorFromFileRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  Value *local_a0;
  Value *local_98;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar10);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_d0);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x106,"js_engine_FileUtils_getValueVectorFromFile");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_getValueVectorFromFile : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x10d,"js_engine_FileUtils_getValueVectorFromFile");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_getValueVectorFromFile : Error processing arguments"
                           );
        bVar1 = false;
      }
      else {
        (**(code **)(*plVar6 + 0xf0))(&local_a0,plVar6,&local_88);
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        uVar8 = ccvaluevector_to_seval((vector *)&local_a0,pVVar9);
        bVar1 = (uVar8 & 1) == 0;
        pVVar3 = local_a0;
        if (bVar1) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x110,"js_engine_FileUtils_getValueVectorFromFile");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_getValueVectorFromFile : Error processing arguments"
                             );
          pVVar3 = local_a0;
        }
        bVar1 = !bVar1;
        local_a0 = pVVar3;
        if (pVVar3 != (Value *)0x0) {
          while (local_98 != pVVar3) {
            cocos2d::Value::~Value(local_98 + -0x10);
            local_98 = local_98 + -0x10;
          }
          operator_delete(local_a0);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar1) goto LAB_0089550c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 275): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_getValueVectorFromFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x116);
LAB_0089550c:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_d0;
  pVVar9 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar9 != pVVar4) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_c8 = pVVar4;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

