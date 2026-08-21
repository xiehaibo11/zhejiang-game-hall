
/* js_audioengine_AudioEngine_getDurationFromFileRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_audioengine_AudioEngine_getDurationFromFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  float fVar9;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar8);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  plVar5 = (long *)se::State::args(aSStack_60);
                    /* try { // try from 0098b178 to 00a8b273 has its CatchHandler @ 0098b33c */
  if (plVar5[1] - *plVar5 == 0x10) {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
    if ((uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x138,"js_audioengine_AudioEngine_getDurationFromFile");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_getDurationFromFile : Error processing arguments"
                         );
LAB_0098b280:
      bVar2 = false;
    }
    else {
      fVar9 = (float)cocos2d::AudioEngine::getDurationFromFile((basic_string *)&local_78);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar6 = float_to_seval(fVar9,pVVar7);
      if ((uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                            ,0x13b,"js_audioengine_AudioEngine_getDurationFromFile");
                    /* try { // try from 0098b274 to 00a8b357 has its CatchHandler @ 0098b048 */
        __android_log_print(6,"jswrapper",
                            "js_audioengine_AudioEngine_getDurationFromFile : Error processing arguments"
                           );
        goto LAB_0098b280;
      }
      bVar2 = true;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar2) goto LAB_0098b2c4;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 318): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_getDurationFromFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x141);
LAB_0098b2c4:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0098b178 with catch @ 0098b33c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

