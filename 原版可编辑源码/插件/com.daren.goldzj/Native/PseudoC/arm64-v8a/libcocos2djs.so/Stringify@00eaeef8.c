
/* v8::JSON::Stringify(v8::Local<v8::Context>, v8::Local<v8::Value>, v8::Local<v8::String>) */

ulong * v8::JSON::Stringify(long param_1,undefined8 param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  Logger *this;
  ulong uVar10;
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
  
  if (param_1 == 0) {
    pIVar8 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar8 = (Isolate *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  }
  uVar10 = *(ulong *)(pIVar8 + 0xa8);
  if ((*(int *)(pIVar8 + 0x2c20) == (int)uVar10) ||
     (*(int *)(pIVar8 + 0x2c20) != *(int *)(pIVar8 + 0x188))) {
    local_48 = *(ulong **)(pIVar8 + 0x95a0);
    if (local_48 == *(ulong **)(pIVar8 + 0x95a8)) {
      local_48 = (ulong *)internal::HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = local_48 + 1;
    *local_48 = uVar10;
    HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar8);
    FUN_00eaadd8(&local_b0,pIVar8,param_1);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (RuntimeCallStats *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(pIVar8 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x37e);
    }
    this = *(Logger **)(pIVar8 + 0x9558);
    uVar10 = internal::Logger::is_logging(this);
    if ((uVar10 & 1) != 0) {
      internal::Logger::ApiEntryCall(this,"v8::JSON::Stringify");
    }
    uVar2 = *(undefined4 *)(pIVar8 + 0x2c60);
    *(undefined4 *)(pIVar8 + 0x2c60) = 5;
    pIVar1 = pIVar8 + 200;
    if (param_3 != (Isolate *)0x0) {
      pIVar1 = param_3;
    }
    puVar4 = (ulong *)internal::JsonStringify(pIVar8,param_2,pIVar8 + 0xa0,pIVar1);
    if ((puVar4 == (ulong *)0x0) ||
       (((uVar10 = *puVar4, (uVar10 & 1) == 0 ||
         (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) &&
        (puVar4 = (ulong *)internal::Object::ConvertToString(pIVar8,puVar4), puVar4 == (ulong *)0x0)
        ))) {
      local_a0 = '\x01';
      *(long *)(local_b0 + 0x2c08) = local_68;
      if (local_68 == 0) {
        bVar3 = *(long *)(local_b0 + 0x2bb8) == 0;
      }
      else {
        bVar3 = false;
      }
      internal::Isolate::OptionalRescheduleException(local_b0,bVar3);
      puVar9 = (ulong *)0x0;
    }
    else {
      puVar9 = local_48;
      if (((*local_48 & 1) == 0) || ((int)*local_48 != *(int *)(local_60 + 0xa8))) {
        lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar5 == 0) {
LAB_00eaf1fc:
          base::OS::PrintError
                    ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                     "Escape value set twice");
                    /* WARNING: Subroutine does not return */
          base::OS::Abort();
        }
        if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00eaf1fc;
        (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
        *(undefined1 *)(lVar5 + 0xb6b9) = 1;
      }
      *puVar9 = *puVar4;
    }
    *(undefined4 *)(pIVar8 + 0x2c60) = uVar2;
    if (local_e0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (local_a8 != 0) {
      lVar5 = *(long *)(local_b0 + 0x95c0);
      lVar6 = *(long *)(lVar5 + 0x60) + -1;
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar6 * 8);
      *(long *)(lVar5 + 0x60) = lVar6;
      *(undefined8 *)(local_b0 + 0x2bc8) = uVar7;
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
    puVar9 = (ulong *)0x0;
  }
  return puVar9;
}

