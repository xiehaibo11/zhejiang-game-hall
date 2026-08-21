
/* JSBCore_osRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSBCore_osRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar5);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar5,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_a0);
  se::Value::Value(aVStack_48);
  se::Value::setString(aVStack_48,"Android");
  pVVar4 = (Value *)se::State::rval(aSStack_70);
  se::Value::operator=(pVVar4,aVStack_48);
  se::Value::~Value(aVStack_48);
  pVVar4 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar4,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar4 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar4 != pVVar2) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

