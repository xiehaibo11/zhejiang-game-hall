
/* v8::internal::Heap::StartIncrementalMarkingIfAllocationLimitIsReached(int, v8::GCCallbackFlags)
    */

void __thiscall
v8::internal::Heap::StartIncrementalMarkingIfAllocationLimitIsReached
          (Heap *this,undefined4 param_1,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  if (*(int *)(*(long *)(this + 0x828) + 0x58) == 0) {
    iVar1 = IncrementalMarkingLimitReached(this);
    if (iVar1 == 2) {
      uVar2 = OldGenerationSpaceAvailable(this);
      uVar5 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
      lVar3 = MemoryChunkLayout::AllocatableMemoryInDataPage();
      *(undefined4 *)(this + 0xad4) = param_1;
      *(undefined4 *)(this + 0xad8) = param_3;
      uVar4 = 0x17;
      if (uVar2 <= (uVar5 >> 0x12) * lVar3) {
        uVar4 = 2;
      }
      IncrementalMarking::Start(*(IncrementalMarking **)(this + 0x828),uVar4);
      return;
    }
    if (iVar1 == 1) {
      IncrementalMarkingJob::ScheduleTask
                ((IncrementalMarkingJob *)(*(long *)(this + 0x828) + 0x61),this,0);
      return;
    }
  }
  return;
}

