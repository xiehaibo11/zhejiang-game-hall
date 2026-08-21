
undefined8 FUN_01598214(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  double dVar13;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b0;
  long local_a8;
  undefined8 uStack_a0;
  char local_90;
  long local_88;
  undefined **local_80;
  long *local_78;
  undefined8 uStack_70;
  char local_60;
  long local_58;
  
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x20f);
  }
  if (DAT_01d473f0 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d473f0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d473f0;
  local_100 = (byte **)0x0;
  if ((*DAT_01d473f0 & 5) != 0) {
    local_80 = (undefined **)0x0;
    local_78 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_StringCompareSequence",0,0,0,0,0,0,0,
                       &local_80,0);
    plVar5 = local_78;
    local_78 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    ppuVar4 = local_80;
    local_80 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_StringCompareSequence";
    local_f8 = pbVar3;
    local_e8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar8 = param_2[-1];
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar8 = param_2[-2];
  if ((uVar8 & 1) == 0) {
    iVar12 = (int)uVar8 >> 1;
    goto LAB_01598474;
  }
  if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  dVar13 = *(double *)(uVar8 + 3);
  if ((((-2147483648.0 <= dVar13) && (dVar13 <= 2147483647.0)) && (ABS(dVar13) != INFINITY)) &&
     ((!NAN(ABS(dVar13)) && (iVar12 = (int)dVar13, dVar13 == (double)(int)dVar13))))
  goto LAB_01598474;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar13 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_01598448;
    uVar8 = (ulong)dVar13 & 0xfffffffffffff;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar10 = (int)(uVar8 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_01598448:
      iVar12 = 0;
      goto LAB_01598474;
    }
    uVar8 = (ulong)dVar13 & 0xfffffffffffff;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar10 = (int)(uVar8 << ((ulong)uVar1 & 0x3f));
  }
  iVar12 = -iVar10;
  if (-1 < (long)dVar13) {
    iVar12 = iVar10;
  }
LAB_01598474:
  uVar7 = v8::internal::String::Flatten(param_3,param_2,0);
  v8::internal::FlatStringReader::FlatStringReader((FlatStringReader *)&local_80,param_3,uVar7);
  uVar7 = v8::internal::String::Flatten(param_3,param_2 + -1,0);
  v8::internal::FlatStringReader::FlatStringReader((FlatStringReader *)&local_b0,param_3,uVar7);
  if ((int)*(uint *)(param_2[-1] + 7) < 1) {
LAB_01598524:
    pIVar9 = param_3 + 0xb8;
  }
  else {
    uVar8 = 0;
    if (local_60 != '\0') goto LAB_01598508;
LAB_015984e4:
    uVar11 = *(ushort *)(local_58 + (long)iVar12 * 2 + uVar8 * 2);
    if (local_90 == '\0') goto LAB_01598510;
    while (uVar11 == *(byte *)(local_88 + uVar8)) {
      while( true ) {
        uVar8 = uVar8 + 1;
        if (*(uint *)(param_2[-1] + 7) == uVar8) goto LAB_01598524;
        if (local_60 == '\0') goto LAB_015984e4;
LAB_01598508:
        uVar11 = (ushort)*(byte *)(local_58 + iVar12 + uVar8);
        if (local_90 != '\0') break;
LAB_01598510:
        if (uVar11 != *(ushort *)(local_88 + uVar8 * 2)) goto LAB_0159851c;
      }
    }
LAB_0159851c:
    pIVar9 = param_3 + 0xc0;
  }
  uVar7 = *(undefined8 *)pIVar9;
  local_b0 = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(undefined8 *)((long)local_78 + 0xb790) = uStack_70;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  local_80 = local_b0;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  return uVar7;
}

