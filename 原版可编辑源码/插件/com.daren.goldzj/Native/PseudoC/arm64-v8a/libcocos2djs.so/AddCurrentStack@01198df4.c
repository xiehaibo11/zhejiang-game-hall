
/* v8::internal::ProfilerEventsProcessor::AddCurrentStack(bool) */

void __thiscall
v8::internal::ProfilerEventsProcessor::AddCurrentStack(ProfilerEventsProcessor *this,bool param_1)

{
  long lVar1;
  void *__dest;
  ulong extraout_x1;
  undefined8 local_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined4 local_1618 [2];
  undefined4 local_1610 [2];
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_608;
  ushort local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  StackFrameIterator aSStack_5e8 [1416];
  long local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_1618[0] = *(undefined4 *)(this + 0x168);
  local_1610[0] = 5;
  local_608 = 0;
  uStack_1600 = 0;
  local_1608 = 0;
  uStack_5f0 = 0;
  local_5f8 = 0;
  uStack_1638 = 0;
  local_1640 = 0;
  uStack_1628 = 0;
  uStack_1630 = 0;
  local_600 = local_600 & 0xfc00 | 0x200;
  StackFrameIterator::StackFrameIterator(aSStack_5e8,*(Isolate **)(this + 0x170));
  if (local_60 != 0) {
    uStack_1630 = *(undefined8 *)(local_60 + 0x20);
    uStack_1638 = *(undefined8 *)(local_60 + 0x18);
    local_1640 = **(undefined8 **)(local_60 + 0x28);
  }
  TickSample::Init((TickSample *)local_1610,*(undefined8 *)(this + 0x170),&local_1640,1,param_1,0,0)
  ;
  __dest = Malloced::operator_new((Malloced *)0x1038,extraout_x1);
  *(undefined4 *)((long)__dest + 8) = 5;
  *(undefined8 *)((long)__dest + 0x1010) = 0;
  *(undefined8 *)((long)__dest + 0x10) = 0;
  *(undefined8 *)((long)__dest + 0x18) = 0;
  *(undefined8 *)((long)__dest + 0x1020) = 0;
  *(undefined8 *)((long)__dest + 0x1030) = 0;
  *(ushort *)((long)__dest + 0x1018) = *(ushort *)((long)__dest + 0x1018) & 0xfc00 | 0x200;
  *(undefined8 *)((long)__dest + 0x1028) = 0;
  if (__dest != (void *)0x0) {
    memcpy(__dest,local_1618,0x1030);
    base::Mutex::Lock((Mutex *)(this + 0x130));
    *(void **)(*(long *)(this + 0x160) + 0x1030) = __dest;
    *(void **)(this + 0x160) = __dest;
    base::Mutex::Unlock((Mutex *)(this + 0x130));
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(n) != nullptr");
}

