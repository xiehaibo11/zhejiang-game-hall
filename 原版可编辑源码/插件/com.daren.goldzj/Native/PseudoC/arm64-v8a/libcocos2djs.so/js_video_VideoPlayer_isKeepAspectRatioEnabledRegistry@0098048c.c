
/* js_video_VideoPlayer_isKeepAspectRatioEnabledRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_video_VideoPlayer_isKeepAspectRatioEnabledRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar9);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
                    /* catch() { ... } // from try @ 00980560 with catch @ 009804e8 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
                    /* try { // try from 00980518 to 00a8055f has its CatchHandler @ 00980584 */
  plVar5 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00980560 to 00a805bf has its CatchHandler @ 009804e8 */
                    /* catch() { ... } // from try @ 00980518 with catch @ 00980584 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                        ,0xcc,"js_video_VideoPlayer_isKeepAspectRatioEnabled");
    __android_log_print(6,"jswrapper",
                        "js_video_VideoPlayer_isKeepAspectRatioEnabled : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0) {
      bVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
                    /* catch() { ... } // from try @ 0098066c with catch @ 009805c0 */
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      uVar7 = boolean_to_seval((bool)(bVar3 & 1),pVVar8);
      if ((uVar7 & 1) != 0) goto LAB_00980644;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                          ,0xd3,"js_video_VideoPlayer_isKeepAspectRatioEnabled");
                    /* try { // try from 00980610 to 00a80617 has its CatchHandler @ 009806b0 */
      __android_log_print(6,"jswrapper",
                          "js_video_VideoPlayer_isKeepAspectRatioEnabled : Error processing arguments"
                         );
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp, 214): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_video_VideoPlayer_isKeepAspectRatioEnabled",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                      ,0xd9);
LAB_00980644:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar8 = local_88;
  if (local_90 != (Value *)0x0) {
                    /* try { // try from 0098066c to 00a806cb has its CatchHandler @ 009805c0 */
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
                    /* catch() { ... } // from try @ 00980664 with catch @ 0098069c */
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00980610 with catch @ 009806b0 */
  return;
}

