
/* v8::internal::Compiler::GetWrappedFunction(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::FixedArray>, v8::internal::Handle<v8::internal::Context>,
   v8::internal::Compiler::ScriptDetails const&, v8::ScriptOriginOptions, v8::internal::ScriptData*,
   v8::ScriptCompiler::CompileOptions, v8::ScriptCompiler::NoCacheReason) */

undefined8
v8::internal::Compiler::GetWrappedFunction
          (long *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4,undefined4 param_5,
          undefined8 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char cVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  Isolate *this;
  ulong uVar16;
  RuntimeCallStats *local_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1af;
  ulong *local_188;
  Isolate *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  TimedHistogram *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  RuntimeCallStats *local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar12 = *(uint *)((long)param_3 + 4);
  this = (Isolate *)((ulong)uVar12 << 0x20);
  local_e8 = 0;
  local_f8 = this;
  local_f0 = base::TimeTicks::HighResolutionNow();
  plVar8 = (long *)((ulong)uVar12 << 0x20 | 0x9520);
  lVar13 = *plVar8;
  local_e0 = (TimedHistogram *)(lVar13 + 0xb30);
  TimedHistogram::Start
            (local_e0,(ElapsedTimer *)(lVar13 + 0xb60),
             *(Isolate **)(*(long *)(lVar13 + 0xb50) + 0x10));
  uStack_d4 = 0;
  lVar13 = *plVar8;
  iVar2 = *(int *)(*param_1 + 7);
  local_d8 = param_8;
  if (*(char *)(lVar13 + 0x19d8) == '\0') {
    *(char *)(lVar13 + 0x19d8) = '\x01';
    piVar7 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar13 + 0x19c0));
    *(int **)(lVar13 + 0x19d0) = piVar7;
    uVar4 = uStack_d4;
  }
  else {
    piVar7 = *(int **)(lVar13 + 0x19d0);
    uVar4 = uStack_d4;
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + iVar2;
  }
  cVar6 = FLAG_use_strict;
  if (param_7 == 1) {
    uStack_d4._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
    uStack_d4._0_3_ = CONCAT12(1,(short)uVar4);
    lVar13 = *plVar8;
    TimedHistogram::Start
              ((TimedHistogram *)(lVar13 + 0xaf8),(ElapsedTimer *)(lVar13 + 0xb28),
               *(Isolate **)(*(long *)(lVar13 + 0xb18) + 0x10));
    local_1c0 = 0;
    uStack_1d8 = 0;
    local_1e0 = (RuntimeCallStats *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_1e0 = (RuntimeCallStats *)(*plVar8 + 0x58a0);
      RuntimeCallStats::Enter(local_1e0,(ulong)&local_1e0 | 8,0x77);
    }
    if (DAT_01d3ebe8 == (byte *)0x0) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3ebe8 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.compile");
    }
    pbVar5 = DAT_01d3ebe8;
    local_a0 = (RuntimeCallStats *)0x0;
    if ((*DAT_01d3ebe8 & 5) != 0) {
      local_80 = (long *)0x0;
      local_78 = (long *)0x0;
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar9 = (**(code **)(*plVar8 + 0x18))
                        (plVar8,0x58,pbVar5,"V8.CompileDeserialize",0,0,0,0,0,0,0,&local_80,0);
      plVar8 = local_78;
      local_78 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      plVar8 = local_80;
      local_80 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      local_a0 = (RuntimeCallStats *)&local_98;
      local_90 = "V8.CompileDeserialize";
      local_98 = pbVar5;
      local_88 = uVar9;
    }
    puVar10 = (ulong *)CodeSerializer::Deserialize(this,param_6,param_1,param_5);
    if (puVar10 == (ulong *)0x0) {
      uStack_d4 = CONCAT13(1,(undefined3)uStack_d4);
    }
    if ((local_a0 != (RuntimeCallStats *)0x0) && (*local_98 != 0)) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar8 + 0x28))(plVar8,local_98,local_90,local_88);
    }
    if (local_1e0 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_1e0,(RuntimeCallTimer *)((ulong)&local_1e0 | 8));
    }
    TimedHistogram::Stop
              ((TimedHistogram *)(lVar13 + 0xaf8),(ElapsedTimer *)(lVar13 + 0xb28),
               *(Isolate **)(*(long *)(lVar13 + 0xb18) + 0x10));
    local_98 = (byte *)((ulong)local_98 & 0xffffffffffffff00);
    local_a0 = (RuntimeCallStats *)0x0;
    if (puVar10 == (ulong *)0x0) goto LAB_00ee5520;
    IsCompiledScope::IsCompiledScope
              ((IsCompiledScope *)&local_1e0,*puVar10,*puVar10 & 0xffffffff00000000);
    local_a0 = local_1e0;
    local_98 = (byte *)CONCAT71(local_98._1_7_,(char)uStack_1d8);
    uVar14 = *puVar10 & 0xffffffff00000000;
    uVar16 = uVar14 | *(uint *)(*puVar10 + 0xf);
    if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x5b) {
      uVar16 = uVar14 | *(uint *)(uVar16 + 0xb);
    }
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(this + 0x95a0);
      if (puVar11 == *(ulong **)(this + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar16;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar16);
    }
  }
  else {
    local_98 = (byte *)((ulong)local_98 & 0xffffffffffffff00);
    uStack_d4 = uVar4;
LAB_00ee5520:
    local_a0 = (RuntimeCallStats *)0x0;
    ParseInfo::ParseInfo((ParseInfo *)&local_1e0,this);
    local_b0 = param_4[4];
    uStack_c8 = param_4[1];
    local_d0 = *param_4;
    uStack_b8 = param_4[3];
    uStack_c0 = param_4[2];
    puVar10 = (ulong *)FUN_00ee4dfc(this,&local_1e0,param_1,&local_d0,param_5,0);
    uVar16 = *puVar10;
    uVar14 = *param_2;
    *(int *)(uVar16 + 0x23) = (int)uVar14;
    if ((uVar14 & 1) != 0) {
      uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x23,uVar14);
        uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x23,uVar14);
      }
    }
    local_1af = 4;
    uVar12 = (uint)uStack_1d8 | 0x8000004;
    uStack_1d8 = uStack_1d8 | 0x8000004;
    plVar8 = (long *)*param_3;
    if (*(short *)(((ulong)plVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar8 - 1)) !=
        0x8f) {
      local_80 = plVar8;
      uVar14 = Context::scope_info((Context *)&local_80);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_188 = *(ulong **)(this + 0x95a0);
        if (local_188 == *(ulong **)(this + 0x95a8)) {
          local_188 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = local_188 + 1;
        *local_188 = uVar14;
      }
      else {
        local_188 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
      }
      uVar12 = (uint)uStack_1d8;
    }
    uVar1 = uVar12 | 8;
    if (cVar6 == '\0' && (uVar12 & 8) == 0) {
      uVar1 = uVar12 & 0xfffffff7;
    }
    uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar1);
    lVar13 = FUN_00ee31cc(&local_1e0,this,&local_a0);
    if (lVar13 == 0) {
      Isolate::ReportPendingMessages(this);
      ParseInfo::~ParseInfo((ParseInfo *)&local_1e0);
      uVar9 = 0;
      goto LAB_00ee573c;
    }
    SharedFunctionInfo::ScriptIterator::ScriptIterator((ScriptIterator *)&local_80,this,*puVar10);
    do {
      uVar14 = SharedFunctionInfo::ScriptIterator::Next((ScriptIterator *)&local_80);
      if ((int)uVar14 == 0) {
        puVar10 = (ulong *)0x0;
        goto LAB_00ee56d8;
      }
    } while ((*(uint *)(uVar14 + 0x1b) & 0x380) != 0x200);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(this + 0x95a0);
      if (puVar10 == *(ulong **)(this + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar14;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
    }
LAB_00ee56d8:
    ParseInfo::~ParseInfo((ParseInfo *)&local_1e0);
  }
  uVar9 = Factory::NewFunctionFromSharedFunctionInfo((Factory *)this,puVar10,param_3,0);
LAB_00ee573c:
  FUN_00ee4fcc(&local_f8);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

