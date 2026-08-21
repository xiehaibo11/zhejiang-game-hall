
/* v8::internal::compiler::CFGBuilder::BuildBlockForNode(v8::internal::compiler::Node*) */

BasicBlock * __thiscall
v8::internal::compiler::CFGBuilder::BuildBlockForNode(CFGBuilder *this,Node *param_1)

{
  BasicBlock *pBVar1;
  
  pBVar1 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),param_1);
  if (pBVar1 == (BasicBlock *)0x0) {
    pBVar1 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("Create block id:%d for #%d:%s\n",(ulong)*(uint *)(pBVar1 + 0xa0),
             (ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),*(undefined8 *)(*(long *)param_1 + 8));
    }
    Schedule::AddNode(*(Schedule **)(this + 0x10),pBVar1,param_1);
    Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
  }
  return pBVar1;
}

