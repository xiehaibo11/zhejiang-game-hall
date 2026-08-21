
void FUN_0152752c(undefined8 *param_1)

{
  Isolate *this;
  ManagedPtrDestructor *pMVar1;
  long lVar2;
  long lVar3;
  
  pMVar1 = (ManagedPtrDestructor *)param_1[1];
  v8::internal::Isolate::UnregisterManagedPtrDestructor((Isolate *)*param_1,pMVar1);
  lVar3 = *(long *)pMVar1;
  (**(code **)(pMVar1 + 0x20))(*(undefined8 *)(pMVar1 + 0x18));
  if (pMVar1 != (ManagedPtrDestructor *)0x0) {
    operator_delete(pMVar1);
  }
  this = (Isolate *)*param_1;
  lVar2 = *(long *)(this + 0x20) - lVar3;
  *(long *)(this + 0x20) = lVar2;
  if (0x2000000 < lVar2 - *(long *)(this + 0x30)) {
    v8::Isolate::CheckMemoryPressure(this);
  }
  if (lVar3 < 1) {
    if ((lVar3 != 0) && (*(long *)(this + 0x28) < lVar2)) {
      v8::Isolate::ReportExternalAllocationLimitReached(this);
      return;
    }
  }
  else if (0x4000000 < *(long *)(this + 0x28) - lVar3) {
    *(long *)(this + 0x28) = *(long *)(this + 0x28) - lVar3;
  }
  return;
}

