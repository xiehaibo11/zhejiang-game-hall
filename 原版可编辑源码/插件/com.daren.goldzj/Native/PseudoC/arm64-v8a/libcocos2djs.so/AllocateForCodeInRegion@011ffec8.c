
/* v8::internal::wasm::WasmCodeAllocator::AllocateForCodeInRegion(v8::internal::wasm::NativeModule*,
   unsigned long, v8::base::AddressRegion, v8::internal::wasm::WasmCodeAllocator::OptionalLock
   const&) */

undefined1  [16]
v8::internal::wasm::WasmCodeAllocator::AllocateForCodeInRegion
          (long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,long **param_6)

{
  long **pplVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined4 uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 auVar30 [16];
  long *local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong *local_90;
  long *local_88;
  long *plStack_80;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_a8 = (long *)0x0;
  plVar15 = *param_6;
  if (plVar15 == (long *)0x0) {
    local_a8 = param_1;
    base::Mutex::Lock((Mutex *)(param_1 + 1));
    plVar15 = *param_6;
    plVar18 = param_1;
  }
  else {
    plVar18 = (long *)0x0;
  }
  pplVar1 = &local_a8;
  if (plVar15 != (long *)0x0) {
    pplVar1 = param_6;
  }
  plVar9 = (long *)GetPlatformPageAllocator();
  uVar24 = param_3 + 0x1fU & 0xffffffffffffffe0;
  plVar15 = param_1 + 6;
  auVar30 = DisjointAllocationPool::AllocateInRegion(plVar15,uVar24,param_4,param_5);
  if (auVar30._8_8_ == 0) {
    if ((param_5 != -1) || (*(char *)((long)param_1 + 0xa9) == '\0')) {
      pcVar13 = "wasm code reservation in region";
      if (param_5 == -1) {
        pcVar13 = "wasm code reservation";
      }
      goto LAB_01200334;
    }
    lVar11 = param_1[0xf];
    lVar16 = param_1[0x10];
    if (lVar11 == lVar16) {
      uVar17 = 0;
    }
    else {
      uVar20 = ((lVar16 - lVar11) - 0x18U) / 0x18;
      uVar17 = uVar20 + 1;
      if (uVar17 < 5) {
        uVar17 = 0;
      }
      else {
        uVar19 = 4;
        if ((uVar17 & 3) != 0) {
          uVar19 = uVar17 & 3;
        }
        plVar21 = (long *)(lVar11 + 0x40);
        lVar25 = 0;
        lVar26 = 0;
        lVar11 = lVar11 + (uVar17 - uVar19) * 0x18;
        lVar22 = (uVar20 - uVar19) + 1;
        lVar27 = 0;
        lVar28 = 0;
        do {
          plVar23 = plVar21 + -6;
          lVar29 = *plVar21;
          plVar7 = plVar21 + 3;
          plVar8 = plVar21 + -3;
          lVar22 = lVar22 + -4;
          plVar21 = plVar21 + 0xc;
          lVar27 = lVar29 + lVar27;
          lVar28 = *plVar7 + lVar28;
          lVar25 = *plVar23 + lVar25;
          lVar26 = *plVar8 + lVar26;
        } while (lVar22 != 0);
        uVar17 = lVar27 + lVar25 + lVar28 + lVar26;
      }
      do {
        plVar21 = (long *)(lVar11 + 0x10);
        lVar11 = lVar11 + 0x18;
        uVar17 = *plVar21 + uVar17;
      } while (lVar16 != lVar11);
      uVar17 = uVar17 >> 2;
    }
    iVar3 = *(int *)(*(long *)(param_2 + 200) + 0x44);
    uVar20 = 0x220;
    if (FLAG_wasm_far_jump_table != '\0') {
      uVar20 = (ulong)(iVar3 * 0x10 + 0x22fU & 0xffffffe0);
    }
    lVar11 = uVar20 + (iVar3 * 4 + 0x1fU & 0xffffffe0);
    uVar20 = lVar11 + uVar24;
    uVar19 = lVar11 * 2;
    if (uVar19 <= uVar20) {
      uVar19 = uVar20;
    }
    if (uVar17 <= uVar19) {
      uVar17 = uVar19;
    }
    pvVar10 = (void *)base::bits::RoundUpToPowerOfTwo64(uVar17);
    pvVar2 = pvVar10;
    if ((ulong)pvVar10 >> 0x1b != 0) {
      pvVar2 = (void *)0x8000000;
    }
    WasmCodeManager::TryAllocate((ulong)pvVar10,pvVar2);
    plVar7 = plStack_80;
    plVar21 = local_88;
    if (local_88 == (long *)0x0) {
      pcVar13 = "wasm code reservation";
      goto LAB_01200334;
    }
    WasmCodeManager::AssignRange(*param_1,local_88,plStack_80,param_2);
    DisjointAllocationPool::Merge(plVar15,plVar21,plVar7);
    plVar8 = (long *)param_1[0x10];
    if (plVar8 < (long *)param_1[0x11]) {
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)local_90;
      plVar8[2] = (long)plStack_80;
      plVar8[1] = (long)local_88;
      VirtualMemory::Reset((VirtualMemory *)&local_90);
      param_1[0x10] = param_1[0x10] + 0x18;
    }
    else {
      std::__ndk1::
      vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>::
      __emplace_back_slow_path<v8::internal::VirtualMemory>
                ((vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>
                  *)(param_1 + 0xf),(VirtualMemory *)&local_90);
    }
    NativeModule::AddCodeSpace(param_2,plVar21,plVar7,pplVar1);
    auVar30 = DisjointAllocationPool::AllocateInRegion(plVar15,uVar24,0,0xffffffffffffffff);
    Histogram::AddSample((int)param_1[0x16] + 0x828);
    VirtualMemory::~VirtualMemory((VirtualMemory *)&local_90);
  }
  lVar22 = auVar30._8_8_;
  lVar11 = (**(code **)(*plVar9 + 0x18))(plVar9);
  lVar16 = auVar30._0_8_ + -1;
  uVar17 = lVar16 + lVar11 & -lVar11;
  uVar20 = lVar16 + lVar22 + lVar11 & -lVar11;
  uVar24 = uVar20 - uVar17;
  if (uVar17 <= uVar20 && uVar24 != 0) {
    plVar15 = param_1 + 0x12;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + uVar24;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_88 = &local_68;
    local_a0 = uVar17;
    uStack_98 = uVar24;
    local_90 = &local_78;
    plStack_80 = local_88;
    local_78 = uVar17;
    uStack_70 = uVar24;
    if (FLAG_perf_prof == '\0') {
      plVar18 = (long *)*param_1;
      plVar15 = plVar18 + 1;
      uVar20 = *plVar18 - *plVar15;
      lVar11 = *plVar15;
joined_r0x01200234:
      if (uVar20 < uVar24) goto LAB_0120032c;
      lVar16 = *plVar15;
      if (lVar16 == lVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar11 + uVar24;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          uVar14 = 2;
          if (FLAG_wasm_write_protect_code_memory == '\0') {
            uVar14 = 3;
          }
          uVar12 = GetPlatformPageAllocator();
          uVar17 = SetPermissions(uVar12,uVar17,uVar24,uVar14);
          if ((uVar17 & 1) != 0) goto LAB_0120029c;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = *plVar15 - uVar24;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_0120032c:
          pcVar13 = "wasm code commit";
LAB_01200334:
                    /* WARNING: Subroutine does not return */
          V8::FatalProcessOutOfMemory((Isolate *)0x0,pcVar13,false);
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar20 = *plVar18 - lVar16;
      lVar11 = lVar16;
      goto joined_r0x01200234;
    }
LAB_0120029c:
    plVar18 = local_a8;
    if (local_90 != &local_78) {
      free(local_90);
      plVar18 = local_a8;
    }
  }
  DisjointAllocationPool::Merge(param_1 + 9,auVar30._0_8_,lVar22);
  param_1 = param_1 + 0x13;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = *param_1 + lVar22;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (plVar18 != (long *)0x0) {
    base::Mutex::Unlock((Mutex *)(plVar18 + 1));
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return auVar30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

