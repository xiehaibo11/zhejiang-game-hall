
ulong FUN_0158c7b4(undefined8 param_1,long *param_2,Factory *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x1eb);
  }
  if (DAT_01d472c8 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d472c8 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d472c8;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d472c8 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar6,"V8.Runtime_Runtime_NewArgumentsElements",0,0,0,0,0,0,0,
                       &local_78,0);
    plVar7 = local_70;
    local_70 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_78;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_NewArgumentsElements";
    local_b8 = pbVar6;
    local_a8 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar5 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((param_2[-1] & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  if ((param_2[-2] & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsSmi()");
  }
  lVar13 = *param_2;
  uVar2 = (int)param_2[-1] >> 1;
  uVar3 = (int)param_2[-2] >> 1;
  puVar9 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray(param_3,uVar2);
  uVar16 = *puVar9;
  uVar10 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
  uVar4 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar4 = uVar2;
  }
  if (0 < (int)uVar4) {
    iVar12 = 0;
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 1;
      *(undefined4 *)(uVar16 + (long)iVar12 + 7) = *(undefined4 *)(param_3 + 0xa8);
      uVar16 = *puVar9;
      iVar12 = iVar12 + 4;
    } while (uVar14 < uVar4);
  }
  if ((int)uVar3 < (int)uVar2) {
    lVar17 = (long)(int)uVar4;
    iVar12 = (uVar2 - uVar4) + 1;
    iVar15 = uVar4 << 2;
    do {
      uVar14 = *(ulong *)(lVar13 + (long)iVar12 * 8);
      *(int *)(uVar16 + (long)iVar15 + 7) = (int)uVar14;
      if (((uVar10 & 0x40000) != 0 || (uVar10 & 0x18) == 0) && (uVar14 & 1) != 0) {
        uVar11 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar16 + (long)iVar15 + 7;
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar16,lVar1,uVar14);
          uVar11 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar16,lVar1,uVar14);
        }
      }
      uVar16 = *puVar9;
      lVar17 = lVar17 + 1;
      iVar12 = iVar12 + -1;
      iVar15 = iVar15 + 4;
    } while (lVar17 < (int)uVar2);
    if (param_3 == (Factory *)0x0) goto LAB_0158ca58;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar8;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar5) {
    *(long *)(param_3 + 0x95a8) = lVar5;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
LAB_0158ca58:
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar16;
}

