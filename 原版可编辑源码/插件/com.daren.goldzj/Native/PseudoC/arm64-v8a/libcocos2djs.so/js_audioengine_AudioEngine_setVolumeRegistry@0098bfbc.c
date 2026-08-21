
/* js_audioengine_AudioEngine_setVolumeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioEngine_setVolumeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long *plVar7;
  Value *pVVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [24];
  undefined8 local_68;
  State aSStack_60 [40];
  long local_38;
  
                    /* try { // try from 0098bfcc to 00a8bfd3 has its CatchHandler @ 0098bfd8 */
  lVar1 = tpidr_el0;
                    /* try { // try from 0098bfd4 to 00a8bff7 has its CatchHandler @ 0098be28 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0098bfcc with catch @ 0098bfd8 */
                    /* catch() { ... } // from try @ 0098bed8 with catch @ 0098bfdc */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar10);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar6,(vector *)&local_98);
  plVar7 = (long *)se::State::args(aSStack_60);
  uVar9 = plVar7[1] - *plVar7;
  if (uVar9 == 0x20) {
    local_68 = 0;
    uVar4 = seval_to_int32((Value *)*plVar7,(int *)&local_68);
    iVar3 = (int)local_68;
    uVar5 = seval_to_float((Value *)(*plVar7 + 0x10),(float *)((long)&local_68 + 4));
                    /* catch() { ... } // from try @ 0098c0d4 with catch @ 0098c08c */
    if ((uVar4 & uVar5 & 1) != 0) {
      cocos2d::AudioEngine::setVolume(iVar3,local_68._4_4_);
      goto LAB_0098c138;
    }
                    /* try { // try from 0098c0cc to 00a8c0d3 has its CatchHandler @ 0098c0f4 */
                    /* try { // try from 0098c0d4 to 00a8c10f has its CatchHandler @ 0098c08c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x1a0,"js_audioengine_AudioEngine_setVolume");
                    /* catch() { ... } // from try @ 0098c0cc with catch @ 0098c0f4 */
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioEngine_setVolume : Error processing arguments");
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 420): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar9 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_setVolume",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x1a7);
LAB_0098c138:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar8 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
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

