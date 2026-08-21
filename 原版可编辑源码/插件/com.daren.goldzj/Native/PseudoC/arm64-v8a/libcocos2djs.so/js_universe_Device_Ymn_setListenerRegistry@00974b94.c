
/* js_universe_Device_Ymn_setListenerRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_Ymn_setListenerRegistry(FunctionCallbackInfo *param_1)

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
  Value *local_1d8;
  Value *local_1d0;
  undefined8 local_1c8;
  HandleScope aHStack_1c0 [24];
  State aSStack_1a8 [40];
  Value aVStack_180 [16];
  Value aVStack_170 [16];
  Value aVStack_160 [16];
  Value aVStack_150 [16];
  Value aVStack_140 [16];
  Value aVStack_130 [16];
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00974bbc to 00a74bcb has its CatchHandler @ 00974e2c */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_1c0,pIVar10);
  local_1d8 = (Value *)0x0;
  local_1d0 = (Value *)0x0;
  local_1c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_1d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_1d8);
                    /* try { // try from 00974c08 to 00a74c1b has its CatchHandler @ 00974dfc */
  pvVar3 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_1a8,pvVar3,(vector *)&local_1d8);
                    /* try { // try from 00974c28 to 00a74c2f has its CatchHandler @ 00974df8 */
  puVar4 = (undefined8 *)se::State::args(aSStack_1a8);
                    /* try { // try from 00974c34 to 00a74c3f has its CatchHandler @ 00974df4 */
  pVVar5 = (Value *)*puVar4;
  if (puVar4[1] - (long)pVVar5 != 0x10) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1991): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_universe_Device_Ymn_setListener",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x7ca);
    goto LAB_00974ea4;
  }
  local_a0 = (long *)0x0;
  if (pVVar5[8] == (Value)0x5) {
    pOVar6 = (Object *)se::Value::toObject(pVVar5);
    uVar7 = se::Object::isFunction(pOVar6);
    plVar8 = local_a0;
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 00974de4 to 00a74df3 has its CatchHandler @ 00974dfc */
      local_a0 = (long *)0x0;
      if (alStack_c0 == plVar8) {
        pcVar9 = *(code **)(*plVar8 + 0x20);
      }
      else {
                    /* catch() { ... } // from try @ 00974c34 with catch @ 00974df4
                       try { // try from 00974df4 to 00a74e4b has its CatchHandler @ 00974b44 */
        if (plVar8 == (long *)0x0) goto LAB_00974d90;
                    /* catch() { ... } // from try @ 00974c28 with catch @ 00974df8 */
                    /* catch() { ... } // from try @ 00974c08 with catch @ 00974dfc
                       catch() { ... } // from try @ 00974c74 with catch @ 00974dfc
                       catch() { ... } // from try @ 00974d1c with catch @ 00974dfc
                       catch() { ... } // from try @ 00974de4 with catch @ 00974dfc */
        pcVar9 = *(code **)(*plVar8 + 0x28);
      }
      (*pcVar9)();
    }
    else {
      pOVar6 = (Object *)se::State::thisObject(aSStack_1a8);
                    /* try { // try from 00974c74 to 00a74cb7 has its CatchHandler @ 00974dfc */
      se::Value::Value(aVStack_150,pOVar6,false);
      se::Value::Value(aVStack_160,(Value *)*puVar4);
      pOVar6 = (Object *)se::Value::toObject(aVStack_160);
      se::Object::root(pOVar6);
      se::Value::Value(aVStack_180,aVStack_150);
      se::Value::Value(aVStack_170,aVStack_160);
                    /* try { // try from 00974cb8 to 00a74d1b has its CatchHandler @ 00974b44 */
      se::Value::Value(aVStack_140,aVStack_180);
      se::Value::Value(aVStack_130,aVStack_170);
      local_70 = (long *)0x0;
      plVar8 = operator_new(0x28);
      *plVar8 = (long)&PTR_FUN_01c69f58;
      se::Value::Value((Value *)(plVar8 + 1),aVStack_140);
      se::Value::Value((Value *)(plVar8 + 3),aVStack_130);
      local_70 = plVar8;
                    /* try { // try from 00974d1c to 00a74da3 has its CatchHandler @ 00974dfc */
      FUN_0097b4bc(alStack_90,alStack_c0);
      if (alStack_90 == local_70) {
        pcVar9 = *(code **)(*local_70 + 0x20);
LAB_00974f4c:
        (*pcVar9)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar9 = *(code **)(*local_70 + 0x28);
        goto LAB_00974f4c;
      }
      se::Value::~Value(aVStack_130);
                    /* try { // try from 00974f58 to 00a74f6f has its CatchHandler @ 009751cc */
      se::Value::~Value(aVStack_140);
      se::Value::~Value(aVStack_170);
      se::Value::~Value(aVStack_180);
      se::Value::~Value(aVStack_160);
      se::Value::~Value(aVStack_150);
    }
    if (local_a0 == (long *)0x0) goto LAB_00974d90;
    if (alStack_c0 == local_a0) {
      local_100 = alStack_120;
      (**(code **)(*local_a0 + 0x18))(local_a0,alStack_120);
    }
    else {
      local_100 = (long *)(**(code **)(*local_a0 + 0x10))();
                    /* try { // try from 00974fa8 to 00a74fcb has its CatchHandler @ 00975158 */
    }
  }
  else {
    local_a0 = (long *)0x0;
LAB_00974d90:
    local_100 = (long *)0x0;
  }
  local_d0 = (long *)0x0;
  plVar8 = operator_new(0x40);
                    /* try { // try from 00974da4 to 00a74de3 has its CatchHandler @ 00974b44 */
  *plVar8 = (long)&PTR_FUN_01c69fd8;
  if (local_100 == (long *)0x0) {
    plVar8[6] = 0;
  }
  else if (alStack_120 == local_100) {
    plVar8[6] = (long)(plVar8 + 2);
    (**(code **)(*local_100 + 0x18))();
  }
  else {
    plVar8[6] = (long)local_100;
    local_100 = (long *)0x0;
  }
  local_d0 = plVar8;
  xh::XhSdk::setXhListener(alStack_f0);
                    /* catch() { ... } // from try @ 00974bbc with catch @ 00974e2c */
  if (alStack_f0 == local_d0) {
    pcVar9 = *(code **)(*local_d0 + 0x20);
LAB_00974e48:
    (*pcVar9)();
  }
  else {
                    /* catch() { ... } // from try @ 00974b84 with catch @ 00974e30 */
    if (local_d0 != (long *)0x0) {
      pcVar9 = *(code **)(*local_d0 + 0x28);
      goto LAB_00974e48;
    }
  }
  if (alStack_120 == local_100) {
    pcVar9 = *(code **)(*local_100 + 0x20);
LAB_00974e74:
    (*pcVar9)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar9 = *(code **)(*local_100 + 0x28);
    goto LAB_00974e74;
  }
  if (alStack_c0 == local_a0) {
    pcVar9 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) goto LAB_00974ea4;
    pcVar9 = *(code **)(*local_a0 + 0x28);
  }
  (*pcVar9)();
LAB_00974ea4:
  pVVar5 = (Value *)se::State::rval(aSStack_1a8);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_1a8);
  pVVar2 = local_1d8;
  pVVar5 = local_1d0;
  if (local_1d8 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_1d0 = pVVar2;
    operator_delete(local_1d8);
  }
  v8::HandleScope::~HandleScope(aHStack_1c0);
                    /* try { // try from 00974f0c to 00a74f57 has its CatchHandler @ 00974f0c
                       catch() { ... } // from try @ 00974f0c with catch @ 00974f0c
                       catch() { ... } // from try @ 009750b4 with catch @ 00974f0c */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

