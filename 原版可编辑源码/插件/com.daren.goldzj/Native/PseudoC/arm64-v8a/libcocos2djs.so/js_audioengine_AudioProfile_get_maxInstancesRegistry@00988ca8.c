
/* js_audioengine_AudioProfile_get_maxInstancesRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioProfile_get_maxInstancesRegistry
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
  
                    /* try { // try from 00988cb8 to 00a88d27 has its CatchHandler @ 00988cb8
                       catch() { ... } // from try @ 00988cb8 with catch @ 00988cb8
                       catch() { ... } // from try @ 00988d90 with catch @ 00988cb8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_88,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
  se::State::State(aSStack_70,pvVar2);
  lVar3 = se::State::nativeThisObject(aSStack_70);
  if (lVar3 == 0) {
                    /* try { // try from 00988d60 to 00a88d63 has its CatchHandler @ 00988dc0 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x29,"js_audioengine_AudioProfile_get_maxInstances");
                    /* try { // try from 00988d84 to 00a88d8f has its CatchHandler @ 00988dbc */
                    /* try { // try from 00988d90 to 00a88dfb has its CatchHandler @ 00988cb8 */
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioProfile_get_maxInstances : Invalid Native Object");
                    /* catch() { ... } // from try @ 00988d84 with catch @ 00988dbc */
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_audioengine_AudioProfile_get_maxInstances",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x31);
  }
  else {
    se::Value::Value(aVStack_48);
                    /* try { // try from 00988d28 to 00a88d2f has its CatchHandler @ 00988dd8 */
                    /* try { // try from 00988d30 to 00a88d4b has its CatchHandler @ 00988de0 */
    uint32_to_seval(*(uint *)(lVar3 + 0x18),aVStack_48);
    pVVar4 = (Value *)se::State::rval(aSStack_70);
    se::Value::operator=(pVVar4,aVStack_48);
    se::Value::~Value(aVStack_48);
  }
                    /* catch() { ... } // from try @ 00988d60 with catch @ 00988dc0 */
  pVVar4 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_70);
                    /* catch() { ... } // from try @ 00988d28 with catch @ 00988dd8 */
  v8::HandleScope::~HandleScope(aHStack_88);
                    /* catch() { ... } // from try @ 00988d30 with catch @ 00988de0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00988dfc to 00a88eb3 has its CatchHandler @ 00988dfc
                       catch() { ... } // from try @ 00988dfc with catch @ 00988dfc
                       catch() { ... } // from try @ 00988f40 with catch @ 00988dfc
                       catch() { ... } // from try @ 00988fd8 with catch @ 00988dfc
                       catch() { ... } // from try @ 00989154 with catch @ 00988dfc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

