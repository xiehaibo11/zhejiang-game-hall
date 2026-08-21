
/* js_video_VideoPlayer_onPlayEventRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_video_VideoPlayer_onPlayEventRegistry(FunctionCallbackInfo *param_1)

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
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009807ec with catch @ 00980750
                       catch() { ... } // from try @ 00980834 with catch @ 00980750
                       catch() { ... } // from try @ 0098089c with catch @ 00980750
                       catch() { ... } // from try @ 009808d4 with catch @ 00980750 */
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  plVar4 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 0098082c to 00a80833 has its CatchHandler @ 009808e4 */
                    /* try { // try from 00980834 to 00a8086b has its CatchHandler @ 00980750 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                        ,0xde,"js_video_VideoPlayer_onPlayEvent");
    __android_log_print(6,"jswrapper","js_video_VideoPlayer_onPlayEvent : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
                    /* try { // try from 009807e4 to 00a807eb has its CatchHandler @ 009808d4 */
    uVar7 = puVar5[1] - (long)*puVar5;
                    /* try { // try from 009807ec to 00a8082b has its CatchHandler @ 00980750 */
    if (uVar7 == 0x10) {
      local_64 = 0;
      uVar7 = seval_to_int32((Value *)*puVar5,&local_64);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar4 + 0x58))(plVar4,local_64);
        goto LAB_009808f8;
      }
                    /* try { // try from 0098089c to 00a808cb has its CatchHandler @ 00980750 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                          ,0xe5,"js_video_VideoPlayer_onPlayEvent");
      __android_log_print(6,"jswrapper",
                          "js_video_VideoPlayer_onPlayEvent : Error processing arguments");
    }
    else {
                    /* try { // try from 0098086c to 00a8089b has its CatchHandler @ 009808e4 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp, 233): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar7 >> 4,1);
    }
  }
                    /* try { // try from 009808cc to 00a808d3 has its CatchHandler @ 009808d4 */
                    /* catch() { ... } // from try @ 009807e4 with catch @ 009808d4
                       catch() { ... } // from try @ 009808cc with catch @ 009808d4
                       try { // try from 009808d4 to 00a8091f has its CatchHandler @ 00980750 */
                    /* catch() { ... } // from try @ 0098082c with catch @ 009808e4
                       catch() { ... } // from try @ 0098086c with catch @ 009808e4 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_video_VideoPlayer_onPlayEvent",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                      ,0xec);
LAB_009808f8:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
                    /* try { // try from 00980960 to 00a80963 has its CatchHandler @ 00980a14 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

