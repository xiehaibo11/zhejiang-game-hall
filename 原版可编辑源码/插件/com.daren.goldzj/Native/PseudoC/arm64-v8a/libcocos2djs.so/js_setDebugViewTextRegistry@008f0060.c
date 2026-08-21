
/* js_setDebugViewTextRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_setDebugViewTextRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar8);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_b0);
  plVar5 = (long *)se::State::args(aSStack_60);
  uVar7 = plVar5[1] - *plVar5;
  if (uVar7 == 0x20) {
    uVar7 = seval_to_int32((Value *)*plVar5,&local_64);
    if ((uVar7 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                          ,0x403,"js_setDebugViewText");
      __android_log_print(6,"jswrapper","Convert arg0 index failed!");
    }
    else {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      uVar7 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_80);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                            ,0x407,"js_setDebugViewText");
        __android_log_print(6,"jswrapper","Convert arg1 text failed!");
      }
      else {
        setGameInfoDebugViewTextJNI(local_64,(basic_string *)&local_80);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (!bVar1) goto LAB_008f01f0;
    }
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 1040): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar7 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_setDebugViewText",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                      ,0x413);
LAB_008f01f0:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_b0;
  pVVar6 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

