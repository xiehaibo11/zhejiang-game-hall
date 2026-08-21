
undefined8 FUN_011c1264(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  double dVar9;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x10d);
  }
  if (DAT_01d3f980 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f980 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3f980;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f980 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_IsBreakOnException",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_IsBreakOnException";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  if ((uVar7 & 1) == 0) {
    iVar6 = (int)uVar7 >> 1;
    goto LAB_011c147c;
  }
  if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsNumber()");
  }
  dVar9 = *(double *)(uVar7 + 3);
  if ((((-2147483648.0 <= dVar9) && (dVar9 <= 2147483647.0)) && (ABS(dVar9) != INFINITY)) &&
     ((!NAN(ABS(dVar9)) && (iVar6 = (int)dVar9, dVar9 == (double)(int)dVar9)))) goto LAB_011c147c;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar9 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_011c1450;
    uVar7 = (ulong)dVar9 & 0xfffffffffffff;
    if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
      uVar7 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar8 = (int)(uVar7 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_011c1450:
      iVar6 = 0;
      goto LAB_011c147c;
    }
    uVar7 = (ulong)dVar9 & 0xfffffffffffff;
    if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
      uVar7 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar8 = (int)(uVar7 << ((ulong)uVar1 & 0x3f));
  }
  iVar6 = -iVar8;
  if (-1 < (long)dVar9) {
    iVar6 = iVar8;
  }
LAB_011c147c:
  uVar7 = v8::internal::Debug::IsBreakOnException(*(Debug **)(param_3 + 0xb6c8),iVar6);
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  uVar5 = 2;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar5;
}

