
/* js_audioengine_AudioEngine_getProfileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioEngine_getProfileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Value *pVVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  type *ptVar10;
  Value *pVVar11;
  Isolate *pIVar12;
  uint uVar13;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar12);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_b8);
  plVar8 = (long *)se::State::args(aSStack_70);
  lVar1 = *plVar8;
  lVar2 = plVar8[1];
                    /* try { // try from 0098e594 to 00a8e59b has its CatchHandler @ 0098e64c */
  if (lVar2 - lVar1 == 0x10) {
                    /* try { // try from 0098e59c to 00a8e667 has its CatchHandler @ 0098df98 */
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_88);
    if ((uVar9 & 1) == 0) {
      bVar5 = true;
LAB_0098e5e8:
      uVar13 = 1;
    }
    else {
      ptVar10 = (type *)cocos2d::AudioEngine::getProfile((basic_string *)&local_88);
      pVVar11 = (Value *)se::State::rval(aSStack_70);
      bVar5 = native_ptr_to_seval<cocos2d::AudioProfile>(ptVar10,pVVar11,(bool *)0x0);
      if (bVar5) {
        bVar5 = false;
        goto LAB_0098e5e8;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x2d8,"js_audioengine_AudioEngine_getProfile");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_getProfile : Error processing arguments");
      bVar5 = false;
      uVar13 = 0;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar5) {
      local_88 = local_88 & 0xffffffff00000000;
      uVar6 = seval_to_int32((Value *)*plVar8,(int *)&local_88);
      if ((uVar13 & uVar6) != 1) goto LAB_0098e68c;
      ptVar10 = (type *)cocos2d::AudioEngine::getProfile((int)local_88);
      pVVar11 = (Value *)se::State::rval(aSStack_70);
      bVar5 = native_ptr_to_seval<cocos2d::AudioProfile>(ptVar10,pVVar11,(bool *)0x0);
      if (bVar5) goto LAB_0098e6d4;
                    /* catch() { ... } // from try @ 0098e594 with catch @ 0098e64c */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x2e3,"js_audioengine_AudioEngine_getProfile");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_getProfile : Error processing arguments");
    }
    else if (uVar13 != 0) goto LAB_0098e6d4;
  }
  else {
LAB_0098e68c:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 743): wrong number of arguments: %d\n"
                        ,(ulong)(lVar2 - lVar1) >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_getProfile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x2ea);
LAB_0098e6d4:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_b8;
  pVVar11 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar11 != pVVar4) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_b0 = pVVar4;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

