
/* js_audioengine_AudioProfile_get_nameRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioProfile_get_nameRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  basic_string *pbVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_88,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
  se::State::State(aSStack_70,pvVar2);
  pbVar3 = (basic_string *)se::State::nativeThisObject(aSStack_70);
  if (pbVar3 == (basic_string *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0xd,"js_audioengine_AudioProfile_get_name");
    __android_log_print(6,"jswrapper","js_audioengine_AudioProfile_get_name : Invalid Native Object"
                       );
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_audioengine_AudioProfile_get_name",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x15);
  }
  else {
    se::Value::Value(aVStack_48);
    std_string_to_seval(pbVar3,aVStack_48);
    pVVar4 = (Value *)se::State::rval(aSStack_70);
    se::Value::operator=(pVVar4,aVStack_48);
                    /* try { // try from 0098887c to 00a8892b has its CatchHandler @ 0098887c
                       catch() { ... } // from try @ 0098887c with catch @ 0098887c
                       catch() { ... } // from try @ 00988984 with catch @ 0098887c */
    se::Value::~Value(aVStack_48);
  }
  pVVar4 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_70);
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0098892c to 00a8893b has its CatchHandler @ 009889cc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

