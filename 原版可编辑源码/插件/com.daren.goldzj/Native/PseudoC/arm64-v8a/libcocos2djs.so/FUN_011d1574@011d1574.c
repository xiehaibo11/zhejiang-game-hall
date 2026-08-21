
undefined8 FUN_011d1574(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  Isolate *pIVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x194);
  }
  if (DAT_01d3fb60 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fb60 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3fb60;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d3fb60 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_DefineGetterPropertyUnchecked",0,0,0,0
                       ,0,0,0,&local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_DefineGetterPropertyUnchecked";
    local_b8 = pbVar4;
    local_a8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  puVar13 = param_2 + -1;
  uVar10 = *puVar13;
  if (((uVar10 & 1) == 0) ||
     (0x40 < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsName()");
  }
  puVar14 = param_2 + -2;
  uVar10 = *puVar14;
  if ((uVar10 & 1) == 0) {
LAB_011d1940:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSFunction()");
  }
  uVar15 = uVar10 & 0xffffffff00000000;
  uVar16 = uVar15 | 7;
  if (*(short *)(uVar16 + *(uint *)(uVar10 - 1)) != 0x439) goto LAB_011d1940;
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  uVar1 = (int)param_2[-3] >> 1;
  if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args.smi_at(3) & ~(READ_ONLY | DONT_ENUM | DONT_DELETE) == 0");
  }
  uVar10 = uVar15 | *(uint *)(uVar10 + 0xb);
  uVar3 = *(uint *)(uVar10 + 7);
  plVar5 = (long *)(uVar15 | uVar3);
  if (((uVar3 & 1) == 0) || (*(short *)(uVar16 + *(uint *)((long)plVar5 - 1)) != 0x83)) {
    if (uVar3 != 0) {
      if ((uVar3 & 1) != 0) goto LAB_011d1770;
      goto LAB_011d17b0;
    }
LAB_011d17ac:
    plVar5 = *(long **)(uVar15 + 200);
LAB_011d17b0:
    if (*(int *)((long)plVar5 + 7) != 0) goto LAB_011d182c;
LAB_011d17b8:
    uVar10 = *puVar14 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar14 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(param_3 + 0x95a0);
      if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar10;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    uVar10 = v8::internal::JSFunction::SetName(puVar14,puVar13,param_3 + 0x700);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*puVar14 - 1) != (int)*puVar8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","*getter_map == getter->map()");
      }
      goto LAB_011d182c;
    }
  }
  else {
    local_70 = plVar5;
    uVar7 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_70);
    if ((uVar7 & 1) == 0) goto LAB_011d17ac;
    uVar3 = *(uint *)(uVar10 + 7);
    plVar5 = (long *)(uVar15 | uVar3);
    if ((uVar3 & 1) == 0) goto LAB_011d17b0;
LAB_011d1770:
    if (*(short *)(uVar16 + *(uint *)((long)plVar5 - 1)) != 0x83) goto LAB_011d17b0;
    local_70 = plVar5;
    uVar10 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_70);
    if ((uVar10 & 1) == 0) goto LAB_011d17ac;
    local_70 = plVar5;
    lVar9 = v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_70);
    if (*(int *)(lVar9 + 7) == 0) goto LAB_011d17b8;
LAB_011d182c:
    lVar9 = v8::internal::JSObject::DefineAccessor(param_2,puVar13,puVar14,param_3 + 0xb0,uVar1);
    if (lVar9 != 0) {
      pIVar11 = param_3 + 0xa0;
      goto LAB_011d1854;
    }
  }
  pIVar11 = param_3 + 0x180;
LAB_011d1854:
  uVar12 = *(undefined8 *)pIVar11;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar12;
}

