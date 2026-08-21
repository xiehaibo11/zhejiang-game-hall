
/* js_audioengine_AudioEngine_getCurrentTimeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioEngine_getCurrentTimeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Value *pVVar5;
  ulong uVar6;
  Isolate *pIVar7;
  float fVar8;
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
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar7);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
                    /* try { // try from 0098b46c to 00a8b4d3 has its CatchHandler @ 0098b5a0 */
  puVar4 = (undefined8 *)se::State::args(aSStack_60);
  uVar6 = puVar4[1] - (long)*puVar4;
  if (uVar6 == 0x10) {
    local_64 = 0;
    uVar6 = seval_to_int32((Value *)*puVar4,&local_64);
    if ((uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x14b,"js_audioengine_AudioEngine_getCurrentTime");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_getCurrentTime : Error processing arguments");
    }
    else {
      fVar8 = (float)cocos2d::AudioEngine::getCurrentTime(local_64);
      pVVar5 = (Value *)se::State::rval(aSStack_60);
      uVar6 = float_to_seval(fVar8,pVVar5);
      if ((uVar6 & 1) != 0) goto LAB_0098b594;
                    /* try { // try from 0098b4d4 to 00a8b5bb has its CatchHandler @ 0098b364 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x14e,"js_audioengine_AudioEngine_getCurrentTime");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_getCurrentTime : Error processing arguments");
    }
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 337): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar6 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_getCurrentTime",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x154);
LAB_0098b594:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
                    /* catch() { ... } // from try @ 0098b46c with catch @ 0098b5a0 */
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
                    /* try { // try from 0098b5c8 to 00a8b6f7 has its CatchHandler @ 0098b5c8
                       catch() { ... } // from try @ 0098b5c8 with catch @ 0098b5c8
                       catch() { ... } // from try @ 0098b7f4 with catch @ 0098b5c8 */
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

