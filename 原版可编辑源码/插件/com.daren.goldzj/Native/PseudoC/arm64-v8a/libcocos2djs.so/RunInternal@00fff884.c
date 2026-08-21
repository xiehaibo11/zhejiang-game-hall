
/* v8::internal::ScavengeJob::IdleTask::RunInternal(double) */

void __thiscall v8::internal::ScavengeJob::IdleTask::RunInternal(IdleTask *this,double param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ScavengeJob *this_00;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  CallStatsScopedTracer aCStack_88 [8];
  long local_80;
  char *local_78;
  
  lVar7 = *(long *)(this + 0x28);
  uVar1 = *(undefined4 *)(lVar7 + 0x2c60);
  *(undefined4 *)(lVar7 + 0x2c60) = 1;
  if (DAT_01d3f450 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f450 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,&DAT_019c38f7);
  }
  local_80 = 0;
  if ((*DAT_01d3f450 & 5) != 0) {
    tracing::CallStatsScopedTracer::Initialize
              (aCStack_88,*(Isolate **)(this + 0x28),DAT_01d3f450,"V8.Task");
  }
  lVar5 = *(long *)(this + 0x28);
  dVar8 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  dVar9 = (double)GCTracer::ScavengeSpeedInBytesPerMillisecond(*(GCTracer **)(lVar5 + 0x9048),0);
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x8938) + 0x48))();
  uVar6 = *(ulong *)(*(long *)(lVar5 + 0x8938) + 0x138);
  lVar4 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  dVar10 = 1310720.0;
  if (dVar9 != 0.0) {
    dVar10 = dVar9 * 5.0;
  }
  dVar11 = (double)((uVar6 >> 0x12) * lVar4) * 0.8;
  if (dVar11 <= dVar10) {
    dVar10 = dVar11;
  }
  **(undefined1 **)(this + 0x30) = 0;
  if (dVar10 + -1048576.0 <= (double)uVar3) {
    dVar10 = 262144.0;
    if (dVar9 != 0.0) {
      dVar10 = dVar9;
    }
    if ((double)uVar3 <= (param_1 * 1000.0 - dVar8) * dVar10) {
      Heap::CollectGarbage((Heap *)(lVar5 + 0x8850),1,0xc,0);
    }
    else {
      this_00 = *(ScavengeJob **)(this + 0x30);
      if (this_00[1] == (ScavengeJob)0x0) {
        ScheduleIdleTask(this_00,(Heap *)(lVar5 + 0x8850));
        this_00[1] = (ScavengeJob)0x1;
      }
    }
  }
  if ((local_80 != 0) && (*local_78 != '\0')) {
    tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_88);
  }
  *(undefined4 *)(lVar7 + 0x2c60) = uVar1;
  return;
}

