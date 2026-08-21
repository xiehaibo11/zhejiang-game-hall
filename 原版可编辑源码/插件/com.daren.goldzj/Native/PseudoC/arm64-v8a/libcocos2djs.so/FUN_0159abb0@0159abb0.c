
undefined8 FUN_0159abb0(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x221);
  }
  if (DAT_01d47430 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47430 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47430;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47430 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_ConstructDouble",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_ConstructDouble";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) == 0) {
    uVar6 = (ulong)(uint)((int)uVar6 >> 1);
    uVar8 = param_2[-1];
  }
  else {
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    dVar11 = *(double *)(uVar6 + 3);
    if ((((dVar11 < -2147483648.0) || (2147483647.0 < dVar11)) || (ABS(dVar11) == INFINITY)) ||
       ((NAN(ABS(dVar11)) || (uVar6 = (ulong)(uint)(int)dVar11, dVar11 != (double)(int)dVar11)))) {
      uVar7 = 0xfffffbce;
      if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
        uVar7 = ((uint)((ulong)dVar11 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar7 < 0) {
        if ((int)uVar7 < -0x34) {
          uVar6 = 0;
          uVar8 = param_2[-1];
          goto joined_r0x0159aeb0;
        }
        uVar6 = (ulong)dVar11 & 0xfffffffffffff;
        if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
          uVar6 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar6 >> ((ulong)-uVar7 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar7) {
          uVar6 = 0;
          goto LAB_0159ae30;
        }
        uVar6 = (ulong)dVar11 & 0xfffffffffffff;
        if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
          uVar6 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar6 << ((ulong)uVar7 & 0x3f));
      }
      uVar9 = -uVar7;
      if (-1 < (long)dVar11) {
        uVar9 = uVar7;
      }
      uVar6 = (ulong)uVar9;
      uVar8 = param_2[-1];
    }
    else {
LAB_0159ae30:
      uVar8 = param_2[-1];
    }
  }
joined_r0x0159aeb0:
  if ((uVar8 & 1) == 0) {
    uVar7 = (int)uVar8 >> 1;
    goto LAB_0159aedc;
  }
  if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  dVar11 = *(double *)(uVar8 + 3);
  if (((-2147483648.0 <= dVar11) && (dVar11 <= 2147483647.0)) &&
     ((ABS(dVar11) != INFINITY &&
      ((!NAN(ABS(dVar11)) && (uVar7 = (int)dVar11, dVar11 == (double)(int)dVar11))))))
  goto LAB_0159aedc;
  uVar7 = 0xfffffbce;
  if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
    uVar7 = ((uint)((ulong)dVar11 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar7 < 0) {
    if ((int)uVar7 < -0x34) goto LAB_0159ae60;
    uVar8 = (ulong)dVar11 & 0xfffffffffffff;
    if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar9 = (uint)(uVar8 >> ((ulong)-uVar7 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar7) {
LAB_0159ae60:
      uVar7 = 0;
      goto LAB_0159aedc;
    }
    uVar8 = (ulong)dVar11 & 0xfffffffffffff;
    if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar9 = (uint)(uVar8 << ((ulong)uVar7 & 0x3f));
  }
  uVar7 = -uVar9;
  if (-1 < (long)dVar11) {
    uVar7 = uVar9;
  }
LAB_0159aedc:
  puVar5 = (undefined8 *)
           v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                     (param_3,(double)((ulong)uVar7 | uVar6 << 0x20));
  uVar10 = *puVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar10;
}

