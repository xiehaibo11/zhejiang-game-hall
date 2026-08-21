
void FUN_015e7874(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  void *pvVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  WasmImportWrapperCache *this;
  long lVar19;
  long lVar20;
  undefined1 local_120;
  undefined7 uStack_11f;
  long *local_118;
  byte **local_108;
  byte *local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  byte **local_d8;
  byte *local_d0;
  char *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 local_ac [4];
  char *local_a8;
  char *local_a0 [6];
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  if (DAT_01d478b0 == (byte *)0x0) {
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d478b0 = (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.wasm");
  }
  pbVar9 = DAT_01d478b0;
  local_108 = (byte **)0x0;
  if ((*DAT_01d478b0 & 5) != 0) {
    local_a0[0] = "num_results";
    local_d8 = (byte **)((((long *)*param_1)[1] - *(long *)*param_1 >> 3) * -0xf0f0f0f0f0f0f0f);
    local_120 = 2;
    local_e0 = (long *)0x0;
    local_e8 = (long *)0x0;
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar11 = (**(code **)(*plVar10 + 0x18))
                       (plVar10,0x58,pbVar9,"PublishResults",0,0,0,1,local_a0,&local_120,&local_d8,
                        &local_e8,0);
    plVar10 = local_e0;
    local_e0 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = local_e8;
    local_e8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_108 = &local_100;
    local_f8 = "PublishResults";
    local_100 = pbVar9;
    local_f0 = uVar11;
  }
  if (*(long *)*param_1 != ((long *)*param_1)[1]) {
    v8::internal::wasm::WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)local_a0);
    lVar19 = *(long *)*param_1;
    v8::internal::wasm::NativeModule::AddCompiledCode
              (&local_120,*(undefined8 *)(param_2 + 8),lVar19,
               (((long *)*param_1)[1] - lVar19 >> 3) * -0xf0f0f0f0f0f0f0f);
    plVar18 = local_118;
    plVar10 = (long *)CONCAT71(uStack_11f,local_120);
    lVar19 = *(long *)(param_2 + 8);
    if (plVar10 != local_118) {
      this = *(WasmImportWrapperCache **)(lVar19 + 0x108);
      iVar2 = *(int *)(*(long *)(lVar19 + 200) + 0x3c);
      do {
        lVar20 = *plVar10;
        if (*(int *)(lVar20 + 0x38) < iVar2) {
          local_d0 = *(byte **)(*(long *)(*(long *)(lVar19 + 200) + 0x88) +
                               (long)*(int *)(lVar20 + 0x38) * 0x20);
          local_d8 = (byte **)CONCAT71(local_d8._1_7_,4);
          plVar12 = (long *)v8::internal::wasm::WasmImportWrapperCache::operator[]
                                      (this,(pair *)&local_d8);
          piVar1 = (int *)(lVar20 + 0x8c);
          *plVar12 = lVar20;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar18);
      plVar10 = (long *)CONCAT71(uStack_11f,local_120);
    }
    v8::internal::wasm::WasmEngine::LogCode
              (*(undefined8 *)(lVar19 + 0x178),plVar10,(long)local_118 - (long)plVar10 >> 3);
    plVar10 = (long *)CONCAT71(uStack_11f,local_120);
    plVar18 = *(long **)(*(long *)(param_2 + 8) + 0x100);
    lVar19 = (long)local_118 - (long)plVar10;
    if (DAT_01d478b8 == (byte *)0x0) {
      plVar12 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      DAT_01d478b8 = (byte *)(**(code **)(*plVar12 + 0x10))(plVar12,"disabled-by-default-v8.wasm");
    }
    pbVar9 = DAT_01d478b8;
    local_d8 = (byte **)0x0;
    lVar20 = lVar19 >> 3;
    if ((*DAT_01d478b8 & 5) != 0) {
      local_a8 = "num_units";
      local_ac[0] = 2;
      local_e8 = (long *)0x0;
      local_e0 = (long *)0x0;
      local_b8 = lVar20;
      plVar12 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      uVar11 = (**(code **)(*plVar12 + 0x18))
                         (plVar12,0x58,pbVar9,"OnFinishedUnits",0,0,0,1,&local_a8,local_ac,&local_b8
                          ,&local_e8,0);
      plVar12 = local_e0;
      local_e0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      plVar12 = local_e8;
      local_e8 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      local_d8 = &local_d0;
      local_c8 = "OnFinishedUnits";
      local_d0 = pbVar9;
      local_c0 = uVar11;
    }
    v8::base::Mutex::Lock((Mutex *)(plVar18 + 0x2b));
    if (((int)plVar18[0x33] != 0) || (*(int *)((long)plVar18 + 0x19c) != 0)) {
      if (lVar19 == 0) {
        bVar14 = 0;
        bVar15 = 0;
      }
      else {
        bVar15 = 0;
        bVar14 = 0;
        lVar20 = lVar20 << 3;
        do {
          lVar19 = *plVar10;
          uVar3 = *(uint *)(*(long *)(*plVar18 + 200) + 0x3c);
          if (*(uint *)(lVar19 + 0x38) < uVar3) {
            iVar2 = (int)plVar18[0x33] + -1;
            *(int *)(plVar18 + 0x33) = iVar2;
            bVar15 = bVar15 | iVar2 == 0;
          }
          else {
            lVar16 = plVar18[0x34];
            lVar17 = (long)(int)(*(uint *)(lVar19 + 0x38) - uVar3);
            bVar4 = *(byte *)(lVar16 + lVar17);
            uVar3 = bVar4 >> 4 & 3;
            uVar7 = bVar4 >> 2 & 3;
            if ((uVar3 < (bVar4 & 3)) && ((int)(bVar4 & 3) <= (int)*(char *)(lVar19 + 0x88))) {
              iVar2 = (int)plVar18[0x33] + -1;
              *(int *)(plVar18 + 0x33) = iVar2;
              bVar15 = bVar15 | iVar2 == 0;
            }
            if ((uVar3 < uVar7) && ((int)uVar7 <= (int)*(char *)(lVar19 + 0x88))) {
              iVar2 = *(int *)((long)plVar18 + 0x19c) + -1;
              *(int *)((long)plVar18 + 0x19c) = iVar2;
              bVar14 = bVar14 | iVar2 == 0;
            }
            if ((int)uVar3 < (int)*(char *)(lVar19 + 0x88)) {
              *(byte *)(lVar16 + lVar17) =
                   *(byte *)(lVar16 + lVar17) & 0xcf | *(char *)(lVar19 + 0x88) << 4;
            }
          }
          lVar20 = lVar20 + -8;
          plVar10 = plVar10 + 1;
        } while (lVar20 != 0);
      }
      FUN_015e7db4(plVar18,bVar15,bVar14);
    }
    v8::base::Mutex::Unlock((Mutex *)(plVar18 + 0x2b));
    if ((local_d8 != (byte **)0x0) && (*local_d0 != 0)) {
      plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar10 + 0x28))(plVar10,local_d0,local_c8,local_c0);
    }
    plVar10 = (long *)*param_1;
    lVar19 = *plVar10;
    lVar20 = plVar10[1];
    while (lVar20 != lVar19) {
      pvVar13 = *(void **)(lVar20 + -0x18);
      *(undefined8 *)(lVar20 + -0x18) = 0;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      pvVar13 = *(void **)(lVar20 + -0x28);
      *(undefined8 *)(lVar20 + -0x28) = 0;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      pvVar13 = *(void **)(lVar20 + -0x38);
      lVar16 = lVar20 + -0x88;
      *(undefined8 *)(lVar20 + -0x38) = 0;
      lVar20 = lVar16;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
    }
    plVar10[1] = lVar19;
    plVar10 = (long *)CONCAT71(uStack_11f,local_120);
    if (plVar10 != (long *)0x0) {
      local_118 = plVar10;
      operator_delete(plVar10);
    }
    v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_a0);
  }
  if ((local_108 != (byte **)0x0) && (*local_100 != 0)) {
    plVar10 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,local_100,local_f8,local_f0);
  }
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

