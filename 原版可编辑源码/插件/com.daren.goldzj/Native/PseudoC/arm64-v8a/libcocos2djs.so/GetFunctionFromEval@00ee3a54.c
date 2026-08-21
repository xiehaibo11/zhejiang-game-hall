
/* v8::internal::Compiler::GetFunctionFromEval(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::LanguageMode,
   v8::internal::ParseRestriction, int, int, int) */

ulong * v8::internal::Compiler::GetFunctionFromEval
                  (long *param_1,ulong *param_2,ulong *param_3,uint param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  CompilationCache *pCVar6;
  ulong *puVar7;
  CanonicalHandleScope *pCVar8;
  ulong *puVar9;
  ulong *puVar10;
  StandardFrame *extraout_x1;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  Isolate *pIVar17;
  FrameSummary aFStack_758 [24];
  ulong *local_740;
  ParseInfo aPStack_720 [8];
  uint local_718;
  int local_6e0;
  ulong *local_6c8;
  ulong local_640;
  undefined1 uStack_638;
  FrameSummary *local_b8;
  ulong local_a0;
  undefined1 local_98;
  undefined1 auStack_90 [8];
  char local_88;
  int local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar4 = *(uint *)((long)param_3 + 4);
  plVar1 = (long *)((ulong)uVar4 << 0x20 | 0x9520);
  lVar16 = *plVar1;
  iVar2 = *(int *)(*param_1 + 7);
  if (*(char *)(lVar16 + 0x1958) == '\0') {
    *(char *)(lVar16 + 0x1958) = '\x01';
    piVar5 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar16 + 0x1940));
    *(int **)(lVar16 + 0x1950) = piVar5;
  }
  else {
    piVar5 = *(int **)(lVar16 + 0x1950);
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + iVar2;
  }
  lVar16 = *plVar1;
  pIVar17 = (Isolate *)((ulong)uVar4 << 0x20);
  if (*(char *)(lVar16 + 0x19d8) == '\0') {
    *(char *)(lVar16 + 0x19d8) = '\x01';
    piVar5 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar16 + 0x19c0));
    *(int **)(lVar16 + 0x19d0) = piVar5;
  }
  else {
    piVar5 = *(int **)(lVar16 + 0x19d0);
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + iVar2;
  }
  pCVar6 = *(CompilationCache **)(pIVar17 + 0x9518);
  if (param_6 != -1 && param_5 == 1) {
    param_7 = -param_6;
  }
  CompilationCache::LookupEval(auStack_90,pCVar6,param_1,param_2,param_3,param_4 & 1,param_7);
  uVar15 = CONCAT44(uStack_74,local_78);
  if ((local_78 == 0) || (local_88 == '\0')) {
    puVar7 = (ulong *)0x0;
  }
  else if (*(CanonicalHandleScope **)(pIVar17 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar17 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar17 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar17);
    }
    *(ulong **)(pIVar17 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar15;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar17 + 0x95b8),uVar15);
  }
  uVar15 = CONCAT44(uStack_7c,local_80);
  local_98 = 0;
  local_a0 = 0;
  if ((local_80 == 0) || (local_88 == '\0')) {
    ParseInfo::ParseInfo(aPStack_720,pIVar17);
    uVar13 = *param_2 & 0xffffffff00000000;
    uVar12 = uVar13 | *(uint *)(*param_2 + 0xf);
    uVar15 = uVar12;
    if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x5b) {
      uVar15 = uVar13 | *(uint *)(uVar12 + 0xb);
    }
    if (((uVar15 & 1) == 0) ||
       (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x65)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(uVar15 + 0x2f) >> 4 & 3;
    }
    if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x5b) {
      uVar12 = uVar13 | *(uint *)(uVar12 + 0xb);
    }
    if ((uVar12 & 1) == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 1;
      if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x65) {
        uVar11 = (*(uint *)(uVar12 + 0x2f) >> 3 ^ 0xffffffff) & 1;
      }
    }
    puVar9 = (ulong *)ParseInfo::CreateScript(aPStack_720,pIVar17,param_1,uVar4,uVar11,0);
    *(uint *)(*puVar9 + 0x2f) = *(uint *)(*puVar9 + 0x2f) & 0xfffffffc | 2;
    uVar15 = *puVar9;
    uVar12 = *param_2;
    *(int *)(uVar15 + 0x23) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x23,uVar12);
        uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x23,uVar12);
      }
    }
    if (param_8 == -1) {
      StackTraceFrameIterator::StackTraceFrameIterator
                ((StackTraceFrameIterator *)&local_640,pIVar17);
      if (local_b8 == (FrameSummary *)0x0) {
        param_8 = 0;
      }
      else {
        uVar4 = (**(code **)(*(long *)local_b8 + 8))();
        param_8 = 0;
        if ((uVar4 < 0x15) && ((1 << (ulong)(uVar4 & 0x1f) & 0x119010U) != 0)) {
          FrameSummary::GetTop(local_b8,extraout_x1);
          uVar12 = *puVar9;
          uVar15 = *local_740;
          uVar4 = *(uint *)(uVar15 + 0xb);
          *(uint *)(uVar12 + 0x23) = uVar4;
          if ((uVar4 & 1) != 0) {
            uVar15 = uVar15 & 0xffffffff00000000;
            uVar14 = uVar15 | uVar4;
            uVar15 = uVar15 | (ulong)uVar4 & 0xfffffffffffc0000;
            uVar13 = *(ulong *)(uVar15 + 8);
            if (((uint)uVar13 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar12,uVar12 + 0x23,uVar14);
              uVar13 = *(ulong *)(uVar15 | 8);
            }
            if (((uVar13 & 0x18) != 0) &&
               ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0x23,uVar14);
            }
          }
          uVar12 = *puVar9;
          puVar10 = (ulong *)FrameSummary::script(aFStack_758);
          uVar15 = *puVar10;
          if ((uVar15 & 1) == 0) {
            uVar4 = 0;
          }
          else if (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) ==
                   0x65) {
            uVar4 = *(uint *)(uVar15 + 0x2f) & 0x30;
          }
          else {
            uVar4 = 0;
          }
          *(uint *)(uVar12 + 0x2f) = *(uint *)(uVar12 + 0x2f) & 0xffffff0e | uVar4;
          param_8 = FrameSummary::code_offset(aFStack_758);
          param_8 = -param_8;
          FrameSummary::~FrameSummary(aFStack_758);
        }
      }
    }
    *(int *)(*puVar9 + 0x27) = param_8 << 1;
    uVar4 = local_718 | 0xc;
    if ((param_4 & 1) == 0) {
      uVar4 = local_718 & 0xfffffff3 | 4;
    }
    local_718 = uVar4 & 0xffffffdf;
    if (param_5 != 0) {
      local_718 = uVar4 | 0x20;
    }
    uVar15 = *param_3;
    local_6e0 = param_6;
    if (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x8f) {
      local_640 = uVar15;
      uVar15 = Context::scope_info((Context *)&local_640);
      if (*(CanonicalHandleScope **)(pIVar17 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_6c8 = *(ulong **)(pIVar17 + 0x95a0);
        if (local_6c8 == *(ulong **)(pIVar17 + 0x95a8)) {
          local_6c8 = (ulong *)HandleScope::Extend(pIVar17);
        }
        *(ulong **)(pIVar17 + 0x95a0) = local_6c8 + 1;
        *local_6c8 = uVar15;
      }
      else {
        local_6c8 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar17 + 0x95b8),uVar15);
      }
    }
    puVar9 = (ulong *)FUN_00ee31cc(aPStack_720,pIVar17,&local_a0);
    if (puVar9 == (ulong *)0x0) {
      ParseInfo::~ParseInfo(aPStack_720);
      puVar7 = (ulong *)0x0;
      goto LAB_00ee4154;
    }
    uVar4 = local_718 >> 0xd & 1;
    ParseInfo::~ParseInfo(aPStack_720);
  }
  else {
    pCVar8 = *(CanonicalHandleScope **)(pIVar17 + 0x95b8);
    if (pCVar8 == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar17 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar17 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar17);
      }
      *(ulong **)(pIVar17 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar15;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup(pCVar8,uVar15);
      uVar15 = *puVar9;
    }
    uVar12 = uVar15 & 0xffffffff00000000;
    uVar15 = uVar12 | *(uint *)(uVar15 + 0xf);
    if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar15 - 1)) == 0x5b) {
      uVar15 = uVar12 | *(uint *)(uVar15 + 0xb);
    }
    pCVar8 = *(CanonicalHandleScope **)(pIVar17 + 0x95b8);
    if (pCVar8 == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(pIVar17 + 0x95a0);
      if (puVar10 == *(ulong **)(pIVar17 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(pIVar17);
      }
      *(ulong **)(pIVar17 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar15;
    }
    else {
      CanonicalHandleScope::Lookup(pCVar8,uVar15);
    }
    IsCompiledScope::IsCompiledScope
              ((IsCompiledScope *)&local_640,*puVar9,*puVar9 & 0xffffffff00000000);
    uVar4 = 1;
    local_a0 = local_640;
    local_98 = uStack_638;
  }
  if (((local_80 == 0) || (local_88 == '\0')) || (local_78 == 0)) {
    puVar7 = (ulong *)Factory::NewFunctionFromSharedFunctionInfo
                                ((Factory *)pIVar17,puVar9,param_3,0);
    JSFunction::InitializeFeedbackCell();
    if (uVar4 != 0) {
      uVar15 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x13);
      if (*(CanonicalHandleScope **)(pIVar17 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(pIVar17 + 0x95a0);
        if (puVar10 == *(ulong **)(pIVar17 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(pIVar17);
        }
        *(ulong **)(pIVar17 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar15;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar17 + 0x95b8),uVar15);
      }
      CompilationCache::PutEval(pCVar6,param_1,param_2,param_3,puVar9,puVar10,param_7);
    }
  }
  else {
    puVar7 = (ulong *)Factory::NewFunctionFromSharedFunctionInfo
                                ((Factory *)pIVar17,puVar9,param_3,puVar7,0);
  }
LAB_00ee4154:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}

