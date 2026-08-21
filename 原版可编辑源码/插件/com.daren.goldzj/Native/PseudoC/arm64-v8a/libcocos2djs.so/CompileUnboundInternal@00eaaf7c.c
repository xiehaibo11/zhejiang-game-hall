
/* v8::ScriptCompiler::CompileUnboundInternal(v8::Isolate*, v8::ScriptCompiler::Source*,
   v8::ScriptCompiler::CompileOptions, v8::ScriptCompiler::NoCacheReason) */

ulong * v8::ScriptCompiler::CompileUnboundInternal
                  (Isolate *param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ScriptData SVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  long *plVar6;
  ScriptData *this;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  Logger *this_00;
  undefined8 uVar15;
  undefined8 in_stack_fffffffffffffe50;
  uint uVar16;
  byte **local_180;
  byte *local_178;
  char *local_170;
  undefined8 local_168;
  RuntimeCallStats *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  Isolate *local_138;
  long local_130;
  char local_128;
  Isolate local_126;
  undefined **local_120;
  StackGuard *local_118;
  int local_100;
  long local_f0;
  Isolate *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  ulong *local_d0;
  CallStatsScopedTracer aCStack_c8 [8];
  long local_c0;
  char *local_b8;
  undefined8 local_a0;
  long *plStack_98;
  long local_90;
  Isolate *local_88;
  undefined4 local_80;
  long local_70;
  
  uVar16 = (uint)((ulong)in_stack_fffffffffffffe50 >> 0x20);
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (DAT_01d3eb38 == (byte *)0x0) {
    plVar6 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb38 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,&DAT_019c38f7);
  }
  local_c0 = 0;
  if ((*DAT_01d3eb38 & 5) != 0) {
    internal::tracing::CallStatsScopedTracer::Initialize
              (aCStack_c8,param_1,DAT_01d3eb38,"V8.ScriptCompiler");
  }
  uVar14 = *(ulong *)(param_1 + 0xa8);
  if ((*(int *)(param_1 + 0x2c20) != (int)uVar14) &&
     (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0x188))) {
    puVar13 = (ulong *)0x0;
    goto joined_r0x00eab4d4;
  }
  local_d0 = *(ulong **)(param_1 + 0x95a0);
  if (local_d0 == *(ulong **)(param_1 + 0x95a8)) {
    local_d0 = (ulong *)internal::HandleScope::Extend(param_1);
  }
  *(ulong **)(param_1 + 0x95a0) = local_d0 + 1;
  *local_d0 = uVar14;
  HandleScope::Initialize((HandleScope *)&local_e8,(Isolate *)param_1);
  uVar14 = *(ulong *)(param_1 + 0x2bc8);
  if ((int)uVar14 == 0) {
LAB_00eab0a8:
    puVar13 = (ulong *)0x0;
  }
  else {
    uVar12 = *(uint *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1)) + 0x13);
    if (uVar12 == 0) goto LAB_00eab0a8;
    uVar14 = uVar14 & 0xffffffff00000000 | (ulong)uVar12;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)(param_1 + 0x95a0);
      if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
        puVar13 = (ulong *)internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
      *puVar13 = uVar14;
    }
    else {
      puVar13 = (ulong *)internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    }
  }
  FUN_00eaadd8(&local_138,param_1,puVar13);
  local_140 = 0;
  uStack_158 = 0;
  local_160 = (RuntimeCallStats *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_160 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_160,(ulong)&local_160 | 8,0x3c9);
  }
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar14 = internal::Logger::is_logging(this_00);
  if ((uVar14 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::ScriptCompiler::CompileUnbound");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  if (param_3 == 1) {
    this = operator_new(0x18);
    internal::ScriptData::ScriptData
              (this,*(uchar **)param_2[7],*(int *)((undefined8 *)param_2[7] + 1));
  }
  else {
    this = (ScriptData *)0x0;
  }
  uVar15 = *param_2;
  if (DAT_01d3eb40 == (byte *)0x0) {
    plVar6 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3eb40 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.compile");
  }
  pbVar4 = DAT_01d3eb40;
  local_180 = (byte **)0x0;
  if ((*DAT_01d3eb40 & 5) != 0) {
    local_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    plVar6 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    uVar16 = 0;
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.CompileScript",0,0,0,0,0,0,0,&local_a0,0);
    plVar6 = plStack_98;
    plStack_98 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_170 = "V8.CompileScript";
    local_180 = &local_178;
    local_178 = pbVar4;
    local_168 = uVar7;
  }
  plStack_98 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_80 = 1;
  if (param_2[1] != 0) {
    plStack_98 = (long *)param_2[1];
  }
  if ((ulong *)param_2[2] != (ulong *)0x0) {
    uVar14 = *(ulong *)param_2[2];
    if ((uVar14 & 1) == 0) {
      uVar12 = (int)uVar14 >> 1;
    }
    else {
      uVar12 = (uint)(long)*(double *)(uVar14 + 3);
    }
    local_a0 = (long *)(ulong)uVar12;
  }
  if ((ulong *)param_2[3] != (ulong *)0x0) {
    uVar14 = *(ulong *)param_2[3];
    if ((uVar14 & 1) == 0) {
      iVar10 = (int)uVar14 >> 1;
    }
    else {
      iVar10 = (int)(long)*(double *)(uVar14 + 3);
    }
    local_a0 = (long *)CONCAT44(iVar10,(undefined4)local_a0);
  }
  local_88 = param_1 + 0x168;
  if ((Isolate *)param_2[6] != (Isolate *)0x0) {
    local_88 = (Isolate *)param_2[6];
  }
  if (param_2[5] != 0) {
    local_90 = param_2[5];
  }
  puVar8 = (ulong *)internal::Compiler::GetSharedFunctionInfoForScript
                              (param_1,uVar15,&local_a0,*(undefined4 *)(param_2 + 4),0,this,param_3,
                               param_4,(ulong)uVar16 << 0x20);
  if (param_3 == 1) {
    *(byte *)(param_2[7] + 0xc) = (byte)*this >> 1 & 1;
    SVar2 = *this;
joined_r0x00eab308:
    if ((((byte)SVar2 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 8));
    }
    operator_delete(this);
  }
  else if (this != (ScriptData *)0x0) {
    SVar2 = *this;
    goto joined_r0x00eab308;
  }
  puVar13 = local_d0;
  if (puVar8 == (ulong *)0x0) {
    local_128 = '\x01';
    *(long *)(local_138 + 0x2c08) = local_f0;
    if (local_f0 == 0) {
      bVar5 = *(long *)(local_138 + 0x2bb8) == 0;
    }
    else {
      bVar5 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_138,bVar5);
    puVar13 = (ulong *)0x0;
  }
  else {
    if (((*local_d0 & 1) == 0) || ((int)*local_d0 != *(int *)(local_e8 + 0xa8))) {
      lVar9 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar9 == 0) {
LAB_00eab564:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar9 + 0xb738) == (code *)0x0) goto LAB_00eab564;
      (**(code **)(lVar9 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar9 + 0xb6b9) = 1;
    }
    *puVar13 = *puVar8;
  }
  if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
    plVar6 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_178,local_170,local_168);
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_160 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_160,(RuntimeCallTimer *)((ulong)&local_160 | 8));
  }
  if (local_130 != 0) {
    lVar9 = *(long *)(local_138 + 0x95c0);
    lVar11 = *(long *)(lVar9 + 0x60) + -1;
    uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + lVar11 * 8);
    *(long *)(lVar9 + 0x60) = lVar11;
    *(undefined8 *)(local_138 + 0x2bc8) = uVar15;
  }
  if (local_128 == '\0') {
    *(long *)(local_138 + 0x2c08) = local_f0;
  }
  local_138[0xb828] = local_126;
  local_120 = &PTR__InterruptsScope_01c984b0;
  if (local_100 != 2) {
    internal::StackGuard::PopInterruptsScope(local_118);
  }
  *(undefined8 *)(local_e8 + 0x95a0) = uStack_e0;
  *(int *)(local_e8 + 0x95b0) = *(int *)(local_e8 + 0x95b0) + -1;
  if (*(long *)(local_e8 + 0x95a8) != local_d8) {
    *(long *)(local_e8 + 0x95a8) = local_d8;
    internal::HandleScope::DeleteExtensions(local_e8);
  }
joined_r0x00eab4d4:
  if ((local_c0 != 0) && (*local_b8 != '\0')) {
    internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_c8);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return puVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

