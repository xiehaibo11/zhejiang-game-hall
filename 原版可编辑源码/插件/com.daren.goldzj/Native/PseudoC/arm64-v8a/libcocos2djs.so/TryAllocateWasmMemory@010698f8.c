
/* WARNING: Removing unreachable block (ram,0x01069984) */
/* v8::internal::BackingStore::TryAllocateWasmMemory(v8::internal::Isolate*, unsigned long, unsigned
   long, v8::internal::SharedFlag) */

void __thiscall
v8::internal::BackingStore::TryAllocateWasmMemory
          (undefined8 *param_1_00,BackingStore *this,long param_1,ulong param_2,char param_5)

{
  Heap *pHVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  code *pcVar11;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined **local_a0;
  long *local_98;
  long *local_90;
  undefined ***local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0) {
    param_2 = 1;
  }
  uVar5 = wasm::max_mem_pages();
  if ((uVar5 & 0xffffffff) <= param_2) {
    param_2 = uVar5 & 0xffffffff;
  }
  local_98 = &local_a8;
  local_80 = &local_a0;
  local_a8 = 0x280000000;
  local_a0 = &PTR_FUN_01cb2560;
  do {
    if ((0x10100000000 < DAT_01d3f5f0) || (0x10100000000 - DAT_01d3f5f0 < 0x280000000)) {
      pHVar1 = (Heap *)(this + 0x8850);
      Heap::MemoryPressureNotification(pHVar1,2,1);
      if (local_80 == (undefined ***)0x0) goto LAB_01069d68;
      uVar5 = (*(code *)(*local_80)[6])();
      if ((uVar5 & 1) == 0) {
        Heap::MemoryPressureNotification(pHVar1,2,1);
        if (local_80 == (undefined ***)0x0) goto LAB_01069d68;
        uVar5 = (*(code *)(*local_80)[6])();
        if ((uVar5 & 1) == 0) {
          Heap::MemoryPressureNotification(pHVar1,2,1);
          bVar3 = false;
          goto LAB_01069a40;
        }
      }
      bVar3 = true;
      goto LAB_01069a40;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x1d3f5f0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_01d3f5f0 = DAT_01d3f5f0 + 0x280000000;
    }
  } while (cVar2 != '\0');
  bVar3 = true;
LAB_01069a40:
  if (&local_a0 == local_80) {
    pcVar11 = (code *)(*local_80)[4];
LAB_01069a68:
    (*pcVar11)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar11 = (code *)(*local_80)[5];
    goto LAB_01069a68;
  }
  if (bVar3) {
    local_98 = &local_b0;
    local_90 = &local_a8;
    local_b0 = 0;
    local_a0 = &PTR_FUN_01cb25a8;
    local_80 = &local_a0;
    uVar6 = GetPlatformPageAllocator();
    lVar7 = AllocatePages(uVar6,0,*local_90,0x10000,0);
    *local_98 = lVar7;
    if (*local_98 == 0) {
      pHVar1 = (Heap *)(this + 0x8850);
      Heap::MemoryPressureNotification(pHVar1,2,1);
      if (local_80 == (undefined ***)0x0) goto LAB_01069d68;
      uVar5 = (*(code *)(*local_80)[6])();
      if ((uVar5 & 1) == 0) {
        Heap::MemoryPressureNotification(pHVar1,2,1);
        if (local_80 == (undefined ***)0x0) goto LAB_01069d68;
        uVar5 = (*(code *)(*local_80)[6])();
        if ((uVar5 & 1) == 0) {
          Heap::MemoryPressureNotification(pHVar1,2,1);
          bVar3 = false;
          goto LAB_01069b68;
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
LAB_01069b68:
    if (&local_a0 == local_80) {
      pcVar11 = (code *)(*local_80)[4];
LAB_01069b8c:
      (*pcVar11)();
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar11 = (code *)(*local_80)[5];
      goto LAB_01069b8c;
    }
    if (bVar3) {
      local_c0 = param_1 << 0x10;
      local_b8 = local_b0 + 0x80000000;
      local_a0 = &PTR_FUN_01cb25f0;
      local_98 = &local_c0;
      local_80 = &local_a0;
      local_90 = &local_b8;
      if (local_c0 == 0) {
        bVar3 = true;
LAB_01069c30:
        pcVar11 = (code *)(*local_80)[4];
LAB_01069cd0:
        (*pcVar11)();
      }
      else {
        uVar6 = GetPlatformPageAllocator();
        uVar5 = SetPermissions(uVar6,*local_90,*local_98,2);
        if ((uVar5 & 1) == 0) {
          pHVar1 = (Heap *)(this + 0x8850);
          Heap::MemoryPressureNotification(pHVar1,2,1);
          if (local_80 == (undefined ***)0x0) {
LAB_01069d68:
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
          uVar5 = (*(code *)(*local_80)[6])();
          if ((uVar5 & 1) == 0) {
            Heap::MemoryPressureNotification(pHVar1,2,1);
            if (local_80 == (undefined ***)0x0) goto LAB_01069d68;
            uVar5 = (*(code *)(*local_80)[6])();
            if ((uVar5 & 1) == 0) {
              Heap::MemoryPressureNotification(pHVar1,2,1);
              bVar3 = false;
              goto LAB_01069cb8;
            }
          }
          bVar3 = true;
        }
        else {
          bVar3 = true;
        }
LAB_01069cb8:
        if (&local_a0 == local_80) goto LAB_01069c30;
        if (local_80 != (undefined ***)0x0) {
          pcVar11 = (code *)(*local_80)[5];
          goto LAB_01069cd0;
        }
      }
      if (!bVar3) {
                    /* WARNING: Subroutine does not return */
        V8::FatalProcessOutOfMemory((Isolate *)0x0,"BackingStore::AllocateWasmMemory()",false);
      }
      Histogram::AddSample((int)*(undefined8 *)(this + 0x9520) + 0x6e8);
      plVar8 = operator_new(0x30);
      plVar8[2] = param_2 << 0x10;
      plVar8[3] = 0;
      *plVar8 = local_b8;
      plVar8[1] = local_c0;
      *(byte *)(plVar8 + 5) = param_5 == '\x01' | 0x1a;
      if (param_5 == '\x01') {
        puVar9 = operator_new(0x18);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        plVar8[3] = (long)puVar9;
      }
      *param_1_00 = plVar8;
      goto LAB_01069d38;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1d3f5f0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_01d3f5f0 = DAT_01d3f5f0 - local_a8;
      }
    } while (cVar2 != '\0');
    iVar10 = (int)*(undefined8 *)(this + 0x9520);
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("could not allocate wasm memory backing store");
    }
    iVar10 = (int)*(undefined8 *)(this + 0x9520);
  }
  Histogram::AddSample(iVar10 + 0x6e8);
  *param_1_00 = 0;
LAB_01069d38:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

