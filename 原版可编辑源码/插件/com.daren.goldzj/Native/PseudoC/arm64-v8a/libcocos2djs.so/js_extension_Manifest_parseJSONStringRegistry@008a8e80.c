
/* js_extension_Manifest_parseJSONStringRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_extension_Manifest_parseJSONStringRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  Manifest *this;
  long *plVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
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
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar9);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_d0);
  this = (Manifest *)se::State::nativeThisObject(aSStack_70);
  if (this == (Manifest *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x1d8,"js_extension_Manifest_parseJSONString");
    __android_log_print(6,"jswrapper",
                        "js_extension_Manifest_parseJSONString : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    if (plVar7[1] - *plVar7 == 0x20) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      uVar4 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      uVar5 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_a0);
      bVar1 = (uVar4 & uVar5 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                            ,0x1e1,"js_extension_Manifest_parseJSONString");
        __android_log_print(6,"jswrapper",
                            "js_extension_Manifest_parseJSONString : Error processing arguments");
      }
      else {
        cocos2d::extension::Manifest::parseJSONString
                  (this,(basic_string *)&local_88,(basic_string *)&local_a0);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (!bVar1) goto LAB_008a903c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 485): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_Manifest_parseJSONString",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x1e8);
LAB_008a903c:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_d0;
  pVVar8 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

