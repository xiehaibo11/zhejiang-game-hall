
/* v8::Object::GetRealNamedPropertyAttributes(v8::Local<v8::Context>, v8::Local<v8::Name>) */

ulong __thiscall
v8::Object::GetRealNamedPropertyAttributes(Object *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  Logger *this_00;
  Isolate *pIVar7;
  long lVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  LookupIterator aLStack_138 [4];
  int local_134;
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
  
  pIVar5 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar5 + 0x2c20) == *(int *)(pIVar5 + 0xa8)) ||
     (*(int *)(pIVar5 + 0x2c20) != *(int *)(pIVar5 + 0x188))) {
    uVar9 = *(undefined8 *)(pIVar5 + 0x95a0);
    pIVar7 = pIVar5 + 0x95a8;
    lVar8 = *(long *)pIVar7;
    pIVar10 = pIVar5 + 0x95b0;
    *(int *)pIVar10 = *(int *)pIVar10 + 1;
    FUN_00eaadd8(&local_b0,pIVar5,param_2);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (RuntimeCallStats *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(pIVar5 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x39d);
    }
    this_00 = *(Logger **)(pIVar5 + 0x9558);
    uVar6 = internal::Logger::is_logging(this_00);
    if ((uVar6 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::Object::GetRealNamedPropertyAttributes");
    }
    uVar1 = *(undefined4 *)(pIVar5 + 0x2c60);
    *(undefined4 *)(pIVar5 + 0x2c60) = 5;
    internal::LookupIterator::PropertyOrElement(aLStack_138,pIVar5,this,param_3,this,2);
    uVar6 = internal::JSReceiver::GetPropertyAttributes(aLStack_138);
    if (local_134 == 4) {
      uVar6 = 0;
    }
    else {
      if ((uVar6 & 0xff) == 0) {
        lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
        if (lVar2 == 0) goto LAB_00ebbfcc;
        if (*(code **)(lVar2 + 0xb738) == (code *)0x0) goto LAB_00ebbfcc;
        (**(code **)(lVar2 + 0xb738))("v8::FromJust","Maybe value is Nothing.");
        *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      }
      if ((uVar6 & 0xffffffff00000000) == 0x4000000000) {
        uVar6 = 1;
      }
      else {
        if ((uVar6 & 0xff) == 0) {
          lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
          if (lVar2 == 0) {
LAB_00ebbfcc:
            base::OS::PrintError
                      ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FromJust",
                       "Maybe value is Nothing.");
                    /* WARNING: Subroutine does not return */
            base::OS::Abort();
          }
          if (*(code **)(lVar2 + 0xb738) == (code *)0x0) goto LAB_00ebbfcc;
          (**(code **)(lVar2 + 0xb738))("v8::FromJust","Maybe value is Nothing.");
          *(undefined1 *)(lVar2 + 0xb6b9) = 1;
        }
        uVar6 = uVar6 & 0xffffffff00000000 | 1;
      }
    }
    *(undefined4 *)(pIVar5 + 0x2c60) = uVar1;
    if (local_e0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (local_a8 != 0) {
      lVar2 = *(long *)(local_b0 + 0x95c0);
      lVar3 = *(long *)(lVar2 + 0x60) + -1;
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x50) + lVar3 * 8);
      *(long *)(lVar2 + 0x60) = lVar3;
      *(undefined8 *)(local_b0 + 0x2bc8) = uVar4;
    }
    if (local_a0 == '\0') {
      *(undefined8 *)(local_b0 + 0x2c08) = local_68;
    }
    *(undefined1 *)(local_b0 + 0xb828) = local_9e;
    local_98 = &PTR__InterruptsScope_01c984b0;
    if (local_78 != 2) {
      internal::StackGuard::PopInterruptsScope(local_90);
    }
    *(undefined8 *)(pIVar5 + 0x95a0) = uVar9;
    *(int *)pIVar10 = *(int *)pIVar10 + -1;
    if (*(long *)pIVar7 != lVar8) {
      *(long *)pIVar7 = lVar8;
      internal::HandleScope::DeleteExtensions(pIVar5);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

