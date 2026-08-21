
undefined8 FUN_01599e40(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  int local_58;
  int local_54;
  long *local_48;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x216);
  }
  if (DAT_01d47418 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47418 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47418;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47418 & 5) != 0) {
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_SymbolDescriptiveString",0,0,0,0,0,0,0
                       ,&local_68,0);
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_SymbolDescriptiveString";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) != 0) &&
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x40)) {
    v8::internal::IncrementalStringBuilder::IncrementalStringBuilder
              ((IncrementalStringBuilder *)&local_68,param_3);
    lVar9 = (long)local_54;
    local_54 = local_54 + 1;
    if ((int)local_60 == 0) {
      *(undefined1 *)(*local_48 + lVar9 + 0xb) = 0x53;
      if (local_54 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x79;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x6d;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x62;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x6f;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x6c;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      *(undefined1 *)(*local_48 + (long)local_54 + 0xb) = 0x28;
    }
    else {
      *(undefined2 *)(*local_48 + lVar9 * 2 + 0xb) = 0x53;
      if (local_54 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x79;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x6d;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x62;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x6f;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      iVar1 = local_54 + 1;
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x6c;
      local_54 = iVar1;
      if (iVar1 == local_58) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
      }
      *(undefined2 *)(*local_48 + (long)local_54 * 2 + 0xb) = 0x28;
    }
    local_54 = local_54 + 1;
    if (local_54 == local_58) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
    }
    uVar8 = *param_2 & 0xffffffff00000000;
    uVar10 = uVar8 | *(uint *)(*param_2 + 0xb);
    if (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0x40) {
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(param_3 + 0x95a0);
        if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar10;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
      v8::internal::IncrementalStringBuilder::AppendString
                ((IncrementalStringBuilder *)&local_68,puVar6);
    }
    lVar9 = (long)local_54;
    local_54 = local_54 + 1;
    if ((int)local_60 == 0) {
      *(undefined1 *)(*local_48 + lVar9 + 0xb) = 0x29;
    }
    else {
      *(undefined2 *)(*local_48 + lVar9 * 2 + 0xb) = 0x29;
    }
    if (local_54 == local_58) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_68);
    }
    puVar7 = (undefined8 *)
             v8::internal::IncrementalStringBuilder::Finish((IncrementalStringBuilder *)&local_68);
    if (puVar7 == (undefined8 *)0x0) {
      uVar11 = *(undefined8 *)(param_3 + 0x180);
    }
    else {
      uVar11 = *puVar7;
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
    }
    if (local_90 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSymbol()");
}

