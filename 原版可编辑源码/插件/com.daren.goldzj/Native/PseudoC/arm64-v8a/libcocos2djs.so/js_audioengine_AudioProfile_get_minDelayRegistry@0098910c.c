
/* js_audioengine_AudioProfile_get_minDelayRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioProfile_get_minDelayRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 00989144 to 00a8914b has its CatchHandler @ 0098915c */
                    /* try { // try from 0098914c to 00a89153 has its CatchHandler @ 00989158 */
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
                    /* try { // try from 00989154 to 00a89197 has its CatchHandler @ 00988dfc */
  v8::HandleScope::HandleScope(aHStack_88,pIVar5);
                    /* catch() { ... } // from try @ 0098914c with catch @ 00989158 */
                    /* catch() { ... } // from try @ 00989144 with catch @ 0098915c */
                    /* catch() { ... } // from try @ 00988eb4 with catch @ 00989160 */
                    /* catch() { ... } // from try @ 00988fd0 with catch @ 00989164 */
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
                    /* catch() { ... } // from try @ 00988f38 with catch @ 00989168 */
                    /* catch() { ... } // from try @ 009890b0 with catch @ 0098916c */
  se::State::State(aSStack_70,pvVar2);
  lVar3 = se::State::nativeThisObject(aSStack_70);
  if (lVar3 == 0) {
                    /* try { // try from 009891d0 to 00a891d7 has its CatchHandler @ 00989260 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x45,"js_audioengine_AudioProfile_get_minDelay");
                    /* try { // try from 009891e0 to 00a891e3 has its CatchHandler @ 00989250 */
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioProfile_get_minDelay : Invalid Native Object");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_audioengine_AudioProfile_get_minDelay",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x4d);
  }
  else {
                    /* catch() { ... } // from try @ 00988eec with catch @ 00989184
                       catch() { ... } // from try @ 009890ec with catch @ 00989184 */
    se::Value::Value(aVStack_48);
    double_to_seval(*(double *)(lVar3 + 0x20),aVStack_48);
    pVVar4 = (Value *)se::State::rval(aSStack_70);
    se::Value::operator=(pVVar4,aVStack_48);
    se::Value::~Value(aVStack_48);
  }
  pVVar4 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_70);
  v8::HandleScope::~HandleScope(aHStack_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009891e0 with catch @ 00989250
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009891d0 with catch @ 00989260
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

