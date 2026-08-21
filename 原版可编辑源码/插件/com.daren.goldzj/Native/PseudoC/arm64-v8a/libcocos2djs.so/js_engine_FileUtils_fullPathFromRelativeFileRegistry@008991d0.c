
/* js_engine_FileUtils_fullPathFromRelativeFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_engine_FileUtils_fullPathFromRelativeFileRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  Value *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_e8;
  Value *local_e0;
  undefined8 local_d8;
  HandleScope aHStack_d0 [24];
  basic_string local_b8 [16];
  void *local_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar11);
  local_e8 = (Value *)0x0;
  local_e0 = (Value *)0x0;
  local_d8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_e8);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x286,"js_engine_FileUtils_fullPathFromRelativeFile");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_fullPathFromRelativeFile : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    if (plVar8[1] - *plVar8 == 0x20) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      uVar4 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_88);
      uVar5 = seval_to_std_string((Value *)(*plVar8 + 0x10),(basic_string *)&local_a0);
      if ((uVar4 & uVar5 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x28f,"js_engine_FileUtils_fullPathFromRelativeFile");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_fullPathFromRelativeFile : Error processing arguments"
                           );
        bVar1 = false;
      }
      else {
        (**(code **)(*plVar7 + 0x58))(local_b8,plVar7,&local_88,&local_a0);
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        uVar10 = std_string_to_seval(local_b8,pVVar9);
        bVar1 = (uVar10 & 1) == 0;
        if (bVar1) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x292,"js_engine_FileUtils_fullPathFromRelativeFile");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_fullPathFromRelativeFile : Error processing arguments"
                             );
        }
        bVar1 = !bVar1;
        if (((byte)local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar1) goto LAB_00899480;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 661): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_fullPathFromRelativeFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x298);
LAB_00899480:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_e8;
  pVVar9 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_e0 = pVVar3;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

