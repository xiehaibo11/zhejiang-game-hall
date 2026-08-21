
/* v8::internal::MemoryReducer::NotifyPossibleGarbage(v8::internal::MemoryReducer::Event const&) */

void v8::internal::MemoryReducer::NotifyPossibleGarbage(Event *param_1)

{
  int iVar1;
  CancelableTask *pCVar2;
  State *in_x1;
  Event *in_x2;
  long *plVar3;
  MemoryReducer *this;
  long lVar4;
  double dVar5;
  double dVar6;
  CancelableTask *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  this = (MemoryReducer *)(param_1 + 0x18);
  iVar1 = *(int *)this;
  Step(this,in_x1,in_x2);
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(CancelableTask **)this = local_60;
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  if (((iVar1 != 1) && (*(int *)this == 1)) &&
     (lVar4 = *(long *)param_1, *(int *)(lVar4 + 0x178) != 4)) {
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
  return;
}

