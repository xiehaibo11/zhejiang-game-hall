
/* v8::internal::compiler::Scheduler::SealFinalSchedule() */

void __thiscall v8::internal::compiler::Scheduler::SealFinalSchedule(Scheduler *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  BasicBlock *pBVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- SEAL FINAL SCHEDULE ------------------------------------\n");
  }
  SpecialRPONumberer::SerializeRPOIntoSchedule(*(SpecialRPONumberer **)(this + 0xd8));
  puVar4 = *(undefined8 **)(this + 0x20);
  puVar2 = *(undefined8 **)(this + 0x28);
  if (puVar4 != puVar2) {
    lVar5 = 0;
    do {
      plVar6 = (long *)*puVar4;
      pBVar3 = (BasicBlock *)Schedule::GetBlockById(*(Schedule **)(this + 0x10),lVar5);
      if (plVar6 != (long *)0x0) {
        puVar1 = (undefined8 *)*plVar6;
        puVar7 = (undefined8 *)plVar6[1];
        while (puVar7 != puVar1) {
          puVar7 = puVar7 + -1;
          Schedule::AddNode(*(Schedule **)(this + 0x10),pBVar3,(Node *)*puVar7);
        }
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (puVar4 != puVar2);
  }
  return;
}

