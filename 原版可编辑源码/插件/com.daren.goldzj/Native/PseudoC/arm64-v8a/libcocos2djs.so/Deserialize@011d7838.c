
/* v8::internal::CodeSerializer::Deserialize(v8::internal::Isolate*, v8::internal::ScriptData*,
   v8::internal::Handle<v8::internal::String>, v8::ScriptOriginOptions) */

ulong * v8::internal::CodeSerializer::Deserialize
                  (Isolate *param_1,Isolate *param_2,long *param_3,uint param_4)

{
  Mutex *this;
  uint uVar1;
  long lVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  Isolate *pIVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  void *pvVar22;
  Logger *this_00;
  Logger *pLVar23;
  undefined1 auVar24 [16];
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined **local_a8;
  void *local_a0;
  undefined4 local_98;
  char local_94;
  undefined **local_90;
  void *pvStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (FLAG_log_function_events == '\0' && FLAG_profile_deserialization == '\0') {
    lVar19 = 0;
    pIVar14 = param_2;
  }
  else {
    auVar24 = base::TimeTicks::HighResolutionNow();
    lVar19 = auVar24._0_8_;
    pIVar14 = auVar24._8_8_;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x95a0);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  lVar16 = *(long *)(param_1 + 0x95a8);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  pvVar22 = *(void **)(param_2 + 8);
  local_7c = 0;
  local_90 = &PTR__SerializedData_01cbb8a0;
  pvStack_88 = pvVar22;
  local_80 = uVar6;
  iVar4 = SerializedCodeData::SanityCheck
                    ((SerializedCodeData *)&local_90,pIVar14,
                     *(uint *)(*param_3 + 7) | (param_4 & 8) << 0x1c);
  local_a8 = &PTR__SerializedData_01cbb8a0;
  if (iVar4 != 0) {
    *param_2 = (Isolate)((byte)*param_2 | 2);
    local_98 = 0;
    local_94 = '\0';
    local_a0 = (void *)0x0;
    if (FLAG_profile_deserialization != '\0') {
      PrintF("[Cached code failed check]\n");
    }
    Histogram::AddSample((int)*(undefined8 *)(param_1 + 0x9520) + 0xa8);
    puVar18 = (ulong *)0x0;
    goto LAB_011d7f20;
  }
  local_94 = '\0';
  local_a0 = pvVar22;
  local_98 = uVar6;
  puVar18 = (ulong *)ObjectDeserializer::DeserializeSharedFunctionInfo(param_1,&local_a8,param_3);
  if (puVar18 == (ulong *)0x0) {
    if (FLAG_profile_deserialization != '\0') {
      PrintF("[Deserializing failed]\n");
    }
    puVar18 = (ulong *)0x0;
    goto LAB_011d7f20;
  }
  if (FLAG_profile_deserialization != '\0') {
    lVar9 = base::TimeTicks::HighResolutionNow();
    local_90 = (undefined **)(lVar9 - lVar19);
    base::TimeDelta::InMillisecondsF((TimeDelta *)&local_90);
    PrintF("[Deserializing from %d bytes took %0.3f ms]\n",(ulong)*(uint *)(param_2 + 0x10));
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x9558) + 0x88))();
  if (((uVar10 & 1) == 0) && (param_1[0xb7fc] == (Isolate)0x0)) {
    for (plVar20 = *(long **)(*(long *)(param_1 + 0xb6d8) + 0x10); plVar20 != (long *)0x0;
        plVar20 = (long *)*plVar20) {
      uVar10 = (**(code **)(*(long *)plVar20[2] + 0x88))();
      if ((uVar10 & 1) != 0) goto LAB_011d79d4;
    }
    iVar4 = 0;
  }
  else {
LAB_011d79d4:
    iVar4 = 1;
  }
  if (FLAG_interpreted_frames_native_stack != '\0') {
    CreateInterpreterDataForDeserializedCode(param_1,puVar18,iVar4);
  }
  uVar5 = Isolate::NeedsSourcePositionsForProfiling(param_1);
  if ((FLAG_log_function_events != '\0') || (iVar4 == 1)) {
    uVar10 = *puVar18 & 0xffffffff00000000;
    uVar21 = uVar10 | *(uint *)(*puVar18 + 0xf);
    if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar21 - 1)) == 0x5b) {
      uVar21 = uVar10 | *(uint *)(uVar21 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(param_1 + 0x95a0);
      if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar21;
      uVar1 = *(uint *)(uVar21 + 7);
      if ((uVar1 & 1) != 0) goto LAB_011d7ad4;
LAB_011d7af0:
      uVar10 = *(ulong *)(param_1 + 200);
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar21);
      uVar21 = *puVar11;
      uVar1 = *(uint *)(uVar21 + 7);
      if ((uVar1 & 1) == 0) goto LAB_011d7af0;
LAB_011d7ad4:
      uVar10 = uVar21 & 0xffffffff00000000 | (ulong)uVar1;
      if (0x3f < *(ushort *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))
      goto LAB_011d7af0;
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)(param_1 + 0x95a0);
      if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar12 + 1;
      *puVar12 = uVar10;
    }
    else {
      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    }
    if (FLAG_log_function_events != '\0') {
      this_00 = *(Logger **)(param_1 + 0x9558);
      uVar10 = Logger::is_logging(this_00);
      if ((uVar10 & 1) != 0) {
        iVar8 = *(int *)(*puVar11 + 0x1f);
        lVar9 = base::TimeTicks::HighResolutionNow();
        local_90 = (undefined **)(lVar9 - lVar19);
        pLVar23 = (Logger *)base::TimeDelta::InMillisecondsF((TimeDelta *)&local_90);
        local_b0 = *puVar18;
        uVar6 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_b0);
        local_b8 = *puVar18;
        uVar7 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_b8);
        Logger::FunctionEvent(pLVar23,this_00,"deserialize",iVar8 >> 1,uVar6,uVar7,*puVar12);
      }
    }
    if (iVar4 != 0) {
      Script::InitLineEnds(puVar11);
      SharedFunctionInfo::ScriptIterator::ScriptIterator
                ((ScriptIterator *)&local_90,param_1,*puVar11);
      while (uVar10 = SharedFunctionInfo::ScriptIterator::Next((ScriptIterator *)&local_90),
            local_b0 = uVar10, (int)uVar10 != 0) {
        uVar1 = *(uint *)(uVar10 + 3);
        if ((uVar1 != 0x84) &&
           (((uVar1 & 1) == 0 ||
            (1 < *(ushort *)
                  ((uVar10 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)uVar1) - 1)) - 0x95)))) {
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(param_1 + 0x95a0);
            if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
            *puVar13 = uVar10;
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
          }
          if ((uVar5 & 1) != 0) {
            SharedFunctionInfo::EnsureSourcePositionsAvailable(param_1,puVar13);
          }
          local_b8 = *puVar11;
          local_c0 = *puVar13;
          iVar4 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_c0);
          iVar4 = Script::GetLineNumber((Script *)&local_b8,iVar4);
          local_b8 = *puVar11;
          local_c0 = *puVar13;
          iVar8 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_c0);
          iVar8 = Script::GetColumnNumber((Script *)&local_b8,iVar8);
          lVar19 = *(long *)(param_1 + 0xb6d8);
          if ((((*(uint *)(local_b0 + 3) & 1) == 0) ||
              (*(short *)((local_b0 & 0xffffffff00000000 | 7) +
                         (ulong)*(uint *)((local_b0 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(local_b0 + 3)) - 1)) != 0x86)) &&
             (((*(uint *)(local_b0 + 3) & 1) == 0 ||
              (*(short *)((local_b0 & 0xffffffff00000000 | 7) +
                         (ulong)*(uint *)((local_b0 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(local_b0 + 3)) - 1)) != 0x61)))) {
            uVar10 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_b0);
          }
          else {
            uVar10 = local_b0 & 0xffffffff00000000;
            uVar17 = uVar10 | *(uint *)(local_b0 + 0xf);
            uVar21 = uVar10 | 7;
            if ((*(short *)(uVar21 + *(uint *)(uVar17 - 1)) == 0x5b) &&
               (*(short *)(uVar21 + *(uint *)((uVar10 | *(uint *)(uVar17 + 0x13)) - 1)) == 0x86)) {
              uVar10 = (ulong)*(uint *)(uVar17 + 0xf);
            }
            else if (((*(uint *)(local_b0 + 3) & 1) == 0) ||
                    (*(short *)(uVar21 + *(uint *)((uVar10 | *(uint *)(local_b0 + 3)) - 1)) != 0x86)
                    ) {
              uVar10 = (ulong)*(uint *)((local_b0 & 0xffffffff00000000 |
                                        (ulong)*(uint *)(local_b0 + 3)) + 3);
            }
            else {
              uVar10 = (ulong)*(uint *)(local_b0 + 3);
            }
            uVar10 = local_b0 & 0xffffffff00000000 | uVar10;
          }
          uVar17 = *puVar13;
          uVar21 = *puVar12;
          this = (Mutex *)(lVar19 + 0x28);
          base::Mutex::Lock(this);
          plVar20 = *(long **)(lVar19 + 0x10);
          if (plVar20 != (long *)0x0) {
            do {
              (**(code **)(*(long *)plVar20[2] + 0x28))
                        ((long *)plVar20[2],0x11,uVar10,uVar17,uVar21,iVar4 + 1,iVar8 + 1);
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          base::Mutex::Unlock(this);
        }
      }
    }
  }
  if ((uVar5 & 1) != 0) {
    uVar10 = *puVar18 & 0xffffffff00000000;
    uVar21 = uVar10 | *(uint *)(*puVar18 + 0xf);
    if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar21 - 1)) == 0x5b) {
      uVar21 = uVar10 | *(uint *)(uVar21 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(param_1 + 0x95a0);
      if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar21;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar21);
    }
    Script::InitLineEnds();
  }
  uVar10 = *puVar18;
  *(undefined8 *)(param_1 + 0x95a0) = uVar15;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar16) {
    *(long *)(param_1 + 0x95a8) = lVar16;
    HandleScope::DeleteExtensions(param_1);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar18 = *(ulong **)(param_1 + 0x95a0);
    if (puVar18 == *(ulong **)(param_1 + 0x95a8)) {
      puVar18 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar18 + 1;
    *puVar18 = uVar10;
  }
  else {
    puVar18 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  uVar15 = *(undefined8 *)(param_1 + 0x95a0);
  lVar16 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
LAB_011d7f20:
  local_a8 = &PTR__SerializedData_01c983e8;
  ppuVar3 = &PTR__SerializedData_01c983e8;
  if ((local_94 != '\0') && (ppuVar3 = local_a8, local_a0 != (void *)0x0)) {
    local_a8 = &PTR__SerializedData_01c983e8;
    operator_delete__(local_a0);
    ppuVar3 = local_a8;
  }
  local_a8 = ppuVar3;
  *(undefined8 *)(param_1 + 0x95a0) = uVar15;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar16) {
    *(long *)(param_1 + 0x95a8) = lVar16;
    HandleScope::DeleteExtensions(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar18;
}

