
/* v8::Object::GetRealNamedPropertyAttributesInPrototypeChain(v8::Local<v8::Context>,
   v8::Local<v8::Name>) */

ulong __thiscall
v8::Object::GetRealNamedPropertyAttributesInPrototypeChain
          (Object *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  Logger *this_00;
  Isolate *pIVar9;
  long lVar10;
  Isolate *pIVar11;
  LookupIterator aLStack_168 [4];
  int local_164;
  RuntimeCallStats *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  char local_d8;
  undefined1 local_d6;
  undefined **local_d0;
  StackGuard *local_c8;
  int local_b0;
  undefined8 local_a0;
  Isolate *local_98;
  undefined8 uStack_90;
  Object *local_88;
  undefined4 local_80;
  char local_7c;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pIVar7 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar7 + 0x2c20) != *(int *)(pIVar7 + 0xa8)) &&
     (*(int *)(pIVar7 + 0x2c20) == *(int *)(pIVar7 + 0x188))) {
    uVar8 = 0;
    goto LAB_00ebb890;
  }
  uVar3 = *(undefined8 *)(pIVar7 + 0x95a0);
  pIVar9 = pIVar7 + 0x95a8;
  lVar10 = *(long *)pIVar9;
  pIVar11 = pIVar7 + 0x95b0;
  *(int *)pIVar11 = *(int *)pIVar11 + 1;
  FUN_00eaadd8(&local_e8,pIVar7,param_2);
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = (RuntimeCallStats *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_110 = (RuntimeCallStats *)(*(long *)(pIVar7 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0x39e);
  }
  this_00 = *(Logger **)(pIVar7 + 0x9558);
  uVar8 = internal::Logger::is_logging(this_00);
  if ((uVar8 & 1) != 0) {
    internal::Logger::ApiEntryCall
              (this_00,"v8::Object::GetRealNamedPropertyAttributesInPrototypeChain");
  }
  uVar1 = *(undefined4 *)(pIVar7 + 0x2c60);
  *(undefined4 *)(pIVar7 + 0x2c60) = 5;
  if (*(ushort *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      < 0xaa) {
LAB_00ebb7d8:
    uVar8 = 0;
  }
  else {
    uStack_90 = 0;
    local_80 = 0;
    local_7c = '\0';
    local_78 = 0;
    local_98 = pIVar7;
    local_88 = this;
    internal::PrototypeIterator::Advance((PrototypeIterator *)&local_98);
    uVar8 = 0;
    if (local_7c == '\0') {
      internal::LookupIterator::PropertyOrElement(aLStack_168,pIVar7,this,param_3,local_88,2);
      uVar8 = internal::JSReceiver::GetPropertyAttributes(aLStack_168);
      if (local_164 == 4) goto LAB_00ebb7d8;
      if ((uVar8 & 0xff) == 0) {
        lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar4 == 0) goto LAB_00ebb9c4;
        if (*(code **)(lVar4 + 0xb738) == (code *)0x0) goto LAB_00ebb9c4;
        (**(code **)(lVar4 + 0xb738))("v8::FromJust","Maybe value is Nothing.");
        *(undefined1 *)(lVar4 + 0xb6b9) = 1;
      }
      if ((uVar8 & 0xffffffff00000000) == 0x4000000000) {
        uVar8 = 1;
      }
      else {
        if ((uVar8 & 0xff) == 0) {
          lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
          if (lVar4 == 0) {
LAB_00ebb9c4:
            base::OS::PrintError
                      ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FromJust",
                       "Maybe value is Nothing.");
                    /* WARNING: Subroutine does not return */
            base::OS::Abort();
          }
          if (*(code **)(lVar4 + 0xb738) == (code *)0x0) goto LAB_00ebb9c4;
          (**(code **)(lVar4 + 0xb738))("v8::FromJust","Maybe value is Nothing.");
          *(undefined1 *)(lVar4 + 0xb6b9) = 1;
        }
        uVar8 = uVar8 & 0xffffffff00000000 | 1;
      }
    }
  }
  *(undefined4 *)(pIVar7 + 0x2c60) = uVar1;
  if (local_110 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
  }
  if (local_e0 != 0) {
    lVar4 = *(long *)(local_e8 + 0x95c0);
    lVar5 = *(long *)(lVar4 + 0x60) + -1;
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar5 * 8);
    *(long *)(lVar4 + 0x60) = lVar5;
    *(undefined8 *)(local_e8 + 0x2bc8) = uVar6;
  }
  if (local_d8 == '\0') {
    *(undefined8 *)(local_e8 + 0x2c08) = local_a0;
  }
  *(undefined1 *)(local_e8 + 0xb828) = local_d6;
  local_d0 = &PTR__InterruptsScope_01c984b0;
  if (local_b0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_c8);
  }
  *(undefined8 *)(pIVar7 + 0x95a0) = uVar3;
  *(int *)pIVar11 = *(int *)pIVar11 + -1;
  if (*(long *)pIVar9 != lVar10) {
    *(long *)pIVar9 = lVar10;
    internal::HandleScope::DeleteExtensions(pIVar7);
  }
LAB_00ebb890:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

