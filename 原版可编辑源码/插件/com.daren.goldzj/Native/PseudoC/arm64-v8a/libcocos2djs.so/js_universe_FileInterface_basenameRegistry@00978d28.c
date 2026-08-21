
/* js_universe_FileInterface_basenameRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_basenameRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  undefined1 auVar9 [16];
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  basic_string local_90 [16];
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar8);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_c0);
  plVar5 = (long *)se::State::args(aSStack_60);
  if (plVar5[1] - *plVar5 == 0x10) {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    auVar9 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
    if ((auVar9._0_8_ & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x97b,"js_universe_FileInterface_basename");
      __android_log_print(6,"jswrapper",
                          "js_universe_FileInterface_basename : Error processing arguments");
      bVar1 = false;
    }
    else {
      universe::FileInterface::basename((FileInterface *)&local_78,auVar9._8_8_);
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      uVar7 = std_string_to_seval(local_90,pVVar6);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x97e,"js_universe_FileInterface_basename");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_basename : Error processing arguments");
      }
      bVar1 = !bVar1;
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar1) goto LAB_00978f28;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2433): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_basename",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x984);
LAB_00978f28:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar6 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

