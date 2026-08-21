
/* v8::Module::SetSyntheticModuleExport(v8::Isolate*, v8::Local<v8::String>, v8::Local<v8::Value>)
    */

undefined8 __thiscall
v8::Module::SetSyntheticModuleExport
          (Module *this,Isolate *param_1,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Logger *this_00;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Isolate *local_a0;
  long local_98;
  char local_90;
  Isolate local_8e;
  undefined **local_88;
  StackGuard *local_80;
  int local_68;
  long local_58;
  
  if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      != 0x45) {
    lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar7 == 0) {
LAB_00eaad30:
      base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Module::SyntheticModuleSetExport",
                 "v8::Module::SyntheticModuleSetExport must only be called on a SyntheticModule");
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    if (*(code **)(lVar7 + 0xb738) == (code *)0x0) goto LAB_00eaad30;
    (**(code **)(lVar7 + 0xb738))
              ("v8::Module::SyntheticModuleSetExport",
               "v8::Module::SyntheticModuleSetExport must only be called on a SyntheticModule");
    *(undefined1 *)(lVar7 + 0xb6b9) = 1;
  }
  if ((*(int *)(param_1 + 0x2c20) != *(int *)(param_1 + 0xa8)) &&
     (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0x188))) {
    return 0;
  }
  puVar1 = *(ulong **)(param_1 + 0x95a0);
  puVar2 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar9 = *(ulong *)(param_1 + 0x2bc8);
  if ((int)uVar9 != 0) {
    uVar4 = *(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)) + 0x13);
    if (uVar4 != 0) {
      uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar4;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = puVar1;
        if (puVar2 == puVar1) {
          puVar8 = (ulong *)internal::HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar9;
      }
      else {
        puVar8 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      }
      goto LAB_00eaab50;
    }
  }
  puVar8 = (ulong *)0x0;
LAB_00eaab50:
  FUN_00eaadd8(&local_a0,param_1,puVar8);
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x38c);
  }
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar9 = internal::Logger::is_logging(this_00);
  if ((uVar9 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Module::SetSyntheticModuleExport");
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  cVar6 = internal::SyntheticModule::SetExport(param_1,this,param_3,param_4);
  if (cVar6 == '\0') {
    local_90 = '\x01';
    *(long *)(local_a0 + 0x2c08) = local_58;
    if (local_58 == 0) {
      bVar5 = *(long *)(local_a0 + 0x2bb8) == 0;
    }
    else {
      bVar5 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_a0,bVar5);
    uVar12 = 0;
  }
  else {
    uVar12 = 0x101;
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar3;
  if (local_d0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  if (local_98 != 0) {
    lVar7 = *(long *)(local_a0 + 0x95c0);
    lVar10 = *(long *)(lVar7 + 0x60) + -1;
    uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar10 * 8);
    *(long *)(lVar7 + 0x60) = lVar10;
    *(undefined8 *)(local_a0 + 0x2bc8) = uVar11;
  }
  if (local_90 == '\0') {
    *(long *)(local_a0 + 0x2c08) = local_58;
  }
  local_a0[0xb828] = local_8e;
  local_88 = &PTR__InterruptsScope_01c984b0;
  if (local_68 != 2) {
    internal::StackGuard::PopInterruptsScope(local_80);
  }
  *(ulong **)(param_1 + 0x95a0) = puVar1;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar2) {
    *(ulong **)(param_1 + 0x95a8) = puVar2;
    internal::HandleScope::DeleteExtensions(param_1);
  }
  return uVar12;
}

