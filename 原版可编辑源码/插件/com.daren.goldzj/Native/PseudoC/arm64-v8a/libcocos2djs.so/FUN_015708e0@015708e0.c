
undefined8 FUN_015708e0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  byte *pbVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  Isolate *pIVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
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
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x177);
  }
  if (DAT_01d470f0 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d470f0 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar7 = DAT_01d470f0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d470f0 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar7,"V8.Runtime_Runtime_CreateRegExpLiteral",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar8 = local_68;
    local_68 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_70;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_CreateRegExpLiteral";
    local_b8 = pbVar7;
    local_a8 = uVar9;
  }
  puVar4 = *(ulong **)(param_3 + 0x95a0);
  puVar5 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsHeapObject()");
  }
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  puVar15 = param_2 + -2;
  uVar14 = *puVar15;
  if (((uVar14 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsString()");
  }
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  iVar3 = (int)param_2[-3] >> 1;
  if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x9f) {
    lVar1 = (long)((int)(param_2[-1] >> 1) << 2) + 0x1f;
    uVar6 = *(uint *)(lVar1 + uVar12);
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)uVar6;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = puVar4;
      if (puVar5 == puVar4) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar12;
      if ((uVar6 & 1) != 0) goto LAB_01570b80;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      if ((*puVar10 & 1) != 0) {
LAB_01570b80:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!HasBoilerplate(literal_site)");
      }
    }
    pIVar11 = (Isolate *)v8::internal::JSRegExp::New(param_3,puVar15,iVar3,0);
    if (pIVar11 != (Isolate *)0x0) {
      uVar12 = *param_2;
      if ((int)*puVar10 == 0) {
        *(undefined4 *)(uVar12 + lVar1) = 2;
      }
      else {
        uVar14 = *(ulong *)pIVar11;
        piVar2 = (int *)(uVar12 + lVar1);
        *piVar2 = (int)uVar14;
        if (((int)uVar14 != 3) && ((uVar14 & 1) != 0)) {
          uVar13 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar12,piVar2,uVar14 & 0xfffffffffffffffd);
            uVar13 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar12,piVar2,uVar14 & 0xfffffffffffffffd);
          }
        }
        pIVar11 = (Isolate *)v8::internal::JSRegExp::Copy(pIVar11);
      }
      goto LAB_01570b9c;
    }
  }
  else {
    pIVar11 = (Isolate *)v8::internal::JSRegExp::New(param_3,puVar15,iVar3,0);
    if (pIVar11 != (Isolate *)0x0) goto LAB_01570b9c;
  }
  pIVar11 = param_3 + 0x180;
LAB_01570b9c:
  uVar9 = *(undefined8 *)pIVar11;
  *(ulong **)(param_3 + 0x95a0) = puVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar5) {
    *(ulong **)(param_3 + 0x95a8) = puVar5;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar9;
}

