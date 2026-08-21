
/* js_audioengine_AudioProfile_set_nameRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void js_audioengine_AudioProfile_set_nameRegistry
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  char *pcVar2;
  Value *pVVar3;
  Value *pVVar4;
  void *pvVar5;
  undefined8 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  ulong uVar7;
  bool bVar8;
  Isolate *pIVar9;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  ulong local_80;
  char *local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
                    /* try { // try from 00988984 to 00a889fb has its CatchHandler @ 0098887c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar9);
                    /* catch() { ... } // from try @ 0098892c with catch @ 009889cc */
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
                    /* catch() { ... } // from try @ 0098894c with catch @ 009889e8 */
  se::internal::jsToSeValue(pIVar9,param_2,aVStack_48);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  if (local_b0 < local_a8) {
    se::Value::Value(local_b0,aVStack_48);
    local_b0 = local_b0 + 0x10;
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,aVStack_48);
  }
  se::State::State(aSStack_70,pvVar5,(vector *)&local_b8);
  puVar6 = (undefined8 *)se::State::args(aSStack_70);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         se::State::nativeThisObject(aSStack_70);
  if (this == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
  {
                    /* try { // try from 00988ae8 to 00a88aef has its CatchHandler @ 00988ba8 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                        ,0x1b,"js_audioengine_AudioProfile_set_name");
                    /* try { // try from 00988af0 to 00a88b2b has its CatchHandler @ 00988aa4 */
    __android_log_print(6,"jswrapper","js_audioengine_AudioProfile_set_name : Invalid Native Object"
                       );
  }
  else {
    local_80 = 0;
    local_78 = (char *)0x0;
    local_88 = 0;
    uVar7 = seval_to_std_string((Value *)*puVar6,(basic_string *)&local_88);
    if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00988b2c with catch @ 00988b94 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                          ,0x20,"js_audioengine_AudioProfile_set_name");
                    /* catch() { ... } // from try @ 00988ae8 with catch @ 00988ba8 */
      __android_log_print(6,"jswrapper",
                          "js_audioengine_AudioProfile_set_name : Error processing new value");
      bVar8 = false;
    }
    else {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_88 != this) {
        uVar7 = local_88 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          uVar7 = local_80;
          pcVar2 = local_78;
        }
                    /* catch() { ... } // from try @ 00988af0 with catch @ 00988aa4
                       catch() { ... } // from try @ 00988b38 with catch @ 00988aa4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this,pcVar2,uVar7);
      }
      bVar8 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar8) goto LAB_00988b34;
  }
                    /* try { // try from 00988b2c to 00a88b37 has its CatchHandler @ 00988b94 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioProfile_set_name",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x24);
LAB_00988b34:
                    /* try { // try from 00988b38 to 00a88bc3 has its CatchHandler @ 00988aa4 */
  se::State::~State(aSStack_70);
  pVVar4 = local_b8;
  pVVar3 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
                    /* try { // try from 00988bc4 to 00a88bf7 has its CatchHandler @ 00988bc4
                       catch() { ... } // from try @ 00988bc4 with catch @ 00988bc4
                       catch() { ... } // from try @ 00988c04 with catch @ 00988bc4 */
    local_b0 = pVVar4;
    operator_delete(local_b8);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00988bf8 to 00a88c03 has its CatchHandler @ 00988c4c */
  return;
}

