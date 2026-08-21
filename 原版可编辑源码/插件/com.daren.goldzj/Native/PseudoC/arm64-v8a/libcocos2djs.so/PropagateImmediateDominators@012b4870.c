
/* v8::internal::compiler::Scheduler::PropagateImmediateDominators(v8::internal::compiler::BasicBlock*)
    */

void v8::internal::compiler::Scheduler::PropagateImmediateDominators(BasicBlock *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  BasicBlock *pBVar4;
  
  for (; param_1 != (BasicBlock *)0x0; param_1 = *(BasicBlock **)(param_1 + 0x18)) {
    plVar1 = *(long **)(param_1 + 0x80);
    plVar2 = *(long **)(param_1 + 0x88);
    pBVar4 = (BasicBlock *)*plVar1;
    bVar3 = pBVar4[8] != (BasicBlock)0x0;
    while (plVar1 = plVar1 + 1, plVar1 != plVar2) {
      if (-1 < *(int *)((BasicBlock *)*plVar1 + 0xc)) {
        pBVar4 = (BasicBlock *)BasicBlock::GetCommonDominator(pBVar4,(BasicBlock *)*plVar1);
        bVar3 = (bool)(bVar3 & *(char *)(*plVar1 + 8) != '\0');
      }
    }
    *(BasicBlock **)(param_1 + 0x10) = pBVar4;
    *(int *)(param_1 + 0xc) = *(int *)(pBVar4 + 0xc) + 1;
    param_1[8] = (BasicBlock)(bVar3 | param_1[8] != (BasicBlock)0x0);
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("Block id:%d\'s idom is id:%d, depth = %d\n",(ulong)*(uint *)(param_1 + 0xa0),
             (ulong)*(uint *)(pBVar4 + 0xa0));
    }
  }
  return;
}

