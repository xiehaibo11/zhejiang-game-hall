
/* v8::internal::StressMarkingObserver::Step(int, unsigned long, unsigned long) */

void __thiscall
v8::internal::StressMarkingObserver::Step
          (StressMarkingObserver *this,int param_1,ulong param_2,ulong param_3)

{
  Heap::StartIncrementalMarkingIfAllocationLimitIsReached(*(Heap **)(this + 0x18),0,0);
  IncrementalMarking::EnsureBlackAllocated
            (*(IncrementalMarking **)(*(long *)(this + 0x18) + 0x828),param_2,param_3);
  return;
}

