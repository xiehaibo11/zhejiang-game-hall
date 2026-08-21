
/* JSB_localStorage_getLengthRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value>
   const&) */

void JSB_localStorage_getLengthRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_80 [28];
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_80,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar2);
  plVar3 = (long *)se::State::args(aSStack_60);
  if (plVar3[1] == *plVar3) {
    local_64 = 0;
    localStorageGetLength(&local_64);
    pVVar4 = (Value *)se::State::rval(aSStack_60);
    se::Value::setInt32(pVVar4,local_64);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp, 335): Invalid number of arguments\n"
                       );
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_localStorage_getLength",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                        ,0x152);
  }
  pVVar4 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

