
/* v8::internal::wasm::WasmCodeManager::TryAllocate(unsigned long, void*) */

void v8::internal::wasm::WasmCodeManager::TryAllocate(ulong param_1,void *param_2)

{
  PageAllocator *pPVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *in_x2;
  undefined8 *in_x8;
  ulong uVar5;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  pPVar1 = (PageAllocator *)GetPlatformPageAllocator();
  uVar2 = (**(code **)(*(long *)pPVar1 + 0x10))();
  uVar5 = (long)param_2 + (uVar2 - 1) & -uVar2;
  uVar3 = BackingStore::ReserveAddressSpace(uVar5);
  if ((uVar3 & 1) == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    if (in_x2 == (void *)0x0) {
      in_x2 = (void *)(**(code **)(*(long *)pPVar1 + 0x28))(pPVar1);
    }
    VirtualMemory::VirtualMemory((VirtualMemory *)&local_58,pPVar1,uVar5,in_x2,uVar2);
    if (local_50 == 0) {
      BackingStore::ReleaseReservation(uVar5);
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
    }
    else {
      if (FLAG_perf_prof != '\0') {
        uVar4 = GetPlatformPageAllocator();
        SetPermissions(uVar4,local_50,uStack_48,3);
      }
      *in_x8 = local_58;
      in_x8[2] = uStack_48;
      in_x8[1] = local_50;
      VirtualMemory::Reset((VirtualMemory *)&local_58);
    }
    VirtualMemory::~VirtualMemory((VirtualMemory *)&local_58);
  }
  return;
}

