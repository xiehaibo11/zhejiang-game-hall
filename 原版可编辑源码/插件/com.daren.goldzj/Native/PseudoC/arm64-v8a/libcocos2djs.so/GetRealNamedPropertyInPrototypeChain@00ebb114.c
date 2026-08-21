
/* v8::Object::GetRealNamedPropertyInPrototypeChain(v8::Local<v8::Context>, v8::Local<v8::Name>) */

ulong * __thiscall
v8::Object::GetRealNamedPropertyInPrototypeChain(Object *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  Logger *this_00;
  ulong uVar10;
  LookupIterator aLStack_178 [4];
  int local_174;
  RuntimeCallStats *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  Isolate *local_f0;
  long local_e8;
  char local_e0;
  Isolate local_de;
  undefined **local_d8;
  StackGuard *local_d0;
  int local_b8;
  long local_a8;
  Isolate *local_a0;
  undefined8 uStack_98;
  long local_90;
  ulong *local_88;
  Isolate *local_80;
  undefined8 uStack_78;
  Object *local_70;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    pIVar8 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar8 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar10 = *(ulong *)(pIVar8 + 0xa8);
  if ((*(int *)(pIVar8 + 0x2c20) != (int)uVar10) &&
     (*(int *)(pIVar8 + 0x2c20) == *(int *)(pIVar8 + 0x188))) {
    puVar9 = (ulong *)0x0;
    goto LAB_00ebb3f8;
  }
  local_88 = *(ulong **)(pIVar8 + 0x95a0);
  if (local_88 == *(ulong **)(pIVar8 + 0x95a8)) {
    local_88 = (ulong *)internal::HandleScope::Extend(pIVar8);
  }
  *(ulong **)(pIVar8 + 0x95a0) = local_88 + 1;
  *local_88 = uVar10;
  HandleScope::Initialize((HandleScope *)&local_a0,(Isolate *)pIVar8);
  FUN_00eaadd8(&local_f0,pIVar8,param_2);
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_120 = (RuntimeCallStats *)(*(long *)(pIVar8 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0x39f);
  }
  this_00 = *(Logger **)(pIVar8 + 0x9558);
  uVar10 = internal::Logger::is_logging(this_00);
  if ((uVar10 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::GetRealNamedPropertyInPrototypeChain");
  }
  uVar1 = *(undefined4 *)(pIVar8 + 0x2c60);
  *(undefined4 *)(pIVar8 + 0x2c60) = 5;
  if (*(ushort *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      < 0xaa) {
LAB_00ebb338:
    puVar9 = (ulong *)0x0;
  }
  else {
    uStack_78 = 0;
    local_68 = 0;
    local_64 = '\0';
    local_60 = 0;
    local_80 = pIVar8;
    local_70 = this;
    internal::PrototypeIterator::Advance((PrototypeIterator *)&local_80);
    puVar9 = (ulong *)0x0;
    if (local_64 == '\0') {
      internal::LookupIterator::PropertyOrElement(aLStack_178,pIVar8,this,param_3,local_70,2);
      puVar4 = (ulong *)internal::Object::GetProperty(aLStack_178,false);
      puVar9 = local_88;
      if (puVar4 == (ulong *)0x0) {
        local_e0 = '\x01';
        *(long *)(local_f0 + 0x2c08) = local_a8;
        if (local_a8 == 0) {
          bVar3 = *(long *)(local_f0 + 0x2bb8) == 0;
        }
        else {
          bVar3 = false;
        }
        internal::Isolate::OptionalRescheduleException(local_f0,bVar3);
      }
      else if (local_174 != 4) {
        if (((*local_88 & 1) == 0) || ((int)*local_88 != *(int *)(local_a0 + 0xa8))) {
          lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
          if (lVar5 == 0) {
LAB_00ebb468:
            base::OS::PrintError
                      ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                       "Escape value set twice");
                    /* WARNING: Subroutine does not return */
            base::OS::Abort();
          }
          if (*(code **)(lVar5 + 0xb738) == (code *)0x0) goto LAB_00ebb468;
          (**(code **)(lVar5 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
          *(undefined1 *)(lVar5 + 0xb6b9) = 1;
        }
        *puVar9 = *puVar4;
        goto LAB_00ebb33c;
      }
      goto LAB_00ebb338;
    }
  }
LAB_00ebb33c:
  *(undefined4 *)(pIVar8 + 0x2c60) = uVar1;
  if (local_120 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
  }
  if (local_e8 != 0) {
    lVar5 = *(long *)(local_f0 + 0x95c0);
    lVar6 = *(long *)(lVar5 + 0x60) + -1;
    uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar6 * 8);
    *(long *)(lVar5 + 0x60) = lVar6;
    *(undefined8 *)(local_f0 + 0x2bc8) = uVar7;
  }
  if (local_e0 == '\0') {
    *(long *)(local_f0 + 0x2c08) = local_a8;
  }
  local_f0[0xb828] = local_de;
  local_d8 = &PTR__InterruptsScope_01c984b0;
  if (local_b8 != 2) {
    internal::StackGuard::PopInterruptsScope(local_d0);
  }
  *(undefined8 *)(local_a0 + 0x95a0) = uStack_98;
  *(int *)(local_a0 + 0x95b0) = *(int *)(local_a0 + 0x95b0) + -1;
  if (*(long *)(local_a0 + 0x95a8) != local_90) {
    *(long *)(local_a0 + 0x95a8) = local_90;
    internal::HandleScope::DeleteExtensions(local_a0);
  }
LAB_00ebb3f8:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}

