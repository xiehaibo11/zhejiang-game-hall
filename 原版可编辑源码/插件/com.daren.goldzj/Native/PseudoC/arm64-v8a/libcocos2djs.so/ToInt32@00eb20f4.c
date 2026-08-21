
/* v8::Value::ToInt32(v8::Local<v8::Context>) const */

Value * __thiscall v8::Value::ToInt32(Value *this,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  Isolate *pIVar6;
  Value *pVVar7;
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
  
  pVVar7 = this;
  if (((byte)*this & 1) != 0) {
    if (param_2 == 0) {
      pIVar6 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    }
    else {
      pIVar6 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
    }
    uVar8 = *(undefined8 *)(pIVar6 + 0xa8);
    if ((*(int *)(pIVar6 + 0x2c20) == (int)uVar8) ||
       (*(int *)(pIVar6 + 0x2c20) != *(int *)(pIVar6 + 0x188))) {
      local_48 = *(Value **)(pIVar6 + 0x95a0);
      if (local_48 == *(Value **)(pIVar6 + 0x95a8)) {
        local_48 = (Value *)internal::HandleScope::Extend(pIVar6);
      }
      *(Value **)(pIVar6 + 0x95a0) = local_48 + 8;
      *(undefined8 *)local_48 = uVar8;
      HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar6);
      FUN_00eaadd8(&local_b0,pIVar6,param_2);
      local_c0 = 0;
      uStack_d8 = 0;
      local_e0 = (RuntimeCallStats *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      if (internal::TracingFlags::runtime_stats != 0) {
        local_e0 = (RuntimeCallStats *)(*(long *)(pIVar6 + 0x9520) + 0x58a0);
        internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3b1);
      }
      this_00 = *(Logger **)(pIVar6 + 0x9558);
      uVar3 = internal::Logger::is_logging(this_00);
      if ((uVar3 & 1) != 0) {
        internal::Logger::ApiEntryCall(this_00,"v8::Object::ToInt32");
      }
      uVar1 = *(undefined4 *)(pIVar6 + 0x2c60);
      *(undefined4 *)(pIVar6 + 0x2c60) = 5;
      if (((byte)*this & 1) != 0) {
        this = (Value *)internal::Object::ConvertToInt32(pIVar6,this);
      }
      pVVar7 = local_48;
      if (this == (Value *)0x0) {
        local_a0 = '\x01';
        *(long *)(local_b0 + 0x2c08) = local_68;
        if (local_68 == 0) {
          bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
        }
        else {
          bVar2 = false;
        }
        internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
        pVVar7 = (Value *)0x0;
      }
      else {
        if (((*(ulong *)local_48 & 1) == 0) ||
           ((int)*(ulong *)local_48 != *(int *)(local_60 + 0xa8))) {
          lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
          if (lVar4 == 0) {
LAB_00eb23c4:
            base::OS::PrintError
                      ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                       "Escape value set twice");
                    /* WARNING: Subroutine does not return */
            base::OS::Abort();
          }
          if (*(code **)(lVar4 + 0xb738) == (code *)0x0) goto LAB_00eb23c4;
          (**(code **)(lVar4 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
          *(undefined1 *)(lVar4 + 0xb6b9) = 1;
        }
        *(undefined8 *)pVVar7 = *(undefined8 *)this;
      }
      *(undefined4 *)(pIVar6 + 0x2c60) = uVar1;
      if (local_e0 != (RuntimeCallStats *)0x0) {
        internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
      }
      if (local_a8 != 0) {
        lVar4 = *(long *)(local_b0 + 0x95c0);
        lVar5 = *(long *)(lVar4 + 0x60) + -1;
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar5 * 8);
        *(long *)(lVar4 + 0x60) = lVar5;
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
      pVVar7 = (Value *)0x0;
    }
  }
  return pVVar7;
}

