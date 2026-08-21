
/* v8::internal::StackGuard::InitThread(v8::internal::ExecutionAccess const&) */

void v8::internal::StackGuard::InitThread(ExecutionAccess *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)FLAG_stack_size;
  lVar1 = GetCurrentStackPosition();
  lVar1 = lVar1 + lVar2 * -0x400;
  *(long *)(param_1 + 8) = lVar1;
  *(long *)(param_1 + 0x10) = lVar1;
  *(long *)(param_1 + 0x18) = lVar1;
  *(long *)(param_1 + 0x20) = lVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = Isolate::FindOrAllocatePerThreadDataForThisThread(*(Isolate **)param_1);
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = *(long *)param_1;
    base::RecursiveMutex::Lock((RecursiveMutex *)(lVar2 + 0x9530));
    if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 8)) {
      *(long *)(param_1 + 0x18) = lVar1;
    }
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x10)) {
      *(long *)(param_1 + 0x20) = lVar1;
    }
    *(long *)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 0x10) = lVar1;
    base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar2 + 0x9530));
    return;
  }
  return;
}

