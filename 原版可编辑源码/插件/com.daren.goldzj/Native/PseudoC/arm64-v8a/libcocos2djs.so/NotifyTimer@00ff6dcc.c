
/* v8::internal::MemoryReducer::NotifyTimer(v8::internal::MemoryReducer::Event const&) */

void v8::internal::MemoryReducer::NotifyTimer(Event *param_1)

{
  ulong uVar1;
  CancelableTask *pCVar2;
  State *in_x1;
  Event *in_x2;
  long *plVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  CancelableTask *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  Step((MemoryReducer *)(param_1 + 0x18),in_x1,in_x2);
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(CancelableTask **)(param_1 + 0x18) = local_60;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  if (*(int *)(param_1 + 0x18) == 1) {
    if ((*(int *)(*(long *)(*(Heap **)param_1 + 0x828) + 0x58) != 0) &&
       (uVar1 = Heap::ShouldOptimizeForMemoryUsage(*(Heap **)param_1), (uVar1 & 1) != 0)) {
      dVar5 = (double)Heap::MonotonicallyIncreasingTimeInMs();
      IncrementalMarking::AdvanceWithDeadline
                ((IncrementalMarking *)(dVar5 + 500.0),*(undefined8 *)(*(long *)param_1 + 0x828),1,1
                );
      Heap::FinalizeIncrementalMarkingIfComplete(*(Heap **)param_1,9);
    }
    lVar4 = *(long *)param_1;
    if (*(int *)(lVar4 + 0x178) != 4) {
      dVar5 = *(double *)(param_1 + 0x20);
      dVar6 = *(double *)(in_x1 + 8);
      plVar3 = *(long **)(param_1 + 8);
      pCVar2 = operator_new(0x30);
      CancelableTask::CancelableTask(pCVar2,(Isolate *)(lVar4 + -0x8850));
      *(undefined ***)pCVar2 = &PTR__CancelableTask_01ca9108;
      local_60 = pCVar2 + 0x20;
      *(undefined **)local_60 = &DAT_01ca9138;
      *(Event **)(pCVar2 + 0x28) = param_1;
      (**(code **)(*plVar3 + 0x10))(((dVar5 - dVar6) + 100.0) / 1000.0,plVar3,&local_60);
      pCVar2 = local_60;
      local_60 = (CancelableTask *)0x0;
      if (pCVar2 != (CancelableTask *)0x0) {
        (**(code **)(*(long *)pCVar2 + 8))();
      }
    }
    if (FLAG_trace_gc_verbose != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)param_1 + -0x8850),
                 *(double *)(param_1 + 0x20) - *(double *)(in_x1 + 8),
                 "Memory reducer: waiting for %.f ms\n");
    }
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    if (FLAG_trace_gc_verbose != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)param_1 + -0x8850),"Memory reducer: started GC #%d\n",
                 (ulong)*(uint *)(param_1 + 0x1c));
    }
    Heap::StartIdleIncrementalMarking(*(Heap **)param_1,0x11,0x20);
  }
  return;
}

