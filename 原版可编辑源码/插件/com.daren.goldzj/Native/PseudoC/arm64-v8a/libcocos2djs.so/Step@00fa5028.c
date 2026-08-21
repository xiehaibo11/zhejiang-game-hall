
/* v8::internal::IncrementalMarkingJob::Task::Step(v8::internal::Heap*,
   v8::EmbedderHeapTracer::EmbedderStackState) */

undefined4 v8::internal::IncrementalMarkingJob::Task::Step(Heap *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  uVar2 = IncrementalMarking::AdvanceWithDeadline
                    ((IncrementalMarking *)(dVar4 + 1.0),*(undefined8 *)(param_1 + 0x828),1,1);
  lVar3 = *(long *)(param_1 + 0x870);
  uVar1 = *(undefined4 *)(lVar3 + 0x18);
  *(undefined4 *)(lVar3 + 0x18) = param_2;
  Heap::FinalizeIncrementalMarkingIfComplete(param_1,9);
  *(undefined4 *)(lVar3 + 0x18) = uVar1;
  return uVar2;
}

