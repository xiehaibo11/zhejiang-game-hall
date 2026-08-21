
/* v8::Promise::Then(v8::Local<v8::Context>, v8::Local<v8::Function>) */

ulong * __thiscall v8::Promise::Then(Promise *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  Logger *this_00;
  ulong uVar9;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b0;
  long local_a8;
  char local_a0;
  Isolate local_9e;
  undefined **local_98;
  StackGuard *local_90;
  int local_78;
  long local_68;
  Isolate *local_60;
  undefined8 uStack_58;
  long local_50;
  ulong *local_48;
  
  if (param_2 == 0) {
    pIVar7 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar7 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar9 = *(ulong *)(pIVar7 + 0xa8);
  if ((*(int *)(pIVar7 + 0x2c20) == (int)uVar9) ||
     (*(int *)(pIVar7 + 0x2c20) != *(int *)(pIVar7 + 0x188))) {
    local_48 = *(ulong **)(pIVar7 + 0x95a0);
    if (local_48 == *(ulong **)(pIVar7 + 0x95a8)) {
      local_48 = (ulong *)internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = local_48 + 1;
    *local_48 = uVar9;
    HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar7);
    FUN_00eaadd8(&local_b0,pIVar7,param_2);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (RuntimeCallStats *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(pIVar7 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3c1);
    }
    this_00 = *(Logger **)(pIVar7 + 0x9558);
    uVar9 = internal::Logger::is_logging(this_00);
    if ((uVar9 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::Promise::Then");
    }
    uVar1 = *(undefined4 *)(pIVar7 + 0x2c60);
    *(undefined4 *)(pIVar7 + 0x2c60) = 5;
    uVar9 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x413);
    local_e8 = param_3;
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar8 = (ulong *)internal::HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar9;
    }
    else {
      puVar8 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar9);
    }
    puVar3 = (ulong *)internal::Execution::CallBuiltin(pIVar7,puVar8,this,1,&local_e8);
    puVar8 = local_48;
    if (puVar3 == (ulong *)0x0) {
      local_a0 = '\x01';
      *(long *)(local_b0 + 0x2c08) = local_68;
      if (local_68 == 0) {
        bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
      }
      else {
        bVar2 = false;
      }
      internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
      puVar8 = (ulong *)0x0;
    }
    else {
      if (((*local_48 & 1) == 0) || ((int)*local_48 != *(int *)(local_60 + 0xa8))) {
        lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar4 == 0) {
LAB_00ec7f40:
          base::OS::PrintError
                    ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                     "Escape value set twice");
                    /* WARNING: Subroutine does not return */
          base::OS::Abort();
        }
        if (*(code **)(lVar4 + 0xb738) == (code *)0x0) goto LAB_00ec7f40;
        (**(code **)(lVar4 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
        *(undefined1 *)(lVar4 + 0xb6b9) = 1;
      }
      *puVar8 = *puVar3;
    }
    *(undefined4 *)(pIVar7 + 0x2c60) = uVar1;
    if (local_e0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (local_a8 != 0) {
      lVar4 = *(long *)(local_b0 + 0x95c0);
      lVar5 = *(long *)(lVar4 + 0x60) + -1;
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar5 * 8);
      *(long *)(lVar4 + 0x60) = lVar5;
      *(undefined8 *)(local_b0 + 0x2bc8) = uVar6;
    }
    if (local_a0 == '\0') {
      *(long *)(local_b0 + 0x2c08) = local_68;
    }
    local_b0[0xb828] = local_9e;
    local_98 = &PTR__InterruptsScope_01c984b0;
    if (local_78 != 2) {
      internal::StackGuard::PopInterruptsScope(local_90);
    }
    *(undefined8 *)(local_60 + 0x95a0) = uStack_58;
    *(int *)(local_60 + 0x95b0) = *(int *)(local_60 + 0x95b0) + -1;
    if (*(long *)(local_60 + 0x95a8) != local_50) {
      *(long *)(local_60 + 0x95a8) = local_50;
      internal::HandleScope::DeleteExtensions(local_60);
    }
  }
  else {
    puVar8 = (ulong *)0x0;
  }
  return puVar8;
}

