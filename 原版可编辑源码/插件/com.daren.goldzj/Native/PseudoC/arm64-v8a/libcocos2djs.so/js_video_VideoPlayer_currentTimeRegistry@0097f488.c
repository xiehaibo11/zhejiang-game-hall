
/* js_video_VideoPlayer_currentTimeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_video_VideoPlayer_currentTimeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  VideoPlayer *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  float fVar8;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar7);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (VideoPlayer *)se::State::nativeThisObject(aSStack_60);
  if (this == (VideoPlayer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                        ,0x57,"js_video_VideoPlayer_currentTime");
    __android_log_print(6,"jswrapper","js_video_VideoPlayer_currentTime : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    if (plVar4[1] - *plVar4 == 0) {
      fVar8 = (float)cocos2d::VideoPlayer::currentTime(this);
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      uVar5 = float_to_seval(fVar8,pVVar6);
      if ((uVar5 & 1) != 0) goto LAB_0097f638;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                          ,0x5e,"js_video_VideoPlayer_currentTime");
      __android_log_print(6,"jswrapper",
                          "js_video_VideoPlayer_currentTime : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp, 97): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar4[1] - *plVar4) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_video_VideoPlayer_currentTime",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                      ,100);
LAB_0097f638:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

