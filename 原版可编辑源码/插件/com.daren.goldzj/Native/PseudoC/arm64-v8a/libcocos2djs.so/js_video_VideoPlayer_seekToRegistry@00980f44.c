
/* js_video_VideoPlayer_seekToRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_video_VideoPlayer_seekToRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  float local_64;
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
                    /* try { // try from 00980fa0 to 00a80fff has its CatchHandler @ 00980fa0
                       catch() { ... } // from try @ 00980fa0 with catch @ 00980fa0
                       catch() { ... } // from try @ 00981028 with catch @ 00980fa0
                       catch() { ... } // from try @ 009810b8 with catch @ 00980fa0
                       catch() { ... } // from try @ 0098113c with catch @ 00980fa0 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  plVar4 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 00981028 to 00a81053 has its CatchHandler @ 00980fa0 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                        ,0x116,"js_video_VideoPlayer_seekTo");
                    /* try { // try from 00981054 to 00a8105b has its CatchHandler @ 0098117c */
    __android_log_print(6,"jswrapper","js_video_VideoPlayer_seekTo : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    uVar7 = puVar5[1] - (long)*puVar5;
    if (uVar7 == 0x10) {
                    /* try { // try from 00981000 to 00a81027 has its CatchHandler @ 0098118c */
      local_64 = 0.0;
      uVar7 = seval_to_float((Value *)*puVar5,&local_64);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar4 + 0x30))(local_64,plVar4);
        goto LAB_00981104;
      }
                    /* try { // try from 009810b8 to 00a81113 has its CatchHandler @ 00980fa0 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                          ,0x11d,"js_video_VideoPlayer_seekTo");
      __android_log_print(6,"jswrapper","js_video_VideoPlayer_seekTo : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp, 289): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar7 >> 4,1);
                    /* try { // try from 00981090 to 00a810b7 has its CatchHandler @ 00981188 */
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_video_VideoPlayer_seekTo",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                      ,0x124);
LAB_00981104:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
                    /* try { // try from 00981114 to 00a8113b has its CatchHandler @ 00981184 */
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
                    /* try { // try from 0098113c to 00a811af has its CatchHandler @ 00980fa0 */
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00981114 with catch @ 00981184 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00981054 with catch @ 0098117c */
  return;
}

