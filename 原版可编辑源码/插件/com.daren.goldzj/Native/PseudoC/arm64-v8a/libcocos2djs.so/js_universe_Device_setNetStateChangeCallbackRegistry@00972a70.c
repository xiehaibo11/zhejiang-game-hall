
/* js_universe_Device_setNetStateChangeCallbackRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_universe_Device_setNetStateChangeCallbackRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Value *pVVar5;
  Object *pOVar6;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  Isolate *pIVar10;
  Value *local_178;
  Value *local_170;
  undefined8 local_168;
  HandleScope aHStack_160 [24];
  State aSStack_148 [40];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_160,pIVar10);
  local_178 = (Value *)0x0;
  local_170 = (Value *)0x0;
  local_168 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_178,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_178);
  pvVar3 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00972afc to 00a72b03 has its CatchHandler @ 00972d1c */
  se::State::State(aSStack_148,pvVar3,(vector *)&local_178);
                    /* try { // try from 00972b04 to 00a72bd7 has its CatchHandler @ 009728d8 */
  puVar4 = (undefined8 *)se::State::args(aSStack_148);
  pVVar5 = (Value *)*puVar4;
  if (puVar4[1] - (long)pVVar5 != 0x10) {
                    /* try { // try from 00972c1c to 00a72c43 has its CatchHandler @ 00972d38 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1762): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
                    /* try { // try from 00972c4c to 00a72c5f has its CatchHandler @ 00972d34 */
                    /* try { // try from 00972c60 to 00a72cfb has its CatchHandler @ 009728d8 */
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_universe_Device_setNetStateChangeCallback",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x6e5);
    goto LAB_00972d14;
  }
  local_a0 = (long *)0x0;
  if (pVVar5[8] == (Value)0x5) {
    pOVar6 = (Object *)se::Value::toObject(pVVar5);
    uVar7 = se::Object::isFunction(pOVar6);
    plVar8 = local_a0;
    if ((uVar7 & 1) == 0) {
      local_a0 = (long *)0x0;
      if (alStack_c0 == plVar8) {
        pcVar9 = *(code **)(*plVar8 + 0x20);
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_00972ce0;
        pcVar9 = *(code **)(*plVar8 + 0x28);
      }
      (*pcVar9)();
    }
    else {
      pOVar6 = (Object *)se::State::thisObject(aSStack_148);
      se::Value::Value(aVStack_f0,pOVar6,false);
      se::Value::Value(aVStack_100,(Value *)*puVar4);
      pOVar6 = (Object *)se::Value::toObject(aVStack_100);
      se::Object::root(pOVar6);
      se::Value::Value(aVStack_120,aVStack_f0);
      se::Value::Value(aVStack_110,aVStack_100);
      se::Value::Value(aVStack_e0,aVStack_120);
      se::Value::Value(aVStack_d0,aVStack_110);
      local_70 = (long *)0x0;
      plVar8 = operator_new(0x28);
      *plVar8 = (long)&PTR_FUN_01c69ec8;
                    /* try { // try from 00972bd8 to 00a72bdf has its CatchHandler @ 00972d24 */
      se::Value::Value((Value *)(plVar8 + 1),aVStack_e0);
                    /* try { // try from 00972be0 to 00a72c1b has its CatchHandler @ 009728d8 */
      se::Value::Value((Value *)(plVar8 + 3),aVStack_d0);
      local_70 = plVar8;
      FUN_0097d81c(alStack_90,alStack_c0);
      if (alStack_90 == local_70) {
        pcVar9 = *(code **)(*local_70 + 0x20);
LAB_00972cac:
        (*pcVar9)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar9 = *(code **)(*local_70 + 0x28);
        goto LAB_00972cac;
      }
      se::Value::~Value(aVStack_d0);
      se::Value::~Value(aVStack_e0);
      se::Value::~Value(aVStack_110);
      se::Value::~Value(aVStack_120);
      se::Value::~Value(aVStack_100);
      se::Value::~Value(aVStack_f0);
    }
  }
  else {
    local_a0 = (long *)0x0;
  }
LAB_00972ce0:
  universe::Device::setNetStateChangeCallback((function *)alStack_c0);
  if (alStack_c0 == local_a0) {
                    /* try { // try from 00972d0c to 00a72d1b has its CatchHandler @ 00972d1c */
    pcVar9 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) goto LAB_00972d14;
                    /* try { // try from 00972cfc to 00a72d03 has its CatchHandler @ 00972d24 */
    pcVar9 = *(code **)(*local_a0 + 0x28);
                    /* try { // try from 00972d04 to 00a72d0b has its CatchHandler @ 00972d20 */
  }
  (*pcVar9)();
LAB_00972d14:
  pVVar5 = (Value *)se::State::rval(aSStack_148);
                    /* catch() { ... } // from try @ 00972afc with catch @ 00972d1c
                       catch() { ... } // from try @ 00972d0c with catch @ 00972d1c
                       try { // try from 00972d1c to 00a72d8b has its CatchHandler @ 009728d8 */
                    /* catch() { ... } // from try @ 00972a60 with catch @ 00972d20
                       catch() { ... } // from try @ 00972d04 with catch @ 00972d20 */
  se::internal::setReturnValue(pVVar5,param_1);
                    /* catch() { ... } // from try @ 00972bd8 with catch @ 00972d24
                       catch() { ... } // from try @ 00972cfc with catch @ 00972d24 */
  se::State::~State(aSStack_148);
  pVVar2 = local_178;
  pVVar5 = local_170;
  if (local_178 != (Value *)0x0) {
                    /* catch() { ... } // from try @ 00972c1c with catch @ 00972d38 */
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_170 = pVVar2;
    operator_delete(local_178);
  }
  v8::HandleScope::~HandleScope(aHStack_160);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00972d8c to 00a72e87 has its CatchHandler @ 00972d8c
                       catch() { ... } // from try @ 00972d8c with catch @ 00972d8c
                       catch() { ... } // from try @ 00972f88 with catch @ 00972d8c */
  return;
}

