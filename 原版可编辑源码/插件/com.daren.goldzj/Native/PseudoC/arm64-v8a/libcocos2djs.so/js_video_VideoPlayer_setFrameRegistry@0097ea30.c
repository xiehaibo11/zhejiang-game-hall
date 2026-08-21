
/* js_video_VideoPlayer_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_video_VideoPlayer_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar12);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
                    /* try { // try from 0097ea90 to 00a7ea9b has its CatchHandler @ 0097eb04 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
                    /* try { // try from 0097eaa4 to 00a7eac3 has its CatchHandler @ 0097eb08 */
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_c0);
                    /* try { // try from 0097eac4 to 00a7eb2b has its CatchHandler @ 0097e9a4 */
  plVar8 = (long *)se::State::nativeThisObject(aSStack_80);
  if (plVar8 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                        ,0xd,"js_video_VideoPlayer_setFrame");
    __android_log_print(6,"jswrapper","js_video_VideoPlayer_setFrame : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_80);
    uVar11 = plVar9[1] - *plVar9;
    if (uVar11 == 0x40) {
      local_90 = 0;
      local_88 = 0;
      uVar3 = seval_to_float((Value *)*plVar9,(float *)((long)&local_88 + 4));
                    /* catch() { ... } // from try @ 0097ea90 with catch @ 0097eb04 */
                    /* catch() { ... } // from try @ 0097eaa4 with catch @ 0097eb08 */
                    /* catch() { ... } // from try @ 0097e9ec with catch @ 0097eb0c */
                    /* catch() { ... } // from try @ 0097ea24 with catch @ 0097eb10 */
      uVar4 = seval_to_float((Value *)(*plVar9 + 0x10),(float *)&local_88);
      uVar5 = seval_to_float((Value *)(*plVar9 + 0x20),(float *)((long)&local_90 + 4));
      uVar6 = seval_to_float((Value *)(*plVar9 + 0x30),(float *)&local_90);
      if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
        (**(code **)(*plVar8 + 0x68))
                  (local_88._4_4_,(float)local_88,local_90._4_4_,(float)local_90,plVar8);
        goto LAB_0097ec44;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                          ,0x1a,"js_video_VideoPlayer_setFrame");
      __android_log_print(6,"jswrapper","js_video_VideoPlayer_setFrame : Error processing arguments"
                         );
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp, 30): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar11 >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_video_VideoPlayer_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                      ,0x21);
LAB_0097ec44:
                    /* try { // try from 0097ec44 to 00a7ec83 has its CatchHandler @ 0097ec44
                       catch() { ... } // from try @ 0097ec44 with catch @ 0097ec44
                       catch() { ... } // from try @ 0097ecb0 with catch @ 0097ec44 */
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar10 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
                    /* try { // try from 0097eca4 to 00a7ecaf has its CatchHandler @ 0097ecec */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0097ecb0 to 00a7ed03 has its CatchHandler @ 0097ec44 */
  return;
}

