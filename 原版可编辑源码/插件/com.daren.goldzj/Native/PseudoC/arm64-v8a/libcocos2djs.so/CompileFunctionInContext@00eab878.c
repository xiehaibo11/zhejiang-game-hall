
/* v8::ScriptCompiler::CompileFunctionInContext(v8::Local<v8::Context>, v8::ScriptCompiler::Source*,
   unsigned long, v8::Local<v8::String>*, unsigned long, v8::Local<v8::Object>*,
   v8::ScriptCompiler::CompileOptions, v8::ScriptCompiler::NoCacheReason,
   v8::Local<v8::ScriptOrModule>*) */

ulong * v8::ScriptCompiler::CompileFunctionInContext
                  (ulong *param_1,undefined8 *param_2,uint param_3,long param_4,long param_5,
                  undefined8 *param_6,int param_7,undefined4 param_8,long *param_9)

{
  uint uVar1;
  undefined4 uVar2;
  ScriptData SVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  ulong *puVar8;
  ScriptData *this;
  CanonicalHandleScope *pCVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  Isolate *pIVar16;
  ulong uVar17;
  ulong *puVar18;
  ushort *puVar19;
  Logger *this_00;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  CallStatsScopedTracer aCStack_178 [8];
  long local_170;
  char *local_168;
  RuntimeCallStats *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  Isolate *local_120;
  long local_118;
  char local_110;
  Isolate local_10e;
  undefined **local_108;
  StackGuard *local_100;
  int local_e8;
  long local_d8;
  Isolate *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  ulong *local_b8;
  uint local_b0 [2];
  undefined4 local_a8 [2];
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  Isolate *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (param_1 == (ulong *)0x0) {
    pIVar16 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar16 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  }
  uVar17 = *(ulong *)(pIVar16 + 0xa8);
  if ((*(int *)(pIVar16 + 0x2c20) != (int)uVar17) &&
     (*(int *)(pIVar16 + 0x2c20) == *(int *)(pIVar16 + 0x188))) {
    puVar18 = (ulong *)0x0;
    goto LAB_00eac040;
  }
  local_b8 = *(ulong **)(pIVar16 + 0x95a0);
  if (local_b8 == *(ulong **)(pIVar16 + 0x95a8)) {
    local_b8 = (ulong *)internal::HandleScope::Extend(pIVar16);
  }
  *(ulong **)(pIVar16 + 0x95a0) = local_b8 + 1;
  *local_b8 = uVar17;
  HandleScope::Initialize((HandleScope *)&local_d0,(Isolate *)pIVar16);
  FUN_00eaadd8(&local_120,pIVar16,param_1);
  local_130 = 0;
  uStack_148 = 0;
  local_150 = (RuntimeCallStats *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_150 = (RuntimeCallStats *)(*(long *)(pIVar16 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_150,(ulong)&local_150 | 8,0x3c8);
  }
  this_00 = *(Logger **)(pIVar16 + 0x9558);
  uVar17 = internal::Logger::is_logging(this_00);
  if ((uVar17 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::ScriptCompiler::CompileFunctionInContext");
  }
  uVar2 = *(undefined4 *)(pIVar16 + 0x2c60);
  *(undefined4 *)(pIVar16 + 0x2c60) = 5;
  if (DAT_01d3eb48 == (byte *)0x0) {
    plVar7 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb48 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,&DAT_019c38f7);
  }
  local_170 = 0;
  if ((*DAT_01d3eb48 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_178,pIVar16,DAT_01d3eb48,"V8.ScriptCompiler");
  }
  puVar18 = (ulong *)internal::Factory::NewFixedArray((Factory *)pIVar16,param_3,0);
  uVar17 = local_a0;
  if (0 < (int)param_3) {
    uVar20 = 0;
    do {
      puVar21 = *(ulong **)(param_4 + uVar20 * 8);
      puVar8 = (ulong *)internal::String::Flatten(pIVar16,puVar21,0);
      uVar17 = *puVar8;
      uVar14 = *(uint *)(uVar17 + 7);
      if (uVar14 == 0) goto LAB_00eabe8c;
      local_a8[0] = 0;
      local_b0[0] = (uint)*(ushort *)
                           ((uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 - 1)) + 7);
      local_a0 = uVar17;
      uVar17 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                         (local_b0,&local_a0,local_a8);
      uVar1 = (uint)uVar17 & 0xffff;
      if (uVar1 < 0x80) {
        if (((&DAT_0199bfd8)[uVar17 & 0xffff] & 1) == 0) goto LAB_00eabe8c;
      }
      else {
        uVar17 = unibrow::ID_Start::Is(uVar1);
        if ((uVar17 & 1) == 0) goto LAB_00eabe8c;
      }
      local_a0 = *puVar8;
      auVar23 = internal::String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_a0);
      puVar19 = auVar23._0_8_;
      if (auVar23._8_8_ >> 0x20 == 1) {
        if (1 < (int)uVar14) {
          lVar11 = (ulong)uVar14 - 1;
          do {
            puVar19 = (ushort *)((long)puVar19 + 1);
            uVar14 = (uint)*(byte *)puVar19;
            if ((char)*(byte *)puVar19 < '\0') {
              uVar17 = unibrow::ID_Start::Is(uVar14);
              if (((uVar17 & 1) == 0) &&
                 (uVar17 = unibrow::ID_Continue::Is(uVar14), (uVar17 & 1) == 0)) goto LAB_00eabe8c;
            }
            else if (((byte)(&DAT_0199bfd8)[uVar14] >> 1 & 1) == 0) goto LAB_00eabe8c;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      else if (1 < (int)uVar14) {
        lVar11 = (ulong)uVar14 - 1;
        do {
          puVar19 = puVar19 + 1;
          uVar4 = *puVar19;
          if (uVar4 < 0x80) {
            if (((byte)(&DAT_0199bfd8)[uVar4] >> 1 & 1) == 0) goto LAB_00eabe8c;
          }
          else {
            uVar17 = unibrow::ID_Start::Is((uint)uVar4);
            if (((uVar17 & 1) == 0) &&
               (uVar17 = unibrow::ID_Continue::Is((uint)uVar4), (uVar17 & 1) == 0))
            goto LAB_00eabe8c;
          }
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar22 = *puVar21;
      uVar17 = *puVar18;
      lVar11 = uVar17 + (long)((int)uVar20 << 2);
      *(int *)(lVar11 + 7) = (int)uVar22;
      if ((uVar22 & 1) != 0) {
        uVar10 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
        lVar11 = lVar11 + 7;
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(uVar17,lVar11,uVar22);
          uVar10 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          internal::Heap_GenerationalBarrierSlow(uVar17,lVar11,uVar22);
        }
      }
      uVar20 = uVar20 + 1;
      uVar17 = local_a0;
    } while (uVar20 != param_3);
  }
  for (; param_5 != 0; param_5 = param_5 + -1) {
    puVar8 = (ulong *)*param_6;
    uVar20 = *puVar8;
    local_a0 = uVar17;
    if (*(ushort *)((uVar20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar20 - 1)) < 0xaa)
    goto LAB_00eabe8c;
    local_a0 = *param_1;
    if (*(short *)((local_a0 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_a0 - 1)) == 0x8f) {
      puVar21 = (ulong *)0x0;
      local_a0 = uVar17;
    }
    else {
      uVar17 = internal::Context::scope_info((Context *)&local_a0);
      if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar21 = *(ulong **)(pIVar16 + 0x95a0);
        if (puVar21 == *(ulong **)(pIVar16 + 0x95a8)) {
          puVar21 = (ulong *)internal::HandleScope::Extend(pIVar16);
        }
        *(ulong **)(pIVar16 + 0x95a0) = puVar21 + 1;
        *puVar21 = uVar17;
      }
      else {
        puVar21 = (ulong *)internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar17);
      }
    }
    uVar15 = internal::ScopeInfo::CreateForWithScope(pIVar16,puVar21);
    param_1 = (ulong *)internal::Factory::NewWithContext((Factory *)pIVar16,param_1,uVar15,puVar8);
    param_6 = param_6 + 1;
    uVar17 = local_a0;
  }
  lStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 1;
  if (param_2[1] != 0) {
    lStack_98 = param_2[1];
  }
  if ((ulong *)param_2[2] != (ulong *)0x0) {
    uVar17 = *(ulong *)param_2[2];
    if ((uVar17 & 1) == 0) {
      uVar14 = (int)uVar17 >> 1;
    }
    else {
      uVar14 = (uint)(long)*(double *)(uVar17 + 3);
    }
    local_a0 = (ulong)uVar14;
  }
  if ((ulong *)param_2[3] != (ulong *)0x0) {
    uVar17 = *(ulong *)param_2[3];
    if ((uVar17 & 1) == 0) {
      iVar12 = (int)uVar17 >> 1;
    }
    else {
      iVar12 = (int)(long)*(double *)(uVar17 + 3);
    }
    local_a0 = CONCAT44(iVar12,(undefined4)local_a0);
  }
  local_88 = pIVar16 + 0x168;
  if ((Isolate *)param_2[6] != (Isolate *)0x0) {
    local_88 = (Isolate *)param_2[6];
  }
  if (param_2[5] != 0) {
    local_90 = param_2[5];
  }
  if (param_7 == 1) {
    this = operator_new(0x18);
    internal::ScriptData::ScriptData
              (this,*(uchar **)param_2[7],*(int *)((undefined8 *)param_2[7] + 1));
  }
  else {
    this = (ScriptData *)0x0;
  }
  puVar8 = (ulong *)internal::Compiler::GetWrappedFunction
                              (*param_2,puVar18,param_1,&local_a0,*(undefined4 *)(param_2 + 4),this,
                               param_7,param_8);
  if (param_7 == 1) {
    *(byte *)(param_2[7] + 0xc) = (byte)*this >> 1 & 1;
    SVar3 = *this;
joined_r0x00eabdd8:
    if ((((byte)SVar3 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 8));
    }
    operator_delete(this);
  }
  else if (this != (ScriptData *)0x0) {
    SVar3 = *this;
    goto joined_r0x00eabdd8;
  }
  puVar18 = local_b8;
  if (puVar8 == (ulong *)0x0) {
    local_110 = '\x01';
    *(long *)(local_120 + 0x2c08) = local_d8;
    if (local_d8 == 0) {
      bVar6 = *(long *)(local_120 + 0x2bb8) == 0;
    }
    else {
      bVar6 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_120,bVar6);
LAB_00eabe8c:
    puVar18 = (ulong *)0x0;
    bVar6 = true;
  }
  else {
    if (((*local_b8 & 1) == 0) || ((int)*local_b8 != *(int *)(local_d0 + 0xa8))) {
      lVar11 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar11 == 0) {
LAB_00eac0c0:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar11 + 0xb738) == (code *)0x0) goto LAB_00eac0c0;
      (**(code **)(lVar11 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar11 + 0xb6b9) = 1;
    }
    bVar6 = false;
    *puVar18 = *puVar8;
  }
  if ((local_170 != 0) && (*local_168 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_178);
  }
  *(undefined4 *)(pIVar16 + 0x2c60) = uVar2;
  if (local_150 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_150,(RuntimeCallTimer *)((ulong)&local_150 | 8));
  }
  if (local_118 != 0) {
    lVar11 = *(long *)(local_120 + 0x95c0);
    lVar13 = *(long *)(lVar11 + 0x60) + -1;
    uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x50) + lVar13 * 8);
    *(long *)(lVar11 + 0x60) = lVar13;
    *(undefined8 *)(local_120 + 0x2bc8) = uVar15;
  }
  if (local_110 == '\0') {
    *(long *)(local_120 + 0x2c08) = local_d8;
  }
  local_120[0xb828] = local_10e;
  local_108 = &PTR__InterruptsScope_01c984b0;
  if (local_e8 != 2) {
    internal::StackGuard::PopInterruptsScope(local_100);
  }
  *(undefined8 *)(local_d0 + 0x95a0) = uStack_c8;
  *(int *)(local_d0 + 0x95b0) = *(int *)(local_d0 + 0x95b0) + -1;
  if (*(long *)(local_d0 + 0x95a8) != local_c0) {
    *(long *)(local_d0 + 0x95a8) = local_c0;
    internal::HandleScope::DeleteExtensions(local_d0);
  }
  if (bVar6) {
    puVar18 = (ulong *)0x0;
  }
  else if (param_9 != (long *)0x0) {
    pIVar16 = (Isolate *)(*puVar18 & 0xffffffff00000000);
    pCVar9 = *(CanonicalHandleScope **)((ulong)pIVar16 | 0x95b8);
    uVar17 = (ulong)pIVar16 | (ulong)*(uint *)(*puVar18 + 0xb);
    if (pCVar9 == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar16 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar16 + 0x95a8)) {
        puVar8 = (ulong *)internal::HandleScope::Extend(pIVar16);
      }
      *(ulong **)(pIVar16 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar17;
    }
    else {
      puVar8 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar9,uVar17);
      uVar17 = *puVar8;
    }
    uVar20 = uVar17 & 0xffffffff00000000;
    uVar17 = uVar20 | *(uint *)(uVar17 + 0xf);
    if (*(short *)((uVar20 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x5b) {
      uVar17 = uVar20 | *(uint *)(uVar17 + 0xb);
    }
    pCVar9 = *(CanonicalHandleScope **)((ulong)pIVar16 | 0x95b8);
    if (pCVar9 == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar16 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar16 + 0x95a8)) {
        puVar8 = (ulong *)internal::HandleScope::Extend(pIVar16);
      }
      *(ulong **)(pIVar16 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar17;
    }
    else {
      puVar8 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar9,uVar17);
    }
    *param_9 = (long)puVar8;
  }
LAB_00eac040:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return puVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

