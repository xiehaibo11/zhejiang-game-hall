
/* v8::internal::Compiler::CollectSourcePositions(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

undefined4 v8::internal::Compiler::CollectSourcePositions(Isolate *param_1,ulong *param_2)

{
  undefined4 uVar1;
  long lVar2;
  byte *pbVar3;
  RuntimeCallStats *pRVar4;
  int iVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *local_210;
  long *local_208;
  RuntimeCallStats *local_188;
  undefined8 local_168;
  byte **local_130;
  byte *local_128;
  char *local_120;
  undefined8 local_118;
  RuntimeCallStats *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined **local_e8;
  StackGuard *local_e0;
  int local_c8;
  SaveAndSwitchContext aSStack_b8 [24];
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  SaveAndSwitchContext::SaveAndSwitchContext(aSStack_b8,param_1,0);
  uVar14 = *param_2;
  uVar12 = uVar14 & 0xffffffff00000000;
  uVar16 = uVar12 | *(uint *)(uVar14 + 0xf);
  uVar15 = uVar12 | 7;
  if ((*(short *)(uVar15 + *(uint *)(uVar16 - 1)) == 0x5b) &&
     (*(short *)(uVar15 + *(uint *)((uVar12 | *(uint *)(uVar16 + 0x13)) - 1)) == 0x86)) {
    uVar13 = *(uint *)(uVar16 + 0xf);
  }
  else {
    uVar13 = *(uint *)(uVar14 + 3);
    if (((uVar13 & 1) == 0) || (*(short *)(uVar15 + *(uint *)((uVar12 | uVar13) - 1)) != 0x86)) {
      uVar13 = *(uint *)((uVar12 | *(uint *)(uVar14 + 3)) + 3);
    }
    else {
      uVar13 = *(uint *)(uVar14 + 3);
    }
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(param_1 + 0x95a0);
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar12 | uVar13;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12 | uVar13);
  }
  uVar12 = GetCurrentStackPosition();
  if (uVar12 < *(ulong *)(param_1 + 0x58)) {
    uVar12 = *puVar6;
    uVar14 = *(ulong *)((uVar12 & 0xffffffff00000000) + 0x180);
    *(int *)(uVar12 + 0xf) = (int)uVar14;
    if ((uVar14 & 1) != 0) {
      uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xf,uVar14);
        uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xf,uVar14);
        uVar11 = 0;
        goto LAB_00ee0e40;
      }
    }
    uVar11 = 0;
    goto LAB_00ee0e40;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 3;
  InterruptsScope::InterruptsScope((InterruptsScope *)&local_e8,param_1,0xff,0);
  uStack_108 = 0;
  local_110 = (RuntimeCallStats *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_e8 = &PTR__InterruptsScope_01c98490;
  local_f0 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_110 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0x76);
  }
  if (DAT_01d3ebc8 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ebc8 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ebc8;
  local_130 = (byte **)0x0;
  if ((*DAT_01d3ebc8 & 5) != 0) {
    local_210 = (long *)0x0;
    local_208 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar3,"V8.CollectSourcePositions",0,0,0,0,0,0,0,&local_210,0);
    plVar7 = local_208;
    local_208 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_210;
    local_210 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_130 = &local_128;
    local_120 = "V8.CollectSourcePositions";
    local_128 = pbVar3;
    local_118 = uVar8;
  }
  lVar18 = *(long *)(param_1 + 0x9520);
  TimedHistogram::Start
            ((TimedHistogram *)(lVar18 + 0xa18),(ElapsedTimer *)(lVar18 + 0xa48),
             *(Isolate **)(*(long *)(lVar18 + 0xa38) + 0x10));
  ParseInfo::ParseInfo((ParseInfo *)&local_210,param_1,param_2);
  plVar7 = local_208;
  local_208 = (long *)((ulong)local_208 | 0x8000100);
  if (FLAG_allow_natives_syntax != '\0') {
    local_208 = (long *)((ulong)plVar7 | 0x8040100);
  }
  uVar12 = parsing::ParseAny(&local_210,param_2,param_1,1);
  if ((uVar12 & 1) == 0) {
LAB_00ee0d50:
    uVar12 = *puVar6;
    uVar14 = *(ulong *)((uVar12 & 0xffffffff00000000) + 0x180);
    *(int *)(uVar12 + 0xf) = (int)uVar14;
    if ((uVar14 & 1) != 0) {
      uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xf,uVar14);
        uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xf,uVar14);
      }
    }
    uVar11 = 0;
    *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
  }
  else {
    ParseInfo::ResetCharacterStream((ParseInfo *)&local_210);
    uStack_98 = 0;
    local_a0 = (RuntimeCallStats *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    local_80 = 0;
    if ((local_188 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
      local_a0 = local_188;
      uVar11 = 0x42f;
      if (*(int *)(local_188 + 0x14) == 1) {
        uVar11 = 0x430;
      }
      RuntimeCallStats::Enter(local_188,(RuntimeCallTimer *)((ulong)&local_a0 | 8),uVar11);
    }
    uVar12 = Rewriter::Rewrite((ParseInfo *)&local_210);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = DeclarationScope::Analyze((ParseInfo *)&local_210);
      uVar12 = uVar12 & 0xffffffff;
    }
    if (local_a0 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
    }
    if ((uVar12 & 1) == 0) goto LAB_00ee0d50;
    interpreter::Interpreter::NewSourcePositionCollectionJob
              ((Interpreter *)&local_a0,&local_210,local_168,puVar6,
               *(undefined8 *)(param_1 + 0x95d0));
    pRVar4 = local_a0;
    if (local_a0 == (RuntimeCallStats *)0x0) {
LAB_00ee0cb0:
      uVar12 = *puVar6;
      uVar14 = *(ulong *)((uVar12 & 0xffffffff00000000) + 0x180);
      *(int *)(uVar12 + 0xf) = (int)uVar14;
      if ((uVar14 & 1) != 0) {
        uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xf,uVar14);
          uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xf,uVar14);
        }
      }
      uVar11 = 0;
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
      if (pRVar4 != (RuntimeCallStats *)0x0) goto LAB_00ee0d24;
    }
    else {
      lVar9 = base::TimeTicks::HighResolutionNow();
      iVar5 = (**(code **)(*(long *)pRVar4 + 0x10))(pRVar4);
      uVar11 = 2;
      if (iVar5 != 0) {
        uVar11 = 4;
      }
      *(undefined4 *)(pRVar4 + 8) = uVar11;
      lVar10 = base::TimeTicks::HighResolutionNow();
      *(long *)(pRVar4 + 0x30) = (lVar10 - lVar9) + *(long *)(pRVar4 + 0x30);
      if (iVar5 != 0) goto LAB_00ee0cb0;
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
                ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)&local_a0,
                 param_1);
      lVar9 = base::TimeTicks::HighResolutionNow();
      iVar5 = (**(code **)(*(long *)pRVar4 + 0x18))(pRVar4,param_2,param_1);
      uVar11 = 3;
      if (iVar5 != 0) {
        uVar11 = 4;
      }
      *(undefined4 *)(pRVar4 + 8) = uVar11;
      lVar10 = base::TimeTicks::HighResolutionNow();
      *(long *)(pRVar4 + 0x38) = (lVar10 - lVar9) + *(long *)(pRVar4 + 0x38);
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
                ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)&local_a0);
      if (iVar5 != 0) goto LAB_00ee0cb0;
      uVar14 = *param_2;
      uVar12 = uVar14 & 0xffffffff00000000;
      uVar16 = uVar12 | *(uint *)(uVar14 + 0xf);
      uVar15 = uVar12 | 7;
      if ((*(short *)(uVar15 + *(uint *)(uVar16 - 1)) == 0x5b) &&
         (*(short *)(uVar15 + *(uint *)((uVar12 | *(uint *)(uVar16 + 0x13)) - 1)) == 0x86)) {
        uVar13 = *(uint *)(**(ulong **)(*(long *)(pRVar4 + 0x28) + 0x28) + 0xf);
        uVar16 = **(ulong **)(*(long *)(pRVar4 + 0x28) + 0x28) & 0xffffffff00000000;
        uVar17 = uVar16 | uVar13;
        if (((uVar13 & 1) == 0) || (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x85)
           ) {
          if (uVar13 == *(uint *)(uVar16 + 0x180)) {
            uVar17 = *(ulong *)(uVar16 + 0x3c0);
          }
          else {
            uVar17 = uVar16 | *(uint *)(uVar17 + 3);
          }
        }
        uVar13 = *(uint *)(uVar14 + 3);
        if (((uVar13 & 1) == 0) || (*(short *)(uVar15 + *(uint *)((uVar12 | uVar13) - 1)) != 0x86))
        {
          uVar13 = *(uint *)((uVar12 | *(uint *)(uVar14 + 3)) + 3);
        }
        else {
          uVar13 = *(uint *)(uVar14 + 3);
        }
        uVar14 = uVar12 | uVar13;
        *(int *)(uVar14 + 0xf) = (int)uVar17;
        if ((uVar17 & 1) != 0) {
          uVar15 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xf,uVar17);
            uVar15 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) &&
             ((*(byte *)((uVar12 | (ulong)uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xf,uVar17);
          }
        }
      }
      uVar11 = 1;
LAB_00ee0d24:
      (**(code **)(*(long *)pRVar4 + 8))(pRVar4);
    }
  }
  ParseInfo::~ParseInfo((ParseInfo *)&local_210);
  TimedHistogram::Stop
            ((TimedHistogram *)(lVar18 + 0xa18),(ElapsedTimer *)(lVar18 + 0xa48),
             *(Isolate **)(*(long *)(lVar18 + 0xa38) + 0x10));
  if ((local_130 != (byte **)0x0) && (*local_128 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_128,local_120,local_118);
  }
  if (local_110 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
  }
  local_e8 = &PTR__InterruptsScope_01c984b0;
  if (local_c8 != 2) {
    StackGuard::PopInterruptsScope(local_e0);
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
LAB_00ee0e40:
  SaveContext::~SaveContext((SaveContext *)aSStack_b8);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

