
/* v8::internal::wasm::WasmCodeManager::Commit(v8::base::AddressRegion) */

undefined8
v8::internal::wasm::WasmCodeManager::Commit(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  if (FLAG_perf_prof == '\0') {
    plVar1 = param_1 + 1;
    lVar7 = *plVar1;
    if (param_3 <= (ulong)(*param_1 - lVar7)) {
LAB_012005e0:
      lVar8 = *plVar1;
      if (lVar8 != lVar7) {
        ClearExclusiveLocal();
LAB_012005cc:
        lVar7 = lVar8;
        if ((ulong)(*param_1 - lVar8) < param_3) goto LAB_01200638;
        goto LAB_012005e0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + param_3;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_012005cc;
      uVar6 = 2;
      if (FLAG_wasm_write_protect_code_memory == '\0') {
        uVar6 = 3;
      }
      uVar4 = GetPlatformPageAllocator();
      uVar5 = SetPermissions(uVar4,param_2,param_3,uVar6);
      if ((uVar5 & 1) != 0) goto LAB_0120059c;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
LAB_01200638:
    uVar4 = 0;
  }
  else {
LAB_0120059c:
    uVar4 = 1;
  }
  return uVar4;
}

