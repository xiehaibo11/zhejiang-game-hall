
/* v8::ScriptCompiler::Compile(v8::Local<v8::Context>, v8::ScriptCompiler::StreamedSource*,
   v8::Local<v8::String>, v8::ScriptOrigin const&) */

ulong * v8::ScriptCompiler::Compile
                  (long param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  CanonicalHandleScope *this;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  Isolate *this_00;
  ulong *puVar12;
  Isolate *pIVar13;
  Logger *this_01;
  ulong uVar14;
  byte **local_188;
  byte *local_180;
  char *local_178;
  undefined8 local_170;
  CallStatsScopedTracer aCStack_168 [8];
  long local_160;
  char *local_158;
  RuntimeCallStats *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  Isolate *local_110;
  long local_108;
  char local_100;
  Isolate local_fe;
  undefined **local_f8;
  StackGuard *local_f0;
  int local_d8;
  long local_c8;
  Isolate *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  ulong *local_a8;
  undefined8 local_a0;
  long *plStack_98;
  long local_90;
  Isolate *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    this_00 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    this_00 = (Isolate *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  }
  uVar14 = *(ulong *)(this_00 + 0xa8);
  if ((*(int *)(this_00 + 0x2c20) != (int)uVar14) &&
     (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0x188))) {
    puVar12 = (ulong *)0x0;
    goto LAB_00eac684;
  }
  local_a8 = *(ulong **)(this_00 + 0x95a0);
  if (local_a8 == *(ulong **)(this_00 + 0x95a8)) {
    local_a8 = (ulong *)internal::HandleScope::Extend(this_00);
  }
  *(ulong **)(this_00 + 0x95a0) = local_a8 + 1;
  *local_a8 = uVar14;
  HandleScope::Initialize((HandleScope *)&local_c0,(Isolate *)this_00);
  FUN_00eaadd8(&local_110,this_00,param_1);
  local_120 = 0;
  uStack_138 = 0;
  local_140 = (RuntimeCallStats *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_140 = (RuntimeCallStats *)(*(long *)(this_00 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x3c7);
  }
  this_01 = *(Logger **)(this_00 + 0x9558);
  uVar14 = internal::Logger::is_logging(this_01);
  if ((uVar14 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::ScriptCompiler::Compile");
  }
  uVar1 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  if (DAT_01d3eb50 == (byte *)0x0) {
    plVar5 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb50 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,&DAT_019c38f7);
  }
  local_160 = 0;
  if ((*DAT_01d3eb50 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_168,this_00,DAT_01d3eb50,"V8.ScriptCompiler");
  }
  if (DAT_01d3eb58 == (byte *)0x0) {
    plVar5 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb58 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3eb58;
  local_188 = (byte **)0x0;
  if ((*DAT_01d3eb58 & 5) != 0) {
    local_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    plVar5 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.CompileStreamedScript",0,0,0,0,0,0,0,&local_a0,0);
    plVar5 = plStack_98;
    plStack_98 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_188 = &local_180;
    local_178 = "V8.CompileStreamedScript";
    local_180 = pbVar3;
    local_170 = uVar6;
  }
  plStack_98 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_80 = 1;
  if (*param_4 != 0) {
    plStack_98 = (long *)*param_4;
  }
  if ((ulong *)param_4[1] != (ulong *)0x0) {
    uVar14 = *(ulong *)param_4[1];
    if ((uVar14 & 1) == 0) {
      uVar11 = (int)uVar14 >> 1;
    }
    else {
      uVar11 = (uint)(long)*(double *)(uVar14 + 3);
    }
    local_a0 = (long *)(ulong)uVar11;
  }
  if ((ulong *)param_4[2] != (ulong *)0x0) {
    uVar14 = *(ulong *)param_4[2];
    if ((uVar14 & 1) == 0) {
      iVar9 = (int)uVar14 >> 1;
    }
    else {
      iVar9 = (int)(long)*(double *)(uVar14 + 3);
    }
    local_a0 = (long *)CONCAT44(iVar9,(undefined4)local_a0);
  }
  local_88 = this_00 + 0x168;
  if ((Isolate *)param_4[6] != (Isolate *)0x0) {
    local_88 = (Isolate *)param_4[6];
  }
  if (param_4[5] != 0) {
    local_90 = param_4[5];
  }
  lVar7 = internal::Compiler::GetSharedFunctionInfoForStreamedScript
                    (this_00,param_3,&local_a0,(int)param_4[3],*param_2);
  if (lVar7 == 0) {
    internal::Isolate::ReportPendingMessages(this_00);
    local_100 = '\x01';
    *(long *)(local_110 + 0x2c08) = local_c8;
    if (local_c8 == 0) {
      bVar4 = *(long *)(local_110 + 0x2bb8) == 0;
    }
    else {
      bVar4 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_110,bVar4);
LAB_00eac580:
    puVar12 = (ulong *)0x0;
  }
  else {
    pIVar13 = (Isolate *)((ulong)*(uint *)(lVar7 + 4) << 0x20);
    uVar14 = *(ulong *)(pIVar13 + 0x2bc8) & 0xffffffff00000000;
    this = *(CanonicalHandleScope **)((ulong)*(uint *)(lVar7 + 4) << 0x20 | 0x95b8);
    uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(*(ulong *)(pIVar13 + 0x2bc8) - 1)) + 0x13);
    if (this == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)(pIVar13 + 0x95a0);
      if (puVar12 == *(ulong **)(pIVar13 + 0x95a8)) {
        puVar12 = (ulong *)internal::HandleScope::Extend(pIVar13);
      }
      *(ulong **)(pIVar13 + 0x95a0) = puVar12 + 1;
      *puVar12 = uVar14;
    }
    else {
      puVar12 = (ulong *)internal::CanonicalHandleScope::Lookup(this,uVar14);
    }
    puVar8 = (ulong *)internal::Factory::NewFunctionFromSharedFunctionInfo
                                ((Factory *)pIVar13,lVar7,puVar12,1);
    puVar12 = local_a8;
    if (puVar8 == (ulong *)0x0) goto LAB_00eac580;
    if (((*local_a8 & 1) == 0) || ((int)*local_a8 != *(int *)(local_c0 + 0xa8))) {
      lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar7 == 0) {
LAB_00eac704:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar7 + 0xb738) == (code *)0x0) goto LAB_00eac704;
      (**(code **)(lVar7 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar7 + 0xb6b9) = 1;
    }
    *puVar12 = *puVar8;
  }
  if ((local_188 != (byte **)0x0) && (*local_180 != 0)) {
    plVar5 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_180,local_178,local_170);
  }
  if ((local_160 != 0) && (*local_158 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_168);
  }
  *(undefined4 *)(this_00 + 0x2c60) = uVar1;
  if (local_140 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  if (local_108 != 0) {
    lVar7 = *(long *)(local_110 + 0x95c0);
    lVar10 = *(long *)(lVar7 + 0x60) + -1;
    uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar10 * 8);
    *(long *)(lVar7 + 0x60) = lVar10;
    *(undefined8 *)(local_110 + 0x2bc8) = uVar6;
  }
  if (local_100 == '\0') {
    *(long *)(local_110 + 0x2c08) = local_c8;
  }
  local_110[0xb828] = local_fe;
  local_f8 = &PTR__InterruptsScope_01c984b0;
  if (local_d8 != 2) {
    internal::StackGuard::PopInterruptsScope(local_f0);
  }
  *(undefined8 *)(local_c0 + 0x95a0) = uStack_b8;
  *(int *)(local_c0 + 0x95b0) = *(int *)(local_c0 + 0x95b0) + -1;
  if (*(long *)(local_c0 + 0x95a8) != local_b0) {
    *(long *)(local_c0 + 0x95a8) = local_b0;
    internal::HandleScope::DeleteExtensions(local_c0);
  }
LAB_00eac684:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar12;
}

