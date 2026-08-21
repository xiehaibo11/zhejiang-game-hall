
ulong FUN_015814e0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  void **ppvVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  void *__s;
  Isolate *pIVar17;
  undefined8 *puVar18;
  Isolate *pIVar19;
  int iVar20;
  ulong uVar21;
  code *pcVar22;
  uint uVar23;
  ulong uVar24;
  double dVar25;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  void *local_d8;
  ulong uStack_d0;
  IncrementalStringBuilder aIStack_c8 [40];
  undefined **local_a0;
  void **local_98;
  undefined ***local_80;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x1e3);
  }
  if (DAT_01d47260 == (byte *)0x0) {
    plVar12 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47260 = (byte *)(**(code **)(*plVar12 + 0x10))(plVar12,"disabled-by-default-v8.runtime");
  }
  pbVar9 = DAT_01d47260;
  local_120 = (byte **)0x0;
  if ((*DAT_01d47260 & 5) != 0) {
    local_a0 = (undefined **)0x0;
    local_98 = (void **)0x0;
    plVar12 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar13 = (**(code **)(*plVar12 + 0x18))
                       (plVar12,0x58,pbVar9,
                        "V8.Runtime_Runtime_StringReplaceNonGlobalRegExpWithFunction",0,0,0,0,0,0,0,
                        &local_a0,0);
    ppvVar11 = local_98;
    local_98 = (void **)0x0;
    if (ppvVar11 != (void **)0x0) {
      (**(code **)((long)*ppvVar11 + 8))();
    }
    ppuVar10 = local_a0;
    local_a0 = (undefined **)0x0;
    if (ppuVar10 != (undefined **)0x0) {
      (**(code **)(*ppuVar10 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_StringReplaceNonGlobalRegExpWithFunction";
    local_118 = pbVar9;
    local_108 = uVar13;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar21 = *param_2;
  if (((uVar21 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar16 = param_2 + -1;
  uVar21 = *puVar16;
  if (((uVar21 & 1) == 0) ||
     (*(short *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) != 0x42e)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSRegExp()");
  }
  uVar21 = param_2[-2];
  if (((uVar21 & 1) == 0) ||
     (*(ushort *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSReceiver()");
  }
  uVar21 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar21 = uVar21 | *(uint *)((uVar21 | *(uint *)((uVar21 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x247);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar14 = puVar1;
    if (puVar2 == puVar1) {
      puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
    *puVar14 = uVar21;
  }
  else {
    puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
  }
  uVar21 = *puVar16;
  uVar3 = *(uint *)((uVar21 & 0xffffffff00000000 | (ulong)*(uint *)(uVar21 + 0xb)) + 0xf);
  if ((uVar3 >> 4 & 1) == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(uint *)(uVar21 + 0x17);
    uVar21 = uVar21 & 0xffffffff00000000 | (ulong)uVar23;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar15 = *(ulong **)(param_3 + 0x95a0);
      if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
        puVar15 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar15 + 1;
      *puVar15 = uVar21;
      if ((uVar23 & 1) != 0) goto LAB_0158177c;
LAB_01581718:
      uVar21 = (ulong)(((uint)(uVar21 >> 1) & 0x7fffffff & ((int)uVar21 >> 0x1f ^ 0xffffffffU)) << 1
                      );
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar15 = *(ulong **)(param_3 + 0x95a0);
        if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
          puVar15 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar15 + 1;
        *puVar15 = uVar21;
      }
      else {
        puVar15 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
      }
    }
    else {
      puVar15 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
      uVar21 = *puVar15;
      if ((uVar21 & 1) == 0) goto LAB_01581718;
LAB_0158177c:
      puVar15 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar15);
    }
    if (puVar15 == (ulong *)0x0) {
      uVar21 = *(ulong *)(param_3 + 0x180);
      goto LAB_01581c20;
    }
    uVar21 = *puVar15;
    if ((uVar21 & 1) == 0) {
      uVar23 = 0;
      if (1 < (int)uVar21) {
        uVar23 = (int)uVar21 >> 1;
      }
    }
    else if (1.0 <= *(double *)(uVar21 + 3)) {
      dVar25 = (double)NEON_fminnm(*(double *)(uVar21 + 3),0x41efffffffe00000);
      uVar23 = (int)dVar25;
    }
    else {
      uVar23 = 0;
    }
  }
  uVar21 = *(ulong *)(param_3 + 0xb0);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar15 = *(ulong **)(param_3 + 0x95a0);
    if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
      puVar15 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar15 + 1;
    *puVar15 = uVar21;
  }
  else {
    puVar15 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar21);
  }
  if ((uVar23 <= *(uint *)(*param_2 + 7)) &&
     (puVar15 = (ulong *)v8::internal::RegExp::Exec(param_3,puVar16,param_2,uVar23,puVar14),
     puVar15 == (ulong *)0x0)) {
    uVar21 = *(ulong *)(param_3 + 0x180);
    goto LAB_01581c20;
  }
  uVar21 = *puVar15;
  if (((uVar21 & 1) != 0) && ((int)uVar21 == *(int *)(param_3 + 0xb0))) {
    if ((uVar3 >> 4 & 1) != 0) {
      *(undefined4 *)(*puVar16 + 0x17) = 0;
    }
    uVar21 = *param_2;
    goto LAB_01581c20;
  }
  uVar4 = *(uint *)(uVar21 + 0x17);
  uVar23 = *(int *)(uVar21 + 0x13) >> 1;
  if ((uVar3 >> 4 & 1) != 0) {
    *(uint *)(*puVar16 + 0x17) = uVar4 & 0xfffffffe;
  }
  v8::internal::IncrementalStringBuilder::IncrementalStringBuilder(aIStack_c8,param_3);
  puVar14 = param_2;
  if (*(uint *)(*param_2 + 7) != uVar23) {
    puVar14 = (ulong *)v8::internal::Factory::NewProperSubString
                                 ((Factory *)param_3,param_2,0,uVar23);
  }
  v8::internal::IncrementalStringBuilder::AppendString(aIStack_c8,puVar14);
  iVar5 = *(int *)(*puVar15 + 7);
  iVar20 = iVar5 >> 1;
  if (iVar20 < 0) {
    iVar20 = iVar20 + 1;
  }
  uVar3 = iVar20 >> 1;
  if (iVar5 < 8) {
LAB_01581968:
    bVar8 = false;
    puVar16 = (ulong *)0x0;
    iVar20 = 2;
  }
  else {
    uVar21 = *puVar16 & 0xffffffff00000000;
    uVar6 = *(uint *)((uVar21 | *(uint *)(*puVar16 + 0xb)) + 0x2b);
    if (((uVar6 & 1) == 0) ||
       (uVar24 = uVar21 | uVar6,
       0xe < *(ushort *)((uVar21 | 7) + (ulong)*(uint *)(uVar24 - 1)) - 0x76)) goto LAB_01581968;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar16 = *(ulong **)(param_3 + 0x95a0);
      if (puVar16 == *(ulong **)(param_3 + 0x95a8)) {
        puVar16 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar16 + 1;
      *puVar16 = uVar24;
    }
    else {
      puVar16 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
    }
    iVar20 = 3;
    bVar8 = true;
  }
  if ((0xfffe < uVar3) || (uVar6 = iVar20 + uVar3, 0xfffe < uVar6)) {
    puVar18 = (undefined8 *)v8::internal::Factory::NewRangeError((Factory *)param_3,0x132,0,0,0);
    uVar21 = v8::internal::Isolate::Throw(param_3,*puVar18,0);
    goto LAB_01581c20;
  }
  uVar21 = (ulong)uVar6;
  uVar24 = uVar21 << 3;
  __s = operator_new__(uVar24,(nothrow_t *)&std::nothrow);
  if (__s == (void *)0x0) {
    plVar12 = (long *)v8::internal::V8::GetCurrentPlatform();
    (**(code **)(*plVar12 + 0x18))();
    __s = operator_new__(uVar24,(nothrow_t *)&std::nothrow);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if (uVar6 != 0) {
    memset(__s,0,uVar24);
  }
  local_d8 = __s;
  uStack_d0 = uVar21;
  if (iVar5 < 4) {
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    do {
      pIVar17 = (Isolate *)
                v8::internal::RegExpUtils::GenericCaptureGetter
                          (param_3,puVar15,uVar21 & 0xffffffff,&local_a0);
      pIVar19 = param_3 + 0xa0;
      if ((char)local_a0 != '\0') {
        pIVar19 = pIVar17;
      }
      *(Isolate **)((long)local_d8 + uVar21 * 8) = pIVar19;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (int)uVar3);
  }
  uVar24 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar23 << 1;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar14 = *(ulong **)(param_3 + 0x95a0);
    if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
      puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
    *puVar14 = uVar24;
  }
  else {
    puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar24);
  }
  *(ulong **)((long)local_d8 + (uVar21 & 0xffffffff) * 8) = puVar14;
  *(ulong **)((long)local_d8 + (ulong)((int)uVar21 + 1) * 8) = param_2;
  if (bVar8) {
    local_98 = &local_d8;
    local_a0 = &PTR_FUN_01cc91c8;
    local_80 = &local_a0;
    uVar13 = FUN_015870e0(param_3,puVar16,&local_a0);
    *(undefined8 *)((long)local_d8 + (ulong)((int)uVar21 + 2) * 8) = uVar13;
    if (&local_a0 == local_80) {
      pcVar22 = (code *)(*local_80)[4];
    }
    else {
      if (local_80 == (undefined ***)0x0) goto LAB_01581b4c;
      pcVar22 = (code *)(*local_80)[5];
    }
    (*pcVar22)();
  }
LAB_01581b4c:
  puVar16 = (ulong *)v8::internal::Execution::Call
                               (param_3,param_2 + -2,param_3 + 0xa0,uVar6,local_d8);
  if ((puVar16 == (ulong *)0x0) ||
     (((uVar21 = *puVar16, (uVar21 & 1) == 0 ||
       (0x3f < *(ushort *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)))) &&
      (puVar16 = (ulong *)v8::internal::Object::ConvertToString(param_3,puVar16),
      puVar16 == (ulong *)0x0)))) {
LAB_01581c08:
    pIVar19 = param_3 + 0x180;
  }
  else {
    iVar20 = (int)uVar4 >> 1;
    v8::internal::IncrementalStringBuilder::AppendString(aIStack_c8,puVar16);
    if (iVar20 != 0) {
      param_2 = (ulong *)v8::internal::Factory::NewProperSubString
                                   ((Factory *)param_3,param_2,iVar20,*(undefined4 *)(*param_2 + 7))
      ;
    }
    v8::internal::IncrementalStringBuilder::AppendString(aIStack_c8,param_2);
    pIVar19 = (Isolate *)v8::internal::IncrementalStringBuilder::Finish(aIStack_c8);
    if (pIVar19 == (Isolate *)0x0) goto LAB_01581c08;
  }
  uVar21 = *(ulong *)pIVar19;
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
LAB_01581c20:
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar12 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar12 + 0x28))(plVar12,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

