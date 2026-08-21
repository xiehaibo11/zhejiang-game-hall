
/* js_audioengine_AudioProfile_set_minDelayRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void js_audioengine_AudioProfile_set_minDelayRegistry
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  double local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009892c8 to 00a89337 has its CatchHandler @ 009892c8
                       catch() { ... } // from try @ 009892c8 with catch @ 009892c8
                       catch() { ... } // from try @ 009893f8 with catch @ 009892c8 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_90,pIVar8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar8,param_2,aVStack_48);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
                    /* try { // try from 00989338 to 00a8933f has its CatchHandler @ 00989408 */
  if (local_a0 < local_98) {
    se::Value::Value(local_a0,aVStack_48);
    local_a0 = local_a0 + 0x10;
  }
  else {
                    /* try { // try from 0098935c to 00a89373 has its CatchHandler @ 00989404 */
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,aVStack_48);
  }
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  puVar5 = (undefined8 *)se::State::args(aSStack_70);
  lVar6 = se::State::nativeThisObject(aSStack_70);
  if (lVar6 == 0) {
                    /* try { // try from 009893d0 to 00a893f7 has its CatchHandler @ 00989400 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x53,"js_audioengine_AudioProfile_set_minDelay");
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioProfile_set_minDelay : Invalid Native Object");
  }
  else {
    local_78 = 0.0;
    uVar7 = seval_to_double((Value *)*puVar5,&local_78);
    if ((uVar7 & 1) != 0) {
      *(double *)(lVar6 + 0x20) = local_78;
      goto LAB_00989468;
    }
                    /* try { // try from 009893f8 to 00a8941b has its CatchHandler @ 009892c8 */
                    /* catch() { ... } // from try @ 009893d0 with catch @ 00989400 */
                    /* catch() { ... } // from try @ 0098935c with catch @ 00989404 */
                    /* catch() { ... } // from try @ 00989338 with catch @ 00989408 */
                    /* try { // try from 0098941c to 00a89483 has its CatchHandler @ 0098941c
                       catch() { ... } // from try @ 0098941c with catch @ 0098941c
                       catch() { ... } // from try @ 0098954c with catch @ 0098941c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x58,"js_audioengine_AudioProfile_set_minDelay");
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioProfile_set_minDelay : Error processing new value");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioProfile_set_minDelay",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x5c);
LAB_00989468:
  se::State::~State(aSStack_70);
  pVVar3 = local_a8;
  pVVar2 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
                    /* try { // try from 00989484 to 00a8948b has its CatchHandler @ 00989560 */
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_a0 = pVVar3;
                    /* try { // try from 009894a8 to 00a89517 has its CatchHandler @ 0098955c */
    operator_delete(local_a8);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

