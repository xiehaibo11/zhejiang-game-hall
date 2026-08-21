
long FUN_01595070(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  double dVar10;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x202);
  }
  if (DAT_01d473a0 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d473a0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d473a0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d473a0 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_StringCharCodeAt",0,0,0,0,0,0,0,
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
    local_90 = "V8.Runtime_Runtime_StringCharCodeAt";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar6 = param_2[-1];
  if ((uVar6 & 1) == 0) {
    uVar9 = (int)uVar6 >> 1;
    goto LAB_015952a8;
  }
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  dVar10 = *(double *)(uVar6 + 3);
  if ((((-2147483648.0 <= dVar10) && (dVar10 <= 2147483647.0)) && (ABS(dVar10) != INFINITY)) &&
     ((!NAN(ABS(dVar10)) && (uVar9 = (int)dVar10, dVar10 == (double)(int)dVar10))))
  goto LAB_015952a8;
  uVar9 = 0xfffffbce;
  if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
    uVar9 = ((uint)((ulong)dVar10 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar9 < 0) {
    if ((int)uVar9 < -0x34) goto LAB_0159527c;
    uVar6 = (ulong)dVar10 & 0xfffffffffffff;
    if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
      uVar6 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar7 = (uint)(uVar6 >> ((ulong)-uVar9 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar9) {
LAB_0159527c:
      uVar9 = 0;
      goto LAB_015952a8;
    }
    uVar6 = (ulong)dVar10 & 0xfffffffffffff;
    if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
      uVar6 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar7 = (uint)(uVar6 << ((ulong)uVar9 & 0x3f));
  }
  uVar9 = -uVar7;
  if (-1 < (long)dVar10) {
    uVar9 = uVar7;
  }
LAB_015952a8:
  puVar5 = (ulong *)v8::internal::String::Flatten(param_3,param_2,0);
  plVar3 = (long *)*puVar5;
  if (uVar9 < *(uint *)((long)plVar3 + 7)) {
    local_58 = (uint)*(ushort *)
                      (((ulong)plVar3 & 0xffffffff00000000 | (ulong)*(uint *)((long)plVar3 - 1)) + 7
                      );
    local_54 = uVar9;
    local_50 = plVar3;
    uVar6 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_58,&local_50,&local_54);
    lVar8 = (uVar6 & 0xffff) << 1;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x430);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return lVar8;
}

