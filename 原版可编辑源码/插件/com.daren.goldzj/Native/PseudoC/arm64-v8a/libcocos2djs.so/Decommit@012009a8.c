
/* v8::internal::wasm::WasmCodeManager::Decommit(v8::base::AddressRegion) */

void v8::internal::wasm::WasmCodeManager::Decommit(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (FLAG_perf_prof == '\0') {
    plVar4 = (long *)GetPlatformPageAllocator();
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - param_3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2,param_3,0);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "allocator->SetPermissions(reinterpret_cast<void*>(region.begin()), region.size(), PageAllocator::kNoAccess)"
              );
    }
  }
  return;
}

