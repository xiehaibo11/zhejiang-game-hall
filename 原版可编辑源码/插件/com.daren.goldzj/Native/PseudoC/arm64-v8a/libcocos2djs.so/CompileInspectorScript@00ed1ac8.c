
/* v8::debug::CompileInspectorScript(v8::Isolate*, v8::Local<v8::String>) */

ulong * v8::debug::CompileInspectorScript(Isolate *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  Isolate *local_e0;
  long local_d8;
  char local_d0;
  Isolate local_ce;
  undefined **local_c8;
  StackGuard *local_c0;
  int local_a8;
  long local_98;
  Isolate *local_90;
  undefined8 uStack_88;
  long local_80;
  ulong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar9 = *(ulong *)(param_1 + 0xa8);
  if ((*(int *)(param_1 + 0x2c20) == (int)uVar9) ||
     (*(int *)(param_1 + 0x2c20) != *(int *)(param_1 + 0x188))) {
    local_78 = *(ulong **)(param_1 + 0x95a0);
    if (local_78 == *(ulong **)(param_1 + 0x95a8)) {
      local_78 = (ulong *)internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = local_78 + 1;
    *local_78 = uVar9;
    HandleScope::Initialize((HandleScope *)&local_90,(Isolate *)param_1);
    FUN_00eaadd8(&local_e0,param_1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x2c60);
    *(undefined4 *)(param_1 + 0x2c60) = 5;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 1;
    puVar4 = (ulong *)internal::Compiler::GetSharedFunctionInfoForScript
                                (param_1,param_2,&local_70,0,0,0,0,6,
                                 (uint)(internal::FLAG_expose_inspector_scripts == '\0') << 1);
    puVar8 = local_78;
    if (puVar4 == (ulong *)0x0) {
      local_d0 = '\x01';
      *(long *)(local_e0 + 0x2c08) = local_98;
      if (local_98 == 0) {
        bVar3 = *(long *)(local_e0 + 0x2bb8) == 0;
      }
      else {
        bVar3 = false;
      }
      internal::Isolate::OptionalRescheduleException(local_e0,bVar3);
      puVar8 = (ulong *)0x0;
    }
    else {
      if (((*local_78 & 1) == 0) || ((int)*local_78 != *(int *)(local_90 + 0xa8))) {
        lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar5 == 0) {
LAB_00ed1d40:
          base::OS::PrintError
                    ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                     "Escape value set twice");
                    /* WARNING: Subroutine does not return */
          base::OS::Abort();
        }
        if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00ed1d40;
        (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
        *(undefined1 *)(lVar5 + 0xb6b9) = 1;
      }
      *puVar8 = *puVar4;
    }
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    if (local_d8 != 0) {
      lVar5 = *(long *)(local_e0 + 0x95c0);
      lVar6 = *(long *)(lVar5 + 0x60) + -1;
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar6 * 8);
      *(long *)(lVar5 + 0x60) = lVar6;
      *(undefined8 *)(local_e0 + 0x2bc8) = uVar7;
    }
    if (local_d0 == '\0') {
      *(long *)(local_e0 + 0x2c08) = local_98;
    }
    local_e0[0xb828] = local_ce;
    local_c8 = &PTR__InterruptsScope_01c984b0;
    if (local_a8 != 2) {
      internal::StackGuard::PopInterruptsScope(local_c0);
    }
    *(undefined8 *)(local_90 + 0x95a0) = uStack_88;
    *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
    if (*(long *)(local_90 + 0x95a8) != local_80) {
      *(long *)(local_90 + 0x95a8) = local_80;
      internal::HandleScope::DeleteExtensions(local_90);
    }
  }
  else {
    puVar8 = (ulong *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

