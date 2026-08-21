
/* v8::debug::WeakMap::Set(v8::Local<v8::Context>, v8::Local<v8::Value>, v8::Local<v8::Value>) */

ulong * __thiscall
v8::debug::WeakMap::Set(WeakMap *this,long param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 local_100;
  undefined8 uStack_f8;
  RuntimeCallStats *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  Isolate *local_c0;
  long local_b8;
  char local_b0;
  Isolate local_ae;
  undefined **local_a8;
  StackGuard *local_a0;
  int local_88;
  long local_78;
  Isolate *local_70;
  undefined8 uStack_68;
  long local_60;
  ulong *local_58;
  
  if (param_2 == 0) {
    pIVar7 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar7 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar9 = *(ulong *)(pIVar7 + 0xa8);
  if ((*(int *)(pIVar7 + 0x2c20) == (int)uVar9) ||
     (*(int *)(pIVar7 + 0x2c20) != *(int *)(pIVar7 + 0x188))) {
    local_58 = *(ulong **)(pIVar7 + 0x95a0);
    if (local_58 == *(ulong **)(pIVar7 + 0x95a8)) {
      local_58 = (ulong *)internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = local_58 + 1;
    *local_58 = uVar9;
    HandleScope::Initialize((HandleScope *)&local_70,(Isolate *)pIVar7);
    FUN_00eaadd8(&local_c0,pIVar7,param_2);
    local_d0 = 0;
    uStack_e8 = 0;
    local_f0 = (RuntimeCallStats *)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_f0 = (RuntimeCallStats *)(*(long *)(pIVar7 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_f0,(ulong)&local_f0 | 8,0x3f8);
    }
    this_00 = *(Logger **)(pIVar7 + 0x9558);
    uVar9 = internal::Logger::is_logging(this_00);
    if ((uVar9 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::WeakMap::Set");
    }
    uVar1 = *(undefined4 *)(pIVar7 + 0x2c60);
    *(undefined4 *)(pIVar7 + 0x2c60) = 5;
    uVar9 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x3c3);
    local_100 = param_3;
    uStack_f8 = param_4;
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
    puVar3 = (ulong *)internal::Execution::CallBuiltin(pIVar7,puVar8,this,2,&local_100);
    puVar8 = local_58;
    if (puVar3 == (ulong *)0x0) {
      local_b0 = '\x01';
      *(long *)(local_c0 + 0x2c08) = local_78;
      if (local_78 == 0) {
        bVar2 = *(long *)(local_c0 + 0x2bb8) == 0;
      }
      else {
        bVar2 = false;
      }
      internal::Isolate::OptionalRescheduleException(local_c0,bVar2);
      puVar8 = (ulong *)0x0;
    }
    else {
      if (((*local_58 & 1) == 0) || ((int)*local_58 != *(int *)(local_70 + 0xa8))) {
        lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar4 == 0) {
LAB_00ed3888:
          base::OS::PrintError
                    ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                     "Escape value set twice");
                    /* WARNING: Subroutine does not return */
          base::OS::Abort();
        }
        if (*(code **)(lVar4 + 0xb738) == (code *)0x0) goto LAB_00ed3888;
        (**(code **)(lVar4 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
        *(undefined1 *)(lVar4 + 0xb6b9) = 1;
      }
      *puVar8 = *puVar3;
    }
    *(undefined4 *)(pIVar7 + 0x2c60) = uVar1;
    if (local_f0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_f0,(RuntimeCallTimer *)((ulong)&local_f0 | 8));
    }
    if (local_b8 != 0) {
      lVar4 = *(long *)(local_c0 + 0x95c0);
      lVar5 = *(long *)(lVar4 + 0x60) + -1;
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar5 * 8);
      *(long *)(lVar4 + 0x60) = lVar5;
      *(undefined8 *)(local_c0 + 0x2bc8) = uVar6;
    }
    if (local_b0 == '\0') {
      *(long *)(local_c0 + 0x2c08) = local_78;
    }
    local_c0[0xb828] = local_ae;
    local_a8 = &PTR__InterruptsScope_01c984b0;
    if (local_88 != 2) {
      internal::StackGuard::PopInterruptsScope(local_a0);
    }
    *(undefined8 *)(local_70 + 0x95a0) = uStack_68;
    *(int *)(local_70 + 0x95b0) = *(int *)(local_70 + 0x95b0) + -1;
    if (*(long *)(local_70 + 0x95a8) != local_60) {
      *(long *)(local_70 + 0x95a8) = local_60;
      internal::HandleScope::DeleteExtensions(local_70);
    }
  }
  else {
    puVar8 = (ulong *)0x0;
  }
  return puVar8;
}

