
/* v8::internal::ProfilerEventsProcessor::ProfilerEventsProcessor(v8::internal::Isolate*,
   v8::internal::ProfileGenerator*, v8::internal::ProfilerCodeObserver*) */

void __thiscall
v8::internal::ProfilerEventsProcessor::ProfilerEventsProcessor
          (ProfilerEventsProcessor *this,Isolate *param_1,ProfileGenerator *param_2,
          ProfilerCodeObserver *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  void *pvVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  char *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = "v8:ProfEvntProc";
  local_50 = 0x10000;
  base::Thread::Thread((Thread *)this,(Options *)&local_58);
  *(ProfileGenerator **)(this + 0x38) = param_2;
  *(ProfilerCodeObserver **)(this + 0x40) = param_3;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined ***)this = &PTR__ProfilerEventsProcessor_01cb62d0;
  *(undefined ***)(this + 0x30) = &PTR_CodeEventHandler_01cb6310;
  base::ConditionVariable::ConditionVariable((ConditionVariable *)(this + 0x4c));
  base::Mutex::Mutex((Mutex *)(this + 0x7c));
  base::Mutex::Mutex((Mutex *)(this + 0xa8));
  base::Mutex::Mutex((Mutex *)(this + 0xd0));
  puVar2 = Malloced::operator_new((Malloced *)0x48,extraout_x1);
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined4 **)(this + 0xf8) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 **)(this + 0x100) = puVar2;
    base::Mutex::Mutex((Mutex *)(this + 0x108));
    base::Mutex::Mutex((Mutex *)(this + 0x130));
    pvVar3 = Malloced::operator_new((Malloced *)0x1038,extraout_x1_00);
    *(undefined4 *)((long)pvVar3 + 8) = 5;
    *(undefined8 *)((long)pvVar3 + 0x1010) = 0;
    *(undefined8 *)((long)pvVar3 + 0x10) = 0;
    *(undefined8 *)((long)pvVar3 + 0x18) = 0;
    *(undefined8 *)((long)pvVar3 + 0x1020) = 0;
    *(undefined8 *)((long)pvVar3 + 0x1030) = 0;
    *(undefined8 *)((long)pvVar3 + 0x1028) = 0;
    *(ushort *)((long)pvVar3 + 0x1018) = *(ushort *)((long)pvVar3 + 0x1018) & 0xfc00 | 0x200;
    *(void **)(this + 0x158) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      *(void **)(this + 0x160) = pvVar3;
      *(undefined8 *)(this + 0x168) = 0;
      *(Isolate **)(this + 0x170) = param_1;
      *(ProfilerEventsProcessor **)(*(long *)(this + 0x40) + 0x60) = this;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(head_) != nullptr");
}

