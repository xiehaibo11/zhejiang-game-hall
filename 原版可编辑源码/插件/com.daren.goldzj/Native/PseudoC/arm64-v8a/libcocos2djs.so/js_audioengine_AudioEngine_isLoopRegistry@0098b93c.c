
/* js_audioengine_AudioEngine_isLoopRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioEngine_isLoopRegistry(FunctionCallbackInfo *param_1)

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
                    /* try { // try from 0098b98c to 00a8b98f has its CatchHandler @ 0098bad4 */
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  puVar5 = (undefined8 *)se::State::args(aSStack_60);
  uVar7 = puVar5[1] - (long)*puVar5;
  if (uVar7 == 0x10) {
    local_64 = 0;
    uVar7 = seval_to_int32((Value *)*puVar5,&local_64);
    if ((uVar7 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x171,"js_audioengine_AudioEngine_isLoop");
                    /* try { // try from 0098babc to 00a8bac3 has its CatchHandler @ 0098bad4 */
                    /* try { // try from 0098bac4 to 00a8bac7 has its CatchHandler @ 0098b8d8 */
                    /* try { // try from 0098bac8 to 00a8bad3 has its CatchHandler @ 0098bad4 */
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_isLoop : Error processing arguments");
    }
    else {
      bVar3 = cocos2d::AudioEngine::isLoop(local_64);
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      uVar7 = boolean_to_seval((bool)(bVar3 & 1),pVVar6);
      if ((uVar7 & 1) != 0) goto LAB_0098baf8;
                    /* try { // try from 0098ba2c to 00a8ba7b has its CatchHandler @ 0098baec */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x174,"js_audioengine_AudioEngine_isLoop");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_isLoop : Error processing arguments");
    }
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 375): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar7 >> 4,1);
  }
                    /* catch() { ... } // from try @ 0098b98c with catch @ 0098bad4
                       catch() { ... } // from try @ 0098babc with catch @ 0098bad4
                       catch() { ... } // from try @ 0098bac8 with catch @ 0098bad4
                       try { // try from 0098bad4 to 00a8bb27 has its CatchHandler @ 0098b8d8 */
                    /* catch() { ... } // from try @ 0098b938 with catch @ 0098bae4 */
                    /* catch() { ... } // from try @ 0098b924 with catch @ 0098bae8 */
                    /* catch() { ... } // from try @ 0098ba2c with catch @ 0098baec */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_isLoop",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x17a);
LAB_0098baf8:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
                    /* catch() { ... } // from try @ 0098bbd4 with catch @ 0098bb28 */
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
                    /* try { // try from 0098bb5c to 00a8bb6f has its CatchHandler @ 0098bc18 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

