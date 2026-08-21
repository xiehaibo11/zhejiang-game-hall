
/* v8::internal::Compiler::GetSharedFunctionInfoForScript(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Compiler::ScriptDetails const&,
   v8::ScriptOriginOptions, v8::Extension*, v8::internal::ScriptData*,
   v8::ScriptCompiler::CompileOptions, v8::ScriptCompiler::NoCacheReason, v8::internal::NativesFlag)
    */

ulong * v8::internal::Compiler::GetSharedFunctionInfoForScript
                  (Isolate *param_1,long *param_2,undefined8 *param_3,uint param_4,long param_5,
                  undefined8 param_6,int param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  char cVar7;
  int *piVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  CompilationCache *pCVar15;
  undefined8 uVar16;
  ulong uVar17;
  RuntimeCallStats *local_1f0;
  ulong uStack_1e8;
  long local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  byte **local_108;
  byte *local_100;
  char *local_f8;
  undefined8 local_f0;
  Isolate *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  TimedHistogram *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_80;
  undefined1 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_d8 = 0;
  local_e8 = param_1;
  local_e0 = base::TimeTicks::HighResolutionNow();
  lVar13 = *(long *)(param_1 + 0x9520);
  local_d0 = (TimedHistogram *)(lVar13 + 0xb30);
  TimedHistogram::Start
            (local_d0,(ElapsedTimer *)(lVar13 + 0xb60),
             *(Isolate **)(*(long *)(lVar13 + 0xb50) + 0x10));
  local_c4 = 0;
  lVar13 = *(long *)(param_1 + 0x9520);
  iVar4 = *(int *)(*param_2 + 7);
  local_c8 = param_8;
  if (*(char *)(lVar13 + 0x1978) == '\0') {
    *(char *)(lVar13 + 0x1978) = '\x01';
    piVar8 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar13 + 0x1960));
    *(int **)(lVar13 + 0x1970) = piVar8;
  }
  else {
    piVar8 = *(int **)(lVar13 + 0x1970);
  }
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + iVar4;
  }
  lVar13 = *(long *)(param_1 + 0x9520);
  if (*(char *)(lVar13 + 0x19d8) == '\0') {
    *(char *)(lVar13 + 0x19d8) = '\x01';
    piVar8 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar13 + 0x19c0));
    *(int **)(lVar13 + 0x19d0) = piVar8;
    uVar2 = local_c4;
  }
  else {
    piVar8 = *(int **)(lVar13 + 0x19d0);
    uVar2 = local_c4;
  }
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + iVar4;
  }
  cVar7 = FLAG_use_strict;
  pCVar15 = *(CompilationCache **)(param_1 + 0x9518);
  local_78 = 0;
  local_80 = (long *)0x0;
  local_c4 = uVar2;
  if (param_5 == 0) {
    if (param_7 == 1) {
      local_c4._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
      local_c4._0_2_ = (undefined2)uVar2;
      local_c4._0_3_ = CONCAT12(1,(undefined2)local_c4);
    }
    uVar16 = param_3[1];
    uVar2 = *(undefined4 *)param_3;
    uVar3 = *(undefined4 *)((long)param_3 + 4);
    uVar14 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(param_1 + 0x95a0);
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar14;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    }
    puVar9 = (ulong *)CompilationCache::LookupScript
                                (pCVar15,param_2,uVar16,uVar2,uVar3,param_4,puVar9,cVar7 != '\0');
    if (puVar9 != (ulong *)0x0) {
      local_c4 = CONCAT31(local_c4._1_3_,1);
      goto LAB_00ee4c68;
    }
    if (param_7 != 1) goto LAB_00ee489c;
    local_c4._0_3_ = CONCAT12(1,(undefined2)local_c4);
    lVar13 = *(long *)(param_1 + 0x9520);
    TimedHistogram::Start
              ((TimedHistogram *)(lVar13 + 0xaf8),(ElapsedTimer *)(lVar13 + 0xb28),
               *(Isolate **)(*(long *)(lVar13 + 0xb18) + 0x10));
    local_1d0 = 0;
    uStack_1e8 = 0;
    local_1f0 = (RuntimeCallStats *)0x0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_1f0 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
      RuntimeCallStats::Enter(local_1f0,(ulong)&local_1f0 | 8,0x77);
    }
    if (DAT_01d3ebe0 == (byte *)0x0) {
      plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3ebe0 = (byte *)(**(code **)(*plVar11 + 0x10))
                                       (plVar11,"disabled-by-default-v8.compile");
    }
    pbVar6 = DAT_01d3ebe0;
    local_108 = (byte **)0x0;
    if ((*DAT_01d3ebe0 & 5) != 0) {
      local_c0 = (long *)0x0;
      local_b8 = (long *)0x0;
      plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar16 = (**(code **)(*plVar11 + 0x18))
                         (plVar11,0x58,pbVar6,"V8.CompileDeserialize",0,0,0,0,0,0,0,&local_c0,0);
      plVar11 = local_b8;
      local_b8 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      plVar11 = local_c0;
      local_c0 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      local_f8 = "V8.CompileDeserialize";
      local_108 = &local_100;
      local_100 = pbVar6;
      local_f0 = uVar16;
    }
    puVar9 = (ulong *)CodeSerializer::Deserialize(param_1,param_6,param_2,param_4);
    if (puVar9 == (ulong *)0x0) {
LAB_00ee4bc4:
      puVar9 = (ulong *)0x0;
      local_c4 = CONCAT13(1,(undefined3)local_c4);
    }
    else {
      uVar12 = *(uint *)(*puVar9 + 3);
      if ((uVar12 == 0x84) ||
         (((uVar12 & 1) != 0 &&
          (uVar14 = *puVar9 & 0xffffffff00000000,
          *(ushort *)((uVar14 | 7) + (ulong)*(uint *)((uVar14 | uVar12) - 1)) - 0x95 < 2))))
      goto LAB_00ee4bc4;
      IsCompiledScope::IsCompiledScope
                ((IsCompiledScope *)&local_c0,*puVar9,*puVar9 & 0xffffffff00000000);
      local_80 = local_c0;
      local_78 = SUB81(local_b8,0);
      uVar14 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(param_1 + 0x95a0);
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar14;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
      }
      CompilationCache::PutScript(pCVar15,param_2,puVar10,cVar7 != '\0',puVar9);
      uVar14 = *puVar9 & 0xffffffff00000000;
      uVar17 = uVar14 | *(uint *)(*puVar9 + 0xf);
      if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x5b) {
        uVar17 = uVar14 | *(uint *)(uVar17 + 0xb);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(param_1 + 0x95a0);
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar17;
      }
      else {
        CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
      }
    }
    if ((local_108 != (byte **)0x0) && (*local_100 != 0)) {
      plVar11 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar11 + 0x28))(plVar11,local_100,local_f8,local_f0);
    }
    if (local_1f0 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_1f0,(RuntimeCallTimer *)((ulong)&local_1f0 | 8));
    }
    TimedHistogram::Stop
              ((TimedHistogram *)(lVar13 + 0xaf8),(ElapsedTimer *)(lVar13 + 0xb28),
               *(Isolate **)(*(long *)(lVar13 + 0xb18) + 0x10));
    if (puVar9 != (ulong *)0x0) goto LAB_00ee4c68;
  }
