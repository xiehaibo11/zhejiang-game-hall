
/* v8::internal::MemoryReducer::NotifyMarkCompact(v8::internal::MemoryReducer::Event const&) */

void v8::internal::MemoryReducer::NotifyMarkCompact(Event *param_1)

{
  char *pcVar1;
  int iVar2;
  CancelableTask *pCVar3;
  State *in_x1;
  Event *in_x2;
  long *plVar4;
  MemoryReducer *this;
  long lVar5;
  double dVar6;
  double dVar7;
  CancelableTask *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  this = (MemoryReducer *)(param_1 + 0x18);
  iVar2 = *(int *)this;
  Step(this,in_x1,in_x2);
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(CancelableTask **)this = local_60;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  if (iVar2 != 1) {
    if ((*(int *)this == 1) && (lVar5 = *(long *)param_1, *(int *)(lVar5 + 0x178) != 4)) {
      dVar6 = *(double *)(param_1 + 0x20);
      dVar7 = *(double *)(in_x1 + 8);
      plVar4 = *(long **)(param_1 + 8);
      pCVar3 = operator_new(0x30);
      CancelableTask::CancelableTask(pCVar3,(Isolate *)(lVar5 + -0x8850));
      *(undefined ***)pCVar3 = &PTR__CancelableTask_01ca9108;
      local_60 = pCVar3 + 0x20;
      *(undefined **)local_60 = &DAT_01ca9138;
      *(Event **)(pCVar3 + 0x28) = param_1;
      (**(code **)(*plVar4 + 0x10))(((dVar6 - dVar7) + 100.0) / 1000.0,plVar4,&local_60);
      pCVar3 = local_60;
      local_60 = (CancelableTask *)0x0;
      if (pCVar3 != (CancelableTask *)0x0) {
        (**(code **)(*(long *)pCVar3 + 8))();
      }
    }
    if ((iVar2 == 2) && (FLAG_trace_gc_verbose != '\0')) {
      pcVar1 = "will do more";
      if (*(int *)(param_1 + 0x18) != 1) {
        pcVar1 = "done";
      }
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)param_1 + -0x8850),"Memory reducer: finished GC #%d (%s)\n",
                 (ulong)*(uint *)(param_1 + 0x1c),pcVar1);
    }
  }
  return;
}

