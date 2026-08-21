
/* js_audioengine_AudioEngine_setCurrentTimeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioEngine_setCurrentTimeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [24];
  undefined8 local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar11);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00989ba4 with catch @ 00989cb4
                        */
  se::State::State(aSStack_60,pvVar7,(vector *)&local_98);
  plVar8 = (long *)se::State::args(aSStack_60);
  uVar10 = plVar8[1] - *plVar8;
  if (uVar10 == 0x20) {
    local_68 = 0;
    uVar5 = seval_to_int32((Value *)*plVar8,(int *)&local_68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009899dc with catch @ 00989cec
                        */
                    /* try { // try from 00989cf0 to 00a89d87 has its CatchHandler @ 00989cf0
                       catch() { ... } // from try @ 00989cf0 with catch @ 00989cf0
                       catch() { ... } // from try @ 00989d90 with catch @ 00989cf0
                       catch() { ... } // from try @ 00989de8 with catch @ 00989cf0 */
    iVar3 = (int)local_68;
    uVar6 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)((long)&local_68 + 4));
    if ((uVar5 & uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0xa9,"js_audioengine_AudioEngine_setCurrentTime");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_setCurrentTime : Error processing arguments");
    }
    else {
      bVar4 = cocos2d::AudioEngine::setCurrentTime(iVar3,local_68._4_4_);
      pVVar9 = (Value *)se::State::rval(aSStack_60);
      uVar10 = boolean_to_seval((bool)(bVar4 & 1),pVVar9);
      if ((uVar10 & 1) != 0) goto LAB_00989e10;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0xac,"js_audioengine_AudioEngine_setCurrentTime");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_setCurrentTime : Error processing arguments");
    }
  }
  else {
                    /* try { // try from 00989d88 to 00a89d8f has its CatchHandler @ 00989de8 */
                    /* try { // try from 00989d90 to 00a89de3 has its CatchHandler @ 00989cf0 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 175): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar10 >> 4,2);
  }
                    /* try { // try from 00989de4 to 00a89de7 has its CatchHandler @ 00989de8 */
                    /* catch() { ... } // from try @ 00989d88 with catch @ 00989de8
                       catch() { ... } // from try @ 00989de4 with catch @ 00989de8
                       try { // try from 00989de8 to 00a89dff has its CatchHandler @ 00989cf0 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_setCurrentTime",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0xb2);
LAB_00989e10:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar9 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
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

