
undefined8 FUN_0158d908(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong *local_148;
  byte **local_130;
  byte *local_128;
  char *local_120;
  undefined8 local_118;
  RuntimeCallStats *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  long local_d0;
  ulong *local_c8;
  undefined8 uStack_c0;
  ulong *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  int local_88 [2];
  byte local_80;
  undefined8 local_68;
  
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = (RuntimeCallStats *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_110 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0x1f0);
  }
  if (DAT_01d472e0 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d472e0 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d472e0;
  local_130 = (byte **)0x0;
  if ((*DAT_01d472e0 & 5) != 0) {
    local_e8 = (long *)0x0;
    local_e0 = 0;
    uStack_dc = 0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar6,"V8.Runtime_Runtime_NewScriptContext",0,0,0,0,0,0,0,
                       &local_e8,0);
    plVar8 = (long *)CONCAT44(uStack_dc,local_e0);
    local_e0 = 0;
    uStack_dc = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_e8;
    local_e8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_130 = &local_128;
    local_120 = "V8.Runtime_Runtime_NewScriptContext";
    local_128 = pbVar6;
    local_118 = uVar9;
  }
  puVar2 = *(ulong **)(param_3 + 0x95a0);
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar15 = *param_2;
  if (((uVar15 & 1) == 0) ||
     (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x83)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsScopeInfo()");
  }
  plVar8 = *(long **)(param_3 + 0x2bc8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_148 = puVar2;
    if (puVar4 == puVar2) {
      local_148 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = local_148 + 1;
    *local_148 = (ulong)plVar8;
  }
  else {
    local_148 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),(ulong)plVar8);
    plVar8 = (long *)*local_148;
  }
  local_e8 = plVar8;
  uVar15 = v8::internal::Context::global_object((Context *)&local_e8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(param_3 + 0x95a0);
    if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
      puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar15;
  }
  else {
    puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
  }
  uVar15 = *local_148 & 0xffffffff00000000 | (ulong)*(uint *)(*local_148 + 0x273);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)(param_3 + 0x95a0);
    if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
      puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
    *puVar11 = uVar15;
  }
  else {
    puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
  }
  iVar18 = 0;
  do {
    plVar8 = (long *)*param_2;
    if (1 < *(int *)((long)plVar8 + 3)) {
      if (iVar18 < *(int *)((long)plVar8 + 0xf) >> 1) goto LAB_0158dba0;
LAB_0158de00:
      uVar9 = *(undefined8 *)(param_3 + 0xa0);
LAB_0158de80:
      iVar18 = (int)*(ulong *)(param_3 + 0x2bd8);
      if ((*(ulong *)(param_3 + 0x2bd8) & 1) == 0) goto LAB_0158df2c;
      goto LAB_0158de8c;
    }
    if (-1 < iVar18) goto LAB_0158de00;
LAB_0158dba0:
    local_e8 = plVar8;
    uVar15 = v8::internal::ScopeInfo::ContextLocalName((ScopeInfo *)&local_e8,iVar18);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)(param_3 + 0x95a0);
      if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
        puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar12 + 1;
      *puVar12 = uVar15;
    }
    else {
      puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
    }
    local_e8 = (long *)*param_2;
    bVar7 = v8::internal::ScopeInfo::ContextLocalMode((ScopeInfo *)&local_e8,iVar18);
    uVar15 = v8::internal::ScriptContextTable::Lookup(param_3,*puVar11,*puVar12,local_88);
    if ((uVar15 & 1) == 0) {
      if (bVar7 < 2) {
LAB_0158dd10:
        local_d0 = (ulong)*(uint *)((long)puVar10 + 4) << 0x20;
        local_e8 = (long *)((ulong)local_e8 & 0xffffffff00000000);
        uStack_dc = 0;
        uStack_d8 = 0xc0;
        puVar13 = puVar12;
        if ((*(ushort *)((*puVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar12 - 1)) &
            0xffe0) == 0x20) {
          puVar13 = (ulong *)v8::internal::StringTable::LookupString(local_d0,puVar12);
        }
        uStack_c0 = 0;
        uStack_b0 = 0;
        local_a0 = 0xffffffffffffffff;
        uStack_98 = 0xffffffffffffffff;
        local_c8 = puVar13;
        local_b8 = puVar10;
        local_a8 = puVar10;
        v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_e8);
        uVar15 = v8::internal::JSReceiver::GetPropertyAttributes((LookupIterator *)&local_e8);
        if ((uVar15 & 0xff) == 0) {
          uVar9 = *(undefined8 *)(param_3 + 0x180);
          goto LAB_0158de80;
        }
        if ((uVar15 >> 0x22 & 1) != 0) {
          uVar3 = *(undefined8 *)(param_3 + 0x95a0);
          lVar5 = *(long *)(param_3 + 0x95a8);
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
          puVar14 = (undefined8 *)
                    v8::internal::Factory::NewSyntaxError((Factory *)param_3,0xb0,puVar12,0,0);
          uVar9 = v8::internal::Isolate::Throw(param_3,*puVar14,0);
          *(undefined8 *)(param_3 + 0x95a0) = uVar3;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar5) {
            *(long *)(param_3 + 0x95a8) = lVar5;
            v8::internal::HandleScope::DeleteExtensions(param_3);
          }
          iVar18 = (int)*(ulong *)(param_3 + 0x2bd8);
          if ((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) {
LAB_0158de8c:
            if (iVar18 == *(int *)(param_3 + 0xa8)) {
              puVar14 = (undefined8 *)
                        v8::internal::Factory::NewScriptContext
                                  ((Factory *)param_3,local_148,param_2);
              puVar10 = (ulong *)v8::internal::ScriptContextTable::Extend(puVar11,puVar14);
              uVar17 = *local_148;
              uVar15 = *puVar10;
              puVar1 = (undefined4 *)(uVar17 + 0x273);
              *puVar1 = (int)uVar15;
              if ((uVar15 & 1) != 0) {
                uVar16 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
                if (((uint)uVar16 >> 0x12 & 1) != 0) {
                  v8::internal::Heap_MarkingBarrierSlow(uVar17,puVar1,uVar15);
                  uVar16 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar16 & 0x18) != 0) &&
                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  v8::internal::Heap_GenerationalBarrierSlow(uVar17,puVar1,uVar15);
                }
              }
              uVar9 = *puVar14;
            }
          }
