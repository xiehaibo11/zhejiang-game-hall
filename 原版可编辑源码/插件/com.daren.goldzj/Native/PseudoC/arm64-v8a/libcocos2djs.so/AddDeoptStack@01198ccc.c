
/* v8::internal::ProfilerEventsProcessor::AddDeoptStack(unsigned long, int) */

void __thiscall
v8::internal::ProfilerEventsProcessor::AddDeoptStack
          (ProfilerEventsProcessor *this,ulong param_1,int param_2)

{
  void *__dest;
  ulong extraout_x1;
  ulong local_1090;
  long lStack_1088;
  long local_1080;
  undefined8 uStack_1078;
  undefined4 local_1070 [2];
  undefined4 local_1068 [2];
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 local_60;
  ushort local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_1070[0] = *(undefined4 *)(this + 0x168);
  local_58 = local_58 & 0xfc00 | 0x200;
  local_60 = 0;
  uStack_1058 = 0;
  local_1060 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_1068[0] = 5;
  local_1080 = *(long *)(*(long *)(this + 0x170) + 0x2c28);
  lStack_1088 = local_1080 - param_2;
  uStack_1078 = 0;
  local_1090 = param_1;
  TickSample::Init((TickSample *)local_1068,*(long *)(this + 0x170),&local_1090,1,0,0,0);
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
    memcpy(__dest,local_1070,0x1030);
    base::Mutex::Lock((Mutex *)(this + 0x130));
    *(void **)(*(long *)(this + 0x160) + 0x1030) = __dest;
    *(void **)(this + 0x160) = __dest;
    base::Mutex::Unlock((Mutex *)(this + 0x130));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(n) != nullptr");
}

