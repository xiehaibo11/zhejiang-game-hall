
undefined8 FUN_011d2354(uint param_1,ulong *param_2,Factory *param_3)

{
  Factory *pFVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  char cVar5;
  long *plVar6;
  undefined8 uVar7;
  Factory *pFVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  size_t __n;
  long lVar13;
  long lVar14;
  ulong uVar15;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  uint local_7c;
  long *local_78;
  long *local_70;
  
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x18e);
  }
  if (DAT_01d3fb78 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fb78 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3fb78;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d3fb78 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,
                       "V8.Runtime_Runtime_CopyDataPropertiesWithExcludedProperties",0,0,0,0,0,0,0,
                       &local_78,0);
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_78;
    local_78 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_CopyDataPropertiesWithExcludedProperties";
    local_c8 = pbVar4;
    local_b8 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  iVar9 = (int)*param_2;
  if (((*param_2 & 1) == 0) ||
     ((iVar9 != *(int *)(param_3 + 0xb0) && (iVar9 != *(int *)(param_3 + 0xa0))))) {
    lVar13 = ((long)(int)param_1 << 0x20) + -0x100000000;
    uVar15 = lVar13 >> 0x20;
    __n = lVar13 >> 0x1d;
    uVar10 = __n;
    if (uVar15 >> 0x3d != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    plVar6 = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)v8::internal::V8::GetCurrentPlatform();
      (**(code **)(*plVar6 + 0x18))();
      plVar6 = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
      if (lVar13 != 0) {
        memset(plVar6,0,__n);
      }
    }
    else if (lVar13 != 0) {
      memset(plVar6,0,__n);
    }
    local_78 = plVar6;
    local_70 = (long *)uVar15;
    if (1 < (int)param_1) {
      lVar13 = 0;
      lVar14 = (ulong)param_1 - 1;
      do {
        puVar12 = (ulong *)((long)param_2 - (ulong)((int)lVar13 + 8));
        uVar10 = *puVar12;
        if (((uVar10 & 1) != 0) &&
           (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0x40)) {
          uVar3 = *(uint *)(uVar10 + 3);
          local_88 = uVar10;
          if ((uVar3 & 0xc0000003) == 0) {
            local_7c = uVar3 >> 3 & 0xffffff;
          }
          else if (((uVar3 & 3) == 2) ||
                  (uVar10 = v8::internal::String::SlowAsArrayIndex((String *)&local_88,&local_7c),
                  (uVar10 & 1) == 0)) goto LAB_011d2584;
          puVar12 = (ulong *)v8::internal::Factory::NewNumberFromUint(param_3,local_7c);
        }
LAB_011d2584:
        lVar14 = lVar14 + -1;
        *(ulong **)((long)local_78 + lVar13) = puVar12;
        lVar13 = lVar13 + 8;
      } while (lVar14 != 0);
    }
    uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)(param_3 + 0x95a0);
      if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
        puVar12 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar12 + 1;
      *puVar12 = uVar10;
    }
    else {
      puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    pFVar8 = (Factory *)v8::internal::Factory::NewJSObject(param_3,puVar12,0);
    cVar5 = v8::internal::JSReceiver::SetOrCopyDataProperties(param_3,pFVar8,param_2,&local_78,0);
    pFVar1 = param_3 + 0x180;
    if (cVar5 != '\0') {
      pFVar1 = pFVar8;
    }
    uVar11 = *(undefined8 *)pFVar1;
    if (local_78 != (long *)0x0) {
      operator_delete__(local_78);
    }
  }
  else {
    uVar11 = v8::internal::ErrorUtils::ThrowLoadFromNullOrUndefined(param_3,param_2);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_c8,local_c0,local_b8);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  return uVar11;
}

