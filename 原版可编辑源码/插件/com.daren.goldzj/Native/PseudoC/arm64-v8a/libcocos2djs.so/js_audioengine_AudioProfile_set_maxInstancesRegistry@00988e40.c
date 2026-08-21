
/* js_audioengine_AudioProfile_set_maxInstancesRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void js_audioengine_AudioProfile_set_maxInstancesRegistry
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
  HandleScope aHStack_90 [28];
  uint local_74;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_90,pIVar8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
                    /* try { // try from 00988eb4 to 00a88ec3 has its CatchHandler @ 00989160 */
  se::internal::jsToSeValue(pIVar8,param_2,aVStack_48);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  if (local_a0 < local_98) {
    se::Value::Value(local_a0,aVStack_48);
    local_a0 = local_a0 + 0x10;
                    /* try { // try from 00988eec to 00a88ef3 has its CatchHandler @ 00989184 */
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,aVStack_48);
  }
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  puVar5 = (undefined8 *)se::State::args(aSStack_70);
  lVar6 = se::State::nativeThisObject(aSStack_70);
  if (lVar6 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x37,"js_audioengine_AudioProfile_set_maxInstances");
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioProfile_set_maxInstances : Invalid Native Object");
  }
  else {
    local_74 = 0;
                    /* try { // try from 00988f38 to 00a88f3f has its CatchHandler @ 00989168 */
    uVar7 = seval_to_uint32((Value *)*puVar5,&local_74);
    if ((uVar7 & 1) != 0) {
                    /* try { // try from 00988f40 to 00a88fcf has its CatchHandler @ 00988dfc */
      *(uint *)(lVar6 + 0x18) = local_74;
      goto LAB_00989004;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x3c,"js_audioengine_AudioProfile_set_maxInstances");
                    /* try { // try from 00988fd0 to 00a88fd7 has its CatchHandler @ 00989164 */
    __android_log_print(6,"jswrapper",
                        "js_audioengine_AudioProfile_set_maxInstances : Error processing new value")
    ;
  }
                    /* try { // try from 00988fd8 to 00a890af has its CatchHandler @ 00988dfc */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioProfile_set_maxInstances",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x40);
LAB_00989004:
  se::State::~State(aSStack_70);
  pVVar3 = local_a8;
  pVVar2 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_a0 = pVVar3;
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