LAB_00ee489c:
  ParseInfo::ParseInfo((ParseInfo *)&local_1f0,param_1);
  local_90 = param_3[4];
  uStack_a8 = param_3[1];
  local_b0 = *param_3;
  uStack_98 = param_3[3];
  uStack_a0 = param_3[2];
  FUN_00ee4dfc(param_1,&local_1f0,param_2,&local_b0,param_4,param_9);
  uVar12 = (uint)uStack_1e8;
  if ((param_4 >> 3 & 1) != 0) {
    uVar12 = (uint)uStack_1e8 | 0x40;
    uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
  }
  uVar1 = uVar12 | 2;
  if (param_7 != 2) {
    uVar1 = uVar12 & 0xfffffffd;
  }
  uVar12 = uVar1 | 8;
  if (cVar7 == '\0' && (uVar1 & 8) == 0) {
    uVar12 = uVar1 & 0xfffffff7;
  }
  uStack_1e8 = CONCAT44(uStack_1e8._4_4_,uVar12);
  local_1e0 = param_5;
  puVar9 = (ulong *)FUN_00ee31cc(&local_1f0,param_1,&local_80);
  if ((puVar9 == (ulong *)0x0) || (param_5 != 0)) {
    if ((param_9 != 1) && (puVar9 == (ulong *)0x0)) {
      Isolate::ReportPendingMessages(param_1);
    }
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(param_1 + 0x95a0);
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar14;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    }
    CompilationCache::PutScript(pCVar15,param_2,puVar10,cVar7 != '\0',puVar9);
  }
  ParseInfo::~ParseInfo((ParseInfo *)&local_1f0);
LAB_00ee4c68:
  FUN_00ee4fcc(&local_e8);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

