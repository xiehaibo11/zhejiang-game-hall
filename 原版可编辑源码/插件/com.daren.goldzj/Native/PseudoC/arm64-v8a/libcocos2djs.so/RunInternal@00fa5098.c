
/* v8::internal::IncrementalMarkingJob::Task::RunInternal() */

void __thiscall v8::internal::IncrementalMarkingJob::Task::RunInternal(Task *this)

{
  Heap *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  CallStatsScopedTracer aCStack_88 [8];
  long local_80;
  char *local_78;
  
  lVar9 = *(long *)(this + 0x28);
  uVar1 = *(undefined4 *)(lVar9 + 0x2c60);
  *(undefined4 *)(lVar9 + 0x2c60) = 1;
  if (DAT_01d3f100 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f100 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,&DAT_019c38f7);
  }
  local_80 = 0;
  if ((*DAT_01d3f100 & 5) != 0) {
    tracing::CallStatsScopedTracer::Initialize
              (aCStack_88,*(Isolate **)(this + 0x28),DAT_01d3f100,"V8.Task");
  }
  lVar7 = *(long *)(this + 0x28);
  lVar10 = *(long *)(lVar7 + 0x9078);
  this_00 = (Heap *)(lVar7 + 0x8850);
  if ((*(int *)(lVar10 + 0x58) == 0) &&
     (iVar4 = Heap::IncrementalMarkingLimitReached(this_00), iVar4 != 0)) {
    uVar5 = Heap::ShouldOptimizeForMemoryUsage(this_00);
    Heap::StartIncrementalMarking(this_00,uVar5 & 1,0xc,0x40);
  }
  puVar8 = *(undefined1 **)(this + 0x30);
  if (*(int *)(this + 0x3c) != 0) {
    puVar8 = puVar8 + 1;
  }
  *puVar8 = 0;
  if (*(int *)(lVar10 + 0x58) != 0) {
    uVar2 = *(undefined4 *)(this + 0x38);
    dVar11 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    iVar4 = IncrementalMarking::AdvanceWithDeadline
                      ((IncrementalMarking *)(dVar11 + 1.0),*(long *)(lVar7 + 0x9078),1,1);
    lVar7 = *(long *)(lVar7 + 0x90c0);
    uVar3 = *(undefined4 *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = uVar2;
    Heap::FinalizeIncrementalMarkingIfComplete(this_00,9);
    *(undefined4 *)(lVar7 + 0x18) = uVar3;
    if (*(int *)(lVar10 + 0x58) != 0) {
      ScheduleTask(*(IncrementalMarkingJob **)(this + 0x30),this_00,iVar4 == 0);
    }
  }
  if ((local_80 != 0) && (*local_78 != '\0')) {
    tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_88);
  }
  *(undefined4 *)(lVar9 + 0x2c60) = uVar1;
  return;
}

