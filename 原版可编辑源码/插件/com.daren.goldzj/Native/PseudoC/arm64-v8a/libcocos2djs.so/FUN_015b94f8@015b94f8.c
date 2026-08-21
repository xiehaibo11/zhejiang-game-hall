
undefined8 FUN_015b94f8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x281);
  }
  if (DAT_01d47810 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47810 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47810;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47810 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_WasmAtomicNotify",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_WasmAtomicNotify";
    local_a8 = pbVar4;
    local_98 = uVar6;
  }
  puVar2 = *(ulong **)(param_3 + 0x95a0);
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (uVar9 = uVar8 & 0xffffffff00000000,
     *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar10 = param_2[-1];
  if ((uVar10 & 1) == 0) {
    iVar13 = (int)uVar10 >> 1;
    uVar10 = param_2[-2];
  }
  else {
    if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar14 = *(double *)(uVar10 + 3);
    if ((((dVar14 < -2147483648.0) || (2147483647.0 < dVar14)) || (ABS(dVar14) == INFINITY)) ||
       ((NAN(ABS(dVar14)) || (iVar13 = (int)dVar14, dVar14 != (double)iVar13)))) {
      uVar1 = 0xfffffbce;
      if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
        uVar1 = ((uint)((ulong)dVar14 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar1 < 0) {
        if ((int)uVar1 < -0x34) {
          iVar13 = 0;
          uVar10 = param_2[-2];
          goto joined_r0x015b981c;
        }
        uVar10 = (ulong)dVar14 & 0xfffffffffffff;
        if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
          uVar10 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar12 = (int)(uVar10 >> ((ulong)-uVar1 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar1) {
          iVar13 = 0;
          goto LAB_015b979c;
        }
        uVar10 = (ulong)dVar14 & 0xfffffffffffff;
        if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
          uVar10 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar12 = (int)(uVar10 << ((ulong)uVar1 & 0x3f));
      }
      iVar13 = -iVar12;
      if (-1 < (long)dVar14) {
        iVar13 = iVar12;
      }
      uVar10 = param_2[-2];
    }
    else {
LAB_015b979c:
      uVar10 = param_2[-2];
    }
  }
joined_r0x015b981c:
  if ((uVar10 & 1) == 0) {
    iVar12 = (int)uVar10 >> 1;
    goto LAB_015b9848;
  }
  if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  dVar14 = *(double *)(uVar10 + 3);
  if (((-2147483648.0 <= dVar14) && (dVar14 <= 2147483647.0)) &&
     ((ABS(dVar14) != INFINITY &&
      ((!NAN(ABS(dVar14)) && (iVar12 = (int)dVar14, dVar14 == (double)(int)dVar14))))))
  goto LAB_015b9848;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar14 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_015b97cc;
    uVar10 = (ulong)dVar14 & 0xfffffffffffff;
    if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
      uVar10 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar11 = (int)(uVar10 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_015b97cc:
      iVar12 = 0;
      goto LAB_015b9848;
    }
    uVar10 = (ulong)dVar14 & 0xfffffffffffff;
    if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
      uVar10 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar11 = (int)(uVar10 << ((ulong)uVar1 & 0x3f));
  }
  iVar12 = -iVar11;
  if (-1 < (long)dVar14) {
    iVar12 = iVar11;
  }
LAB_015b9848:
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(uVar8 + 0x7b)) + 0xb);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = puVar2;
    if (puVar3 == puVar2) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar9;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
  }
  uVar6 = v8::internal::FutexEmulation::Wake(puVar7,iVar13,iVar12);
  *(ulong **)(param_3 + 0x95a0) = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar6;
}

