
/* XMLHttpRequest_setTimeoutRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void XMLHttpRequest_setTimeoutRegistry(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_90,pIVar8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar8,param_2,aVStack_48);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  if (local_a0 < local_98) {
    se::Value::Value(local_a0,aVStack_48);
    local_a0 = local_a0 + 0x10;
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,aVStack_48);
  }
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  plVar5 = (long *)se::State::args(aSStack_70);
  if ((int)((ulong)(plVar5[1] - *plVar5) >> 4) < 1) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 1040): wrong number of arguments: %d, was expecting > 0\n"
                       );
  }
  else {
    lVar6 = se::State::nativeThisObject(aSStack_70);
    local_78 = 0;
    uVar7 = seval_to_ulong((Value *)*plVar5,&local_78);
    if ((uVar7 & 1) != 0) {
      if (local_78 < 0x32) {
        __android_log_print(6,"jswrapper",
                            "The timeout value (%lu ms) is too small, please note that timeout unit is milliseconds!"
                           );
      }
      *(ulong *)(lVar6 + 600) = local_78;
      *(float *)(*(long *)(lVar6 + 0x250) + 0xb0) = (float)local_78 / 1000.0 + 2.0;
      goto LAB_008fda48;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                        ,0x407,"XMLHttpRequest_setTimeout");
    __android_log_print(6,"jswrapper","args[0] isn\'t a number");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "XMLHttpRequest_setTimeout",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                      ,0x413);
LAB_008fda48:
  se::State::~State(aSStack_70);
  pVVar3 = local_a8;
  pVVar2 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

