
/* v8::internal::wasm::WasmCodeAllocator::FreeCode(v8::internal::Vector<v8::internal::wasm::WasmCode*
   const>) */

void v8::internal::wasm::WasmCodeAllocator::FreeCode(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long ****pppplVar15;
  undefined8 *puVar16;
  long ****pppplVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  long ***local_b8;
  long ***local_b0;
  long local_a8;
  ulong local_a0;
  long lStack_98;
  ulong *local_90;
  long *plStack_88;
  long *local_80;
  ulong local_78;
  long lStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  local_b8 = (long ***)&local_b8;
  local_a8 = 0;
  local_b0 = local_b8;
  if (param_3 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    param_3 = param_3 << 3;
    do {
      puVar16 = (undefined8 *)*param_2;
      memset((void *)*puVar16,0xcc,puVar16[1]);
      FlushInstructionCache((void *)*puVar16,puVar16[1]);
      lVar14 = puVar16[1] + lVar14;
      DisjointAllocationPool::Merge(&local_b8,*puVar16);
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  plVar8 = param_1 + 0x14;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = *plVar8 + lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  base::Mutex::Lock((Mutex *)(param_1 + 1));
  plVar8 = (long *)GetPlatformPageAllocator();
  lVar14 = (**(code **)(*plVar8 + 0x18))();
  if (&local_b8 != (long ****)local_b0) {
    uVar19 = -lVar14;
    plVar8 = param_1 + 0x12;
    pppplVar17 = (long ****)local_b0;
    do {
      ppplVar2 = pppplVar17[2];
      ppplVar3 = pppplVar17[3];
      auVar20 = DisjointAllocationPool::Merge(param_1 + 0xc,ppplVar2,ppplVar3);
      uVar11 = lVar14 + -1 + auVar20._0_8_ & uVar19;
      uVar12 = auVar20._8_8_ + auVar20._0_8_ & uVar19;
      uVar13 = lVar14 + -1 + (long)ppplVar2 + (long)ppplVar3 & uVar19;
      uVar10 = (ulong)ppplVar2 & uVar19;
      if (((ulong)ppplVar2 & uVar19) <= uVar11) {
        uVar10 = uVar11;
      }
      if (uVar12 <= uVar13) {
        uVar13 = uVar12;
      }
      lVar6 = uVar13 - uVar10;
      if (uVar10 <= uVar13 && lVar6 != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 - lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_a0 = uVar10;
        lStack_98 = lVar6;
        local_90 = &local_78;
        plStack_88 = &local_68;
        local_80 = &local_68;
        local_78 = uVar10;
        lStack_70 = lVar6;
        if (FLAG_perf_prof == '\0') {
          lVar18 = *param_1;
          plVar9 = (long *)GetPlatformPageAllocator();
          plVar1 = (long *)(lVar18 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 - lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar10 = (**(code **)(*plVar9 + 0x48))(plVar9,uVar10,lVar6,0);
          if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "allocator->SetPermissions(reinterpret_cast<void*>(region.begin()), region.size(), PageAllocator::kNoAccess)"
                    );
          }
          if (local_90 != &local_78) {
            free(local_90);
          }
        }
      }
      pppplVar17 = (long ****)pppplVar17[1];
    } while (&local_b8 != pppplVar17);
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 1));
  if (local_a8 != 0) {
    (*local_b0)[1] = (long *)local_b8[1];
    *local_b8[1] = (long *)*local_b0;
    local_a8 = 0;
    pppplVar17 = (long ****)local_b0;
    while (pppplVar17 != &local_b8) {
      pppplVar15 = (long ****)pppplVar17[1];
      operator_delete(pppplVar17);
      pppplVar17 = pppplVar15;
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

