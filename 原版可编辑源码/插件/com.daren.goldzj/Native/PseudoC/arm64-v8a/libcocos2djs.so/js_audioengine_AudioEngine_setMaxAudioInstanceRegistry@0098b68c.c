
/* js_audioengine_AudioEngine_setMaxAudioInstanceRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_audioengine_AudioEngine_setMaxAudioInstanceRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
                    /* try { // try from 0098b6f8 to 00a8b7f3 has its CatchHandler @ 0098b8bc */
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  puVar5 = (undefined8 *)se::State::args(aSStack_60);
  uVar7 = puVar5[1] - (long)*puVar5;
  if (uVar7 == 0x10) {
    local_64 = 0;
    uVar7 = seval_to_int32((Value *)*puVar5,&local_64);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 0098b7f4 to 00a8b8d7 has its CatchHandler @ 0098b5c8 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x15e,"js_audioengine_AudioEngine_setMaxAudioInstance");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_setMaxAudioInstance : Error processing arguments"
                         );
    }
    else {
      bVar3 = cocos2d::AudioEngine::setMaxAudioInstance(local_64);
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      uVar7 = boolean_to_seval((bool)(bVar3 & 1),pVVar6);
      if ((uVar7 & 1) != 0) goto LAB_0098b848;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x161,"js_audioengine_AudioEngine_setMaxAudioInstance");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_setMaxAudioInstance : Error processing arguments"
                         );
    }
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 356): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar7 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_setMaxAudioInstance",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x167);
LAB_0098b848:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0098b6f8 with catch @ 0098b8bc */
  return;
}

