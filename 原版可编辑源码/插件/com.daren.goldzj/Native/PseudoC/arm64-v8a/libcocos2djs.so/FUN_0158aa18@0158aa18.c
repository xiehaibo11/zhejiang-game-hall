
ulong FUN_0158aa18(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_74;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,499);
  }
  if (DAT_01d472b0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d472b0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d472b0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d472b0 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_NewStrictArguments",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_70;
    local_70 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_NewStrictArguments";
    local_b8 = pbVar3;
    local_a8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) != 0) &&
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x439)) {
    local_74 = 0;
    FUN_01591ac0(&local_70,param_3,&local_74);
    iVar13 = local_74;
    puVar6 = (ulong *)v8::internal::Factory::NewArgumentsObject(param_3,param_2,local_74);
    if (iVar13 != 0) {
      puVar7 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray(param_3,iVar13);
      uVar8 = *puVar7;
      if (0 < iVar13) {
        uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        iVar13 = 0;
        lVar12 = 0;
        do {
          uVar11 = *(ulong *)local_70[lVar12];
          *(int *)(uVar8 + (long)iVar13 + 7) = (int)uVar11;
          if (((uVar9 & 0x40000) != 0 || (uVar9 & 0x18) == 0) && (uVar11 & 1) != 0) {
            uVar10 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar8 + (long)iVar13 + 7;
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar8,lVar1,uVar11);
              uVar10 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar11);
            }
          }
          uVar8 = *puVar7;
          lVar12 = lVar12 + 1;
          iVar13 = iVar13 + 4;
        } while (lVar12 < local_74);
      }
      uVar9 = *puVar6;
      *(int *)(uVar9 + 7) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar11 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 7,uVar8);
          uVar11 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 7,uVar8);
        }
      }
    }
    plVar4 = local_70;
    uVar8 = *puVar6;
    local_70 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      operator_delete__(plVar4);
    }
    if (param_3 != (Factory *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
      }
    }
    if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_b8,local_b0,local_a8);
    }
    if (local_a0 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

