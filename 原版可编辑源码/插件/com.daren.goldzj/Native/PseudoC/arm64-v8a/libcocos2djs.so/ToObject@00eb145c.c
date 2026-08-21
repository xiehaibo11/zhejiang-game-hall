
/* v8::Value::ToObject(v8::Local<v8::Context>) const */

Value * __thiscall v8::Value::ToObject(Value *this,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  Value *pVVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  Isolate *pIVar7;
  Logger *this_00;
  undefined8 uVar8;
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
  Value *local_48;
  
  uVar5 = *(ulong *)this;
  if (((uVar5 & 1) == 0) ||
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
    if (param_2 == 0) {
      pIVar7 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    }
    else {
      pIVar7 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
    }
    uVar8 = *(undefined8 *)(pIVar7 + 0xa8);
    if ((*(int *)(pIVar7 + 0x2c20) == (int)uVar8) ||
       (*(int *)(pIVar7 + 0x2c20) != *(int *)(pIVar7 + 0x188))) {
      local_48 = *(Value **)(pIVar7 + 0x95a0);
      if (local_48 == *(Value **)(pIVar7 + 0x95a8)) {
        local_48 = (Value *)internal::HandleScope::Extend(pIVar7);
      }
      *(Value **)(pIVar7 + 0x95a0) = local_48 + 8;
      *(undefined8 *)local_48 = uVar8;
      HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar7);
      FUN_00eaadd8(&local_b0,pIVar7,param_2);
      local_c0 = 0;
      uStack_d8 = 0;
      local_e0 = (RuntimeCallStats *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      if (internal::TracingFlags::runtime_stats != 0) {
        local_e0 = (RuntimeCallStats *)(*(long *)(pIVar7 + 0x9520) + 0x58a0);
        internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3b4);
      }
      this_00 = *(Logger **)(pIVar7 + 0x9558);
      uVar5 = internal::Logger::is_logging(this_00);
      if ((uVar5 & 1) != 0) {
        internal::Logger::ApiEntryCall(this_00,"v8::Object::ToObject");
      }
      uVar1 = *(undefined4 *)(pIVar7 + 0x2c60);
      *(undefined4 *)(pIVar7 + 0x2c60) = 5;
      uVar5 = *(ulong *)this;
      if (((uVar5 & 1) == 0) ||
         (pVVar3 = this,
         *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
        pVVar3 = (Value *)internal::Object::ToObjectImpl(pIVar7,this,0);
      }
      this = local_48;
      if (pVVar3 == (Value *)0x0) {
        local_a0 = '\x01';
        *(long *)(local_b0 + 0x2c08) = local_68;
        if (local_68 == 0) {
          bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
        }
        else {
          bVar2 = false;
        }
        internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
        this = (Value *)0x0;
      }
      else {
        if (((*(ulong *)local_48 & 1) == 0) ||
           ((int)*(ulong *)local_48 != *(int *)(local_60 + 0xa8))) {
          lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
          if (lVar4 == 0) {
LAB_00eb1760:
            base::OS::PrintError
                      ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                       "Escape value set twice");
                    /* WARNING: Subroutine does not return */
            base::OS::Abort();
          }
          if (*(code **)(lVar4 + 0xb738) == (code *)0x0) goto LAB_00eb1760;
          (**(code **)(lVar4 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
          *(undefined1 *)(lVar4 + 0xb6b9) = 1;
        }
        *(undefined8 *)this = *(undefined8 *)pVVar3;
      }
      *(undefined4 *)(pIVar7 + 0x2c60) = uVar1;
      if (local_e0 != (RuntimeCallStats *)0x0) {
        internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
      }
      if (local_a8 != 0) {
        lVar4 = *(long *)(local_b0 + 0x95c0);
        lVar6 = *(long *)(lVar4 + 0x60) + -1;
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar6 * 8);
        *(long *)(lVar4 + 0x60) = lVar6;
        *(undefined8 *)(local_b0 + 0x2bc8) = uVar8;
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
      this = (Value *)0x0;
    }
  }
  return this;
}

