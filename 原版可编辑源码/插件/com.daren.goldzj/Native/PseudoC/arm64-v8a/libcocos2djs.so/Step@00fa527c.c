
/* v8::internal::IncrementalMarking::Observer::Step(int, unsigned long, unsigned long) */

void __thiscall
v8::internal::IncrementalMarking::Observer::Step
          (Observer *this,int param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar2 = **(long **)(this + 0x18);
  uVar1 = *(undefined4 *)(lVar2 + -0x5bf0);
  *(undefined4 *)(lVar2 + -0x5bf0) = 1;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(lVar2 + 0xcd0) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x87);
  }
  AdvanceOnAllocation(*(IncrementalMarking **)(this + 0x18));
  EnsureBlackAllocated(*(IncrementalMarking **)(this + 0x18),param_2,param_3);
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  *(undefined4 *)(lVar2 + -0x5bf0) = uVar1;
  return;
}