LAB_0158df2c:
          *(ulong **)(param_3 + 0x95a0) = puVar2;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
            *(ulong **)(param_3 + 0x95a8) = puVar4;
            v8::internal::HandleScope::DeleteExtensions(param_3);
          }
          if ((local_130 != (byte **)0x0) && (*local_128 != 0)) {
            plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
            (**(code **)(*plVar8 + 0x28))(plVar8,local_128,local_120,local_118);
          }
          if (local_110 != (RuntimeCallStats *)0x0) {
            v8::internal::RuntimeCallStats::Leave
                      (local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
          }
          return uVar9;
        }
        v8::internal::JSGlobalObject::InvalidatePropertyCell(puVar10,puVar12);
      }
    }
    else if ((bVar7 < 2) || (local_80 < 2)) {
      uVar15 = *puVar11 & 0xffffffff00000000 |
               (ulong)*(uint *)(*puVar11 + (long)(local_88[0] * 4 + 4) + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(param_3 + 0x95a0);
        if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
          puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar15;
      }
      else {
        puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
      }
      if ((bVar7 == 0) && (local_80 == 0)) {
        local_e8 = (long *)*param_2;
        uVar15 = v8::internal::ScopeInfo::IsReplModeScope((ScopeInfo *)&local_e8);
        if ((uVar15 & 1) != 0) {
          local_90 = *puVar13;
          local_68 = v8::internal::Context::scope_info((Context *)&local_90);
          uVar15 = v8::internal::ScopeInfo::IsReplModeScope((ScopeInfo *)&local_68);
          if ((uVar15 & 1) != 0) goto LAB_0158dd10;
        }
      }
      uVar3 = *(undefined8 *)(param_3 + 0x95a0);
      lVar5 = *(long *)(param_3 + 0x95a8);
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
      puVar14 = (undefined8 *)
                v8::internal::Factory::NewSyntaxError((Factory *)param_3,0xb0,puVar12,0,0);
      uVar9 = v8::internal::Isolate::Throw(param_3,*puVar14,0);
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar5) {
        *(long *)(param_3 + 0x95a8) = lVar5;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      goto LAB_0158de80;
    }
    iVar18 = iVar18 + 1;
  } while( true );
}

