
/* js_audioengine_AudioEngine_play2dRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioEngine_play2dRegistry(FunctionCallbackInfo *param_1)

{
  byte bVar1;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  long *plVar10;
  Object *this;
  AudioProfile *pAVar11;
  ulong uVar12;
  Value *pVVar13;
  Isolate *pIVar14;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  float local_90;
  bool local_8c [4];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar14);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar9 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar9,(vector *)&local_c0);
  plVar10 = (long *)se::State::args(aSStack_70);
  switch(plVar10[1] - *plVar10 >> 4) {
  case 1:
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    uVar12 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_88);
    if ((uVar12 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x1fe,"js_audioengine_AudioEngine_play2d");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_play2d : Error processing arguments");
      break;
    }
    iVar8 = cocos2d::AudioEngine::play2d((basic_string *)&local_88,false,1.0,(AudioProfile *)0x0);
    pVVar13 = (Value *)se::State::rval(aSStack_70);
    uVar12 = int32_to_seval(iVar8,pVVar13);
    if ((uVar12 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x201,"js_audioengine_AudioEngine_play2d");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_play2d : Error processing arguments");
      break;
    }
LAB_0098cf44:
    bVar4 = true;
    goto joined_r0x0098cfe8;
  case 2:
    local_88 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    uVar5 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_88);
    uVar6 = seval_to_boolean((Value *)(*plVar10 + 0x10),(bool *)&local_90);
    if ((uVar5 & uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x209,"js_audioengine_AudioEngine_play2d");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_play2d : Error processing arguments");
    }
    else {
      iVar8 = cocos2d::AudioEngine::play2d
                        ((basic_string *)&local_88,local_90._0_1_,1.0,(AudioProfile *)0x0);
      pVVar13 = (Value *)se::State::rval(aSStack_70);
      uVar12 = int32_to_seval(iVar8,pVVar13);
      if ((uVar12 & 1) != 0) goto LAB_0098cf44;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x20c,"js_audioengine_AudioEngine_play2d");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_play2d : Error processing arguments");
    }
    break;
  case 3:
    local_88 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_90 = 0.0;
    uVar5 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_88);
    uVar6 = seval_to_boolean((Value *)(*plVar10 + 0x10),local_8c);
    uVar7 = seval_to_float((Value *)(*plVar10 + 0x20),&local_90);
    if ((uVar5 & uVar6 & uVar7 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x216,"js_audioengine_AudioEngine_play2d");
                    /* try { // try from 0098cef4 to 00a8cfe7 has its CatchHandler @ 0098cef4
                       catch() { ... } // from try @ 0098cef4 with catch @ 0098cef4
                       catch() { ... } // from try @ 0098cff0 with catch @ 0098cef4
                       catch() { ... } // from try @ 0098d0e8 with catch @ 0098cef4 */
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_play2d : Error processing arguments");
    }
    else {
      iVar8 = cocos2d::AudioEngine::play2d
                        ((basic_string *)&local_88,local_8c[0],local_90,(AudioProfile *)0x0);
      pVVar13 = (Value *)se::State::rval(aSStack_70);
      uVar12 = int32_to_seval(iVar8,pVVar13);
      if ((uVar12 & 1) != 0) goto LAB_0098cf44;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x219,"js_audioengine_AudioEngine_play2d");
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioEngine_play2d : Error processing arguments");
    }
    break;
  case 4:
    local_88 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_90 = 0.0;
    uVar5 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_88);
    uVar6 = seval_to_boolean((Value *)(*plVar10 + 0x10),local_8c);
    uVar7 = seval_to_float((Value *)(*plVar10 + 0x20),&local_90);
    bVar1 = *(byte *)(*plVar10 + 0x38);
    if (bVar1 == 5) {
      this = (Object *)se::Value::toObject((Value *)(*plVar10 + 0x30));
      pAVar11 = (AudioProfile *)se::Object::getPrivateData(this);
      if (pAVar11 != (AudioProfile *)0x0) {
        bVar4 = true;
        goto LAB_0098cf08;
      }
    }
    else {
      bVar4 = bVar1 < 2;
      pAVar11 = (AudioProfile *)0x0;
LAB_0098cf08:
      if (((uVar5 & uVar6 & uVar7 & 1) != 0) && (bVar4)) {
        iVar8 = cocos2d::AudioEngine::play2d((basic_string *)&local_88,local_8c[0],local_90,pAVar11)
        ;
        pVVar13 = (Value *)se::State::rval(aSStack_70);
        uVar12 = int32_to_seval(iVar8,pVVar13);
        if ((uVar12 & 1) != 0) goto LAB_0098cf44;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                            ,0x228,"js_audioengine_AudioEngine_play2d");
        __android_log_print(6,"jswrapper",
                            "js_audioengine_AudioEngine_play2d : Error processing arguments");
        break;
      }
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x225,"js_audioengine_AudioEngine_play2d");
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioEngine_play2d : Error processing arguments");
    break;
  default:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 555): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar10[1] - *plVar10) >> 4,4);
    goto LAB_0098cff8;
  }
  bVar4 = false;
joined_r0x0098cfe8:
                    /* try { // try from 0098cfe8 to 00a8cfef has its CatchHandler @ 0098d0e8 */
  if ((local_88 & 1) != 0) {
                    /* try { // try from 0098cff0 to 00a8d0df has its CatchHandler @ 0098cef4 */
    operator_delete(local_78);
  }
  if (!bVar4) {
LAB_0098cff8:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_audioengine_AudioEngine_play2d",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x22e);
  }
  pVVar13 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c0;
  pVVar13 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar13 != pVVar3) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

