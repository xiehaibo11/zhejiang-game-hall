
/* v8::internal::Managed<v8::internal::wasm::GlobalWasmCodeRef>::FromSharedPtr(v8::internal::Isolate*,
   unsigned long, std::__ndk1::shared_ptr<v8::internal::wasm::GlobalWasmCodeRef> const&) */

undefined8 *
v8::internal::Managed<v8::internal::wasm::GlobalWasmCodeRef>::FromSharedPtr
          (Isolate *param_1,ulong param_2,shared_ptr *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ManagedPtrDestructor *pMVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x20) + param_2;
  *(long *)(param_1 + 0x20) = lVar7;
  if (0x2000000 < lVar7 - *(long *)(param_1 + 0x30)) {
    v8::Isolate::CheckMemoryPressure((Isolate *)param_1);
  }
  if ((long)param_2 < 0) {
    if (0x4000000 < (long)(*(long *)(param_1 + 0x28) + param_2)) {
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_2;
    }
  }
  else if ((param_2 != 0) && (*(long *)(param_1 + 0x28) < lVar7)) {
    v8::Isolate::ReportExternalAllocationLimitReached((Isolate *)param_1);
  }
  pMVar4 = operator_new(0x30);
  puVar5 = operator_new(0x10);
  *puVar5 = *(undefined8 *)param_3;
  lVar7 = *(long *)(param_3 + 8);
  puVar5[1] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(ulong *)pMVar4 = param_2;
  *(undefined8 *)(pMVar4 + 8) = 0;
  *(undefined8 *)(pMVar4 + 0x10) = 0;
  *(undefined8 **)(pMVar4 + 0x18) = puVar5;
  *(code **)(pMVar4 + 0x20) = Destructor;
  *(undefined8 *)(pMVar4 + 0x28) = 0;
  puVar5 = (undefined8 *)Factory::NewForeign((Factory *)param_1,(ulong)pMVar4);
  uVar6 = GlobalHandles::Create(*(GlobalHandles **)(param_1 + 0x95e0),*puVar5);
  *(undefined8 *)(pMVar4 + 0x28) = uVar6;
  GlobalHandles::MakeWeak(uVar6,pMVar4,ManagedObjectFinalizer,0);
  Isolate::RegisterManagedPtrDestructor(param_1,pMVar4);
  return puVar5;
}

