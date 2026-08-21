
/* WARNING: Type propagation algorithm not settling */
/* js_universe_Device_Ymn_xhCallOCFuncRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_Ymn_xhCallOCFuncRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  Value *pVVar6;
  long lVar7;
  Isolate *pIVar8;
  void *pvVar9;
  ulong uVar10;
  Value *local_170;
  Value *local_168;
  undefined8 local_160;
  HandleScope aHStack_158 [24];
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  basic_string local_e0 [16];
  void *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  State aSStack_80 [48];
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_158,pIVar8);
  local_170 = (Value *)0x0;
  local_168 = (Value *)0x0;
  local_160 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_170,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_170);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_170);
  plVar5 = (long *)se::State::args(aSStack_80);
  if (plVar5[1] - *plVar5 != 0x30) {
                    /* try { // try from 00974718 to 00a74757 has its CatchHandler @ 00974a00 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1938): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,3);
                    /* try { // try from 00974758 to 00a74767 has its CatchHandler @ 009749fc */
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_universe_Device_Ymn_xhCallOCFunc",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x795);
    goto LAB_00974944;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = (void *)0x0;
                    /* try { // try from 009746bc to 00a746c3 has its CatchHandler @ 00974a00 */
  local_c8 = 0;
                    /* try { // try from 009746c4 to 00a74717 has its CatchHandler @ 0097457c */
  seval_to_std_string((Value *)*plVar5,(basic_string *)&local_98);
  seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_b0);
  seval_to_std_string((Value *)(*plVar5 + 0x20),(basic_string *)&local_c8);
  pvVar4 = local_88;
  uVar3 = uStack_90;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  if ((local_98 & 1) == 0) {
    local_f0 = local_88;
    uStack_f8 = uStack_90;
    local_100 = local_98;
  }
  else {
    if (0xffffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_90 < 0x17) {
      pvVar9 = (void *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)uStack_90 << 1);
      if (uStack_90 != 0) goto LAB_009747b4;
    }
    else {
      uVar10 = uStack_90 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar10);
      local_100 = uVar10 | 1;
      uStack_f8 = uVar3;
      local_f0 = pvVar9;
LAB_009747b4:
      memcpy(pvVar9,pvVar4,uVar3);
    }
    *(undefined1 *)((long)pvVar9 + uVar3) = 0;
  }
  pvVar4 = local_a0;
  uVar3 = uStack_a8;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = (void *)0x0;
  if ((local_b0 & 1) == 0) {
    local_110 = local_a0;
    uStack_118 = uStack_a8;
    local_120 = local_b0;
                    /* try { // try from 009747e8 to 00a748cb has its CatchHandler @ 00974a00 */
  }
  else {
    if (0xffffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_a8 < 0x17) {
      pvVar9 = (void *)((ulong)&local_120 | 1);
      local_120 = (ulong)(byte)((int)uStack_a8 << 1);
      if (uStack_a8 != 0) goto LAB_0097483c;
    }
    else {
      uVar10 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar10);
      local_120 = uVar10 | 1;
      uStack_118 = uVar3;
      local_110 = pvVar9;
LAB_0097483c:
      memcpy(pvVar9,pvVar4,uVar3);
    }
    *(undefined1 *)((long)pvVar9 + uVar3) = 0;
  }
  pvVar4 = local_b8;
  uVar3 = uStack_c0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = (void *)0x0;
  if ((local_c8 & 1) == 0) {
    local_130 = local_b8;
    uStack_138 = uStack_c0;
    local_140 = local_c8;
  }
  else {
    if (0xffffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00974a3c to 00a74ad3 has its CatchHandler @ 00974a3c
                       catch() { ... } // from try @ 00974a3c with catch @ 00974a3c
                       catch() { ... } // from try @ 00974b28 with catch @ 00974a3c */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_c0 < 0x17) {
      pvVar9 = (void *)((ulong)&local_140 | 1);
      local_140 = (ulong)(byte)((int)uStack_c0 << 1);
      if (uStack_c0 != 0) goto LAB_009748c4;
    }
    else {
      uVar10 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar10);
      local_140 = uVar10 | 1;
      uStack_138 = uVar3;
      local_130 = pvVar9;
LAB_009748c4:
                    /* try { // try from 009748cc to 00a749e3 has its CatchHandler @ 0097457c */
      memcpy(pvVar9,pvVar4,uVar3);
    }
    *(undefined1 *)((long)pvVar9 + uVar3) = 0;
  }
  xh::XhSdk::xhInvoke(local_e0,&local_100,&local_120,&local_140);
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_80);
  se::Value::setString(pVVar6,local_e0);
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
LAB_00974944:
  pVVar6 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_170;
  pVVar6 = local_168;
  if (local_170 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_168 = pVVar2;
                    /* try { // try from 009749ec to 00a74a3b has its CatchHandler @ 0097457c */
    operator_delete(local_170);
  }
  v8::HandleScope::~HandleScope(aHStack_158);
                    /* catch() { ... } // from try @ 009749e4 with catch @ 009749f8 */
                    /* catch() { ... } // from try @ 00974758 with catch @ 009749fc */
                    /* catch() { ... } // from try @ 009746bc with catch @ 00974a00
                       catch() { ... } // from try @ 00974718 with catch @ 00974a00
                       catch() { ... } // from try @ 009747e8 with catch @ 00974a00 */
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

