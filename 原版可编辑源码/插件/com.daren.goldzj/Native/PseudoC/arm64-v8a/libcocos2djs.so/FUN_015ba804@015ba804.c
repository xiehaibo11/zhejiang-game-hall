
undefined8 FUN_015ba804(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x280);
  }
  if (DAT_01d47820 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47820 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47820;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47820 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmI64AtomicWait",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_WasmI64AtomicWait";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (uVar7 = uVar8 & 0xffffffff00000000,
     *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar9 = param_2[-1];
  if ((uVar9 & 1) == 0) {
    iVar14 = (int)uVar9 >> 1;
    uVar9 = param_2[-2];
joined_r0x015baa74:
    if ((uVar9 & 1) == 0) goto LAB_015baa04;
LAB_015baa78:
    if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    dVar15 = *(double *)(uVar9 + 3);
    if (((dVar15 < -2147483648.0) || (2147483647.0 < dVar15)) ||
       ((ABS(dVar15) == INFINITY ||
        ((NAN(ABS(dVar15)) || (uVar9 = (ulong)(uint)(int)dVar15, dVar15 != (double)(int)dVar15))))))
    {
      uVar11 = 0xfffffbce;
      if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
        uVar11 = ((uint)((ulong)dVar15 >> 0x34) & 0x7ff) - 0x433;
      }
      if (-1 < (int)uVar11) {
        if ((int)uVar11 < 0x20) {
          uVar9 = (ulong)dVar15 & 0xfffffffffffff;
          if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
            uVar9 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar11 = (uint)(uVar9 << ((ulong)uVar11 & 0x3f));
          goto LAB_015bab7c;
        }
        uVar9 = 0;
        goto LAB_015bab10;
      }
      if ((int)uVar11 < -0x34) {
        uVar9 = 0;
        uVar12 = param_2[-3];
      }
      else {
        uVar9 = (ulong)dVar15 & 0xfffffffffffff;
        if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
          uVar9 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar11 = (uint)(uVar9 >> ((ulong)-uVar11 & 0x3f));
LAB_015bab7c:
        uVar13 = -uVar11;
        if (-1 < (long)dVar15) {
          uVar13 = uVar11;
        }
        uVar9 = (ulong)uVar13;
        uVar12 = param_2[-3];
      }
    }
    else {
LAB_015bab10:
      uVar12 = param_2[-3];
    }
  }
  else {
    if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar15 = *(double *)(uVar9 + 3);
    if ((((dVar15 < -2147483648.0) || (2147483647.0 < dVar15)) || (ABS(dVar15) == INFINITY)) ||
       ((NAN(ABS(dVar15)) || (iVar14 = (int)dVar15, dVar15 != (double)iVar14)))) {
      uVar11 = 0xfffffbce;
      if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
        uVar11 = ((uint)((ulong)dVar15 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar11 < 0) {
        if ((int)uVar11 < -0x34) {
          iVar14 = 0;
          uVar9 = param_2[-2];
          goto joined_r0x015baa74;
        }
        uVar9 = (ulong)dVar15 & 0xfffffffffffff;
        if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
          uVar9 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar10 = (int)(uVar9 >> ((ulong)-uVar11 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar11) {
          iVar14 = 0;
          goto LAB_015ba9fc;
        }
        uVar9 = (ulong)dVar15 & 0xfffffffffffff;
        if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
          uVar9 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar10 = (int)(uVar9 << ((ulong)uVar11 & 0x3f));
      }
      iVar14 = -iVar10;
      if (-1 < (long)dVar15) {
        iVar14 = iVar10;
      }
      uVar9 = param_2[-2];
      goto joined_r0x015baa74;
    }
LAB_015ba9fc:
    uVar9 = param_2[-2];
    if ((uVar9 & 1) != 0) goto LAB_015baa78;
LAB_015baa04:
    uVar9 = (ulong)(uint)((int)uVar9 >> 1);
    uVar12 = param_2[-3];
  }
  if ((uVar12 & 1) == 0) {
    uVar11 = (int)uVar12 >> 1;
    uVar12 = param_2[-4];
    goto joined_r0x015bac48;
  }
  if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsNumber()");
  }
  dVar15 = *(double *)(uVar12 + 3);
  if ((((dVar15 < -2147483648.0) || (2147483647.0 < dVar15)) || (ABS(dVar15) == INFINITY)) ||
     ((NAN(ABS(dVar15)) || (uVar11 = (uint)dVar15, dVar15 != (double)(int)uVar11)))) {
    uVar11 = 0xfffffbce;
    if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
      uVar11 = ((uint)((ulong)dVar15 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar11 < 0) {
      if ((int)uVar11 < -0x34) {
        uVar11 = 0;
        uVar12 = param_2[-4];
        goto joined_r0x015bac48;
      }
      uVar12 = (ulong)dVar15 & 0xfffffffffffff;
      if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
        uVar12 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar13 = (uint)(uVar12 >> ((ulong)-uVar11 & 0x3f));
    }
    else {
      if (0x1f < (int)uVar11) {
        uVar11 = 0;
        goto LAB_015bac24;
      }
      uVar12 = (ulong)dVar15 & 0xfffffffffffff;
      if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
        uVar12 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar13 = (uint)(uVar12 << ((ulong)uVar11 & 0x3f));
    }
    uVar11 = -uVar13;
    if (-1 < (long)dVar15) {
      uVar11 = uVar13;
    }
    uVar12 = param_2[-4];
  }
  else {
LAB_015bac24:
    uVar12 = param_2[-4];
  }
joined_r0x015bac48:
  if ((uVar12 & 1) == 0) {
    dVar15 = (double)((int)uVar12 >> 1);
  }
  else {
    if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[4].IsNumber()");
    }
    dVar15 = *(double *)(uVar12 + 3);
  }
  dVar16 = INFINITY;
  if (0.0 <= dVar15) {
    dVar16 = dVar15 / 1000000.0;
  }
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(uVar8 + 0x7b)) + 0xb);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = puVar1;
    if (puVar2 == puVar1) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
  }
  uVar5 = v8::internal::FutexEmulation::Wait64
                    (dVar16,param_3,puVar6,iVar14,(ulong)uVar11 | uVar9 << 0x20);
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar5;
}

