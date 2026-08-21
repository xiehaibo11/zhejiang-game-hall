
/* v8::Value::ToDetailString(v8::Local<v8::Context>) const */

Value * __thiscall v8::Value::ToDetailString(Value *this,long param_2)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  Isolate *pIVar8;
  Logger *this_00;
  undefined8 uVar9;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  long local_a8;
  char local_a0;
  undefined1 local_9e;
  undefined **local_98;
  StackGuard *local_90;
  int local_78;
  undefined8 local_68;
  Isolate *local_60;
  undefined8 local_58;
  long lStack_50;
  Value *local_48;
  
  uVar6 = *(ulong *)this;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
    if (param_2 == 0) {
      pIVar8 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    }
    else {
      pIVar8 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
    }
    uVar9 = *(undefined8 *)(pIVar8 + 0xa8);
    if ((*(int *)(pIVar8 + 0x2c20) == (int)uVar9) ||
       (*(int *)(pIVar8 + 0x2c20) != *(int *)(pIVar8 + 0x188))) {
      local_48 = *(Value **)(pIVar8 + 0x95a0);
      if (local_48 == *(Value **)(pIVar8 + 0x95a8)) {
        local_48 = (Value *)internal::HandleScope::Extend(pIVar8);
      }
      *(Value **)(pIVar8 + 0x95a0) = local_48 + 8;
      *(undefined8 *)local_48 = uVar9;
      HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar8);
      FUN_00eaadd8(&local_b0,pIVar8,param_2);
      local_c0 = 0;
      uStack_d8 = 0;
      local_e0 = (RuntimeCallStats *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      if (internal::TracingFlags::runtime_stats != 0) {
        local_e0 = (RuntimeCallStats *)(*(long *)(pIVar8 + 0x9520) + 0x58a0);
        internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3b0);
      }
      this_00 = *(Logger **)(pIVar8 + 0x9558);
      uVar6 = internal::Logger::is_logging(this_00);
      if ((uVar6 & 1) != 0) {
        internal::Logger::ApiEntryCall(this_00,"v8::Object::ToDetailString");
      }
      uVar2 = *(undefined4 *)(pIVar8 + 0x2c60);
      *(undefined4 *)(pIVar8 + 0x2c60) = 5;
      pIVar4 = (Isolate *)internal::Object::NoSideEffectsToString(pIVar8,this);
      pVVar3 = local_48;
      if (((*(ulong *)local_48 & 1) == 0) || ((int)*(ulong *)local_48 != *(int *)(local_60 + 0xa8)))
      {
        lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar5 == 0) {
LAB_00eb143c:
          base::OS::PrintError
                    ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                     "Escape value set twice");
                    /* WARNING: Subroutine does not return */
          base::OS::Abort();
        }
        if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00eb143c;
        (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
        *(undefined1 *)(lVar5 + 0xb6b9) = 1;
      }
      pIVar1 = local_60 + 0xa0;
      if (pIVar4 != (Isolate *)0x0) {
        pIVar1 = pIVar4;
      }
      this = (Value *)0x0;
      if (pIVar4 != (Isolate *)0x0) {
        this = pVVar3;
      }
      *(undefined8 *)pVVar3 = *(undefined8 *)pIVar1;
      *(undefined4 *)(pIVar8 + 0x2c60) = uVar2;
      if (local_e0 != (RuntimeCallStats *)0x0) {
        internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
      }
      if (local_a8 != 0) {
        lVar5 = *(long *)(local_b0 + 0x95c0);
        lVar7 = *(long *)(lVar5 + 0x60) + -1;
        uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar7 * 8);
        *(long *)(lVar5 + 0x60) = lVar7;
        *(undefined8 *)(local_b0 + 0x2bc8) = uVar9;
      }
      if (local_a0 == '\0') {
        *(undefined8 *)(local_b0 + 0x2c08) = local_68;
      }
      *(undefined1 *)(local_b0 + 0xb828) = local_9e;
      local_98 = &PTR__InterruptsScope_01c984b0;
      if (local_78 != 2) {
        internal::StackGuard::PopInterruptsScope(local_90);
      }
      *(undefined8 *)(local_60 + 0x95a0) = local_58;
      *(int *)(local_60 + 0x95b0) = *(int *)(local_60 + 0x95b0) + -1;
      if (*(long *)(local_60 + 0x95a8) != lStack_50) {
        *(long *)(local_60 + 0x95a8) = lStack_50;
        internal::HandleScope::DeleteExtensions(local_60);
      }
    }
    else {
      this = (Value *)0x0;
    }
  }
  return this;
}

