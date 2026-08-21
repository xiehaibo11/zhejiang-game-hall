
/* v8::Object::GetOwnPropertyDescriptor(v8::Local<v8::Context>, v8::Local<v8::Name>) */

Isolate * __thiscall
v8::Object::GetOwnPropertyDescriptor(Object *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  Isolate *pIVar2;
  bool bVar3;
  ushort uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  Isolate *pIVar10;
  Logger *this_00;
  ulong uVar11;
  PropertyDescriptor local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  Isolate *local_58;
  
  if (param_2 == 0) {
    pIVar9 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar11 = *(ulong *)(pIVar9 + 0xa8);
  if ((*(int *)(pIVar9 + 0x2c20) != (int)uVar11) &&
     (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
    return (Isolate *)0x0;
  }
  local_58 = *(Isolate **)(pIVar9 + 0x95a0);
  if (local_58 == *(Isolate **)(pIVar9 + 0x95a8)) {
    local_58 = (Isolate *)internal::HandleScope::Extend(pIVar9);
  }
  *(Isolate **)(pIVar9 + 0x95a0) = local_58 + 8;
  *(ulong *)local_58 = uVar11;
  HandleScope::Initialize((HandleScope *)&local_70,(Isolate *)pIVar9);
  FUN_00eaadd8(&local_c0,pIVar9,param_2);
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = (RuntimeCallStats *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_f0 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_f0,(ulong)&local_f0 | 8,0x398);
  }
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar11 = internal::Logger::is_logging(this_00);
  if ((uVar11 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::GetOwnPropertyDescriptor");
  }
  uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  local_118[0] = (PropertyDescriptor)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar4 = internal::JSReceiver::GetOwnPropertyDescriptor(pIVar9,this,param_3,local_118);
  if ((uVar4 & 0xff) == 0) {
    local_b0 = '\x01';
    *(long *)(local_c0 + 0x2c08) = local_78;
    if (local_78 == 0) {
      bVar3 = *(long *)(local_c0 + 0x2bb8) == 0;
    }
    else {
      bVar3 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_c0,bVar3);
  }
  else {
    if (uVar4 < 0x100) {
      pIVar10 = pIVar9 + 0xa0;
      goto LAB_00eb7e64;
    }
    puVar5 = (ulong *)internal::PropertyDescriptor::ToObject(local_118,pIVar9);
    pIVar10 = local_58;
    pIVar2 = local_70;
    if (((*(ulong *)local_58 & 1) == 0) || ((int)*(ulong *)local_58 != *(int *)(local_70 + 0xa8))) {
      lVar6 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar6 == 0) {
LAB_00eb7f7c:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar6 + 0xb738) == (code *)0x0) goto LAB_00eb7f7c;
      (**(code **)(lVar6 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar6 + 0xb6b9) = 1;
    }
    if (puVar5 != (ulong *)0x0) {
      *(ulong *)pIVar10 = *puVar5;
      goto LAB_00eb7e64;
    }
    *(ulong *)pIVar10 = *(ulong *)(pIVar2 + 0xa0);
  }
  pIVar10 = (Isolate *)0x0;
LAB_00eb7e64:
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
  if (local_f0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_f0,(RuntimeCallTimer *)((ulong)&local_f0 | 8));
  }
  if (local_b8 != 0) {
    lVar6 = *(long *)(local_c0 + 0x95c0);
    lVar7 = *(long *)(lVar6 + 0x60) + -1;
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x50) + lVar7 * 8);
    *(long *)(lVar6 + 0x60) = lVar7;
    *(undefined8 *)(local_c0 + 0x2bc8) = uVar8;
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
  return pIVar10;
}

