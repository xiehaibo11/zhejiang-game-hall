
void FUN_01249590(ErrorThrower *param_1)

{
  undefined8 *puVar1;
  Isolate *pIVar2;
  
  pIVar2 = *(Isolate **)param_1;
  if (*(int *)(pIVar2 + 0x2c20) == *(int *)(pIVar2 + 0xa8)) {
    if (((*(ulong *)(pIVar2 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(pIVar2 + 0x2bd8) != *(int *)(pIVar2 + 0x2c20))) {
      v8::internal::wasm::ErrorThrower::Reset(param_1);
      v8::internal::Isolate::OptionalRescheduleException(*(Isolate **)param_1,false);
    }
    else if (*(int *)(param_1 + 0x10) != 0) {
      puVar1 = (undefined8 *)v8::internal::wasm::ErrorThrower::Reify(param_1);
      v8::internal::Isolate::ScheduleThrow(pIVar2,*puVar1);
    }
  }
  else {
    v8::internal::wasm::ErrorThrower::Reset(param_1);
  }
  v8::internal::wasm::ErrorThrower::~ErrorThrower(param_1);
  return;
}

