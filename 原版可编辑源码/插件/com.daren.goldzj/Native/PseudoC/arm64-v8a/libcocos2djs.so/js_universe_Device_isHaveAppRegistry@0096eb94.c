
/* js_universe_Device_isHaveAppRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_isHaveAppRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  Value *pVVar4;
  byte bVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar6,(vector *)&local_a8);
  plVar7 = (long *)se::State::args(aSStack_60);
  if (plVar7[1] - *plVar7 == 0x10) {
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_78);
    if ((uVar8 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x4dd,"js_universe_Device_isHaveApp");
      __android_log_print(6,"jswrapper","js_universe_Device_isHaveApp : Error processing arguments")
      ;
LAB_0096ed48:
      bVar3 = false;
    }
    else {
      pcVar1 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar1 = local_68;
      }
      bVar5 = universe::Device::isHaveApp(pcVar1);
      pVVar9 = (Value *)se::State::rval(aSStack_60);
      uVar8 = boolean_to_seval((bool)(bVar5 & 1),pVVar9);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x4e0,"js_universe_Device_isHaveApp");
        __android_log_print(6,"jswrapper",
                            "js_universe_Device_isHaveApp : Error processing arguments");
        goto LAB_0096ed48;
      }
      bVar3 = true;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar3) goto LAB_0096ed8c;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1251): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_isHaveApp",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x4e6);
LAB_0096ed8c:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_60);
  pVVar4 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar4) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a0 = pVVar4;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

