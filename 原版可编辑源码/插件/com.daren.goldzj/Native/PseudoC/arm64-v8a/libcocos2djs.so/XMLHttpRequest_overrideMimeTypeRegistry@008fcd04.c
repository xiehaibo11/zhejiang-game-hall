
/* XMLHttpRequest_overrideMimeTypeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void XMLHttpRequest_overrideMimeTypeRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  Value *pVVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  ulong local_70;
  char *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::args(aSStack_60);
  if ((0 < (int)((ulong)(plVar6[1] - *plVar6) >> 4)) && (*(char *)(*plVar6 + 8) == '\x04')) {
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    seval_to_std_string((Value *)*plVar6,(basic_string *)&local_78);
    lVar7 = se::State::nativeThisObject(aSStack_60);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_78
        != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar7 + 0x228)) {
      uVar1 = local_78 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        uVar1 = local_70;
        pcVar3 = local_68;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar7 + 0x228),pcVar3,uVar1);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar4 = local_a8;
  pVVar8 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar8 != pVVar4) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a0 = pVVar4;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

