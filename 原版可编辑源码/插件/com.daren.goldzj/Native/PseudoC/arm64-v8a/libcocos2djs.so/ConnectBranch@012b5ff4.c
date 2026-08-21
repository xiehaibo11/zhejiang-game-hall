
/* v8::internal::compiler::CFGBuilder::ConnectBranch(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CFGBuilder::ConnectBranch(CFGBuilder *this,Node *param_1)

{
  bool bVar1;
  char cVar2;
  Node *pNVar3;
  BasicBlock *pBVar4;
  long lVar5;
  Node *local_40;
  Node *local_38;
  
  NodeProperties::CollectControlProjections(param_1,&local_40,2);
  local_40 = (Node *)Schedule::block(*(Schedule **)(this + 0x10),local_40);
  local_38 = (Node *)Schedule::block(*(Schedule **)(this + 0x10),local_38);
  cVar2 = BranchHintOf(*(Operator **)param_1);
  pNVar3 = local_40;
  if ((cVar2 == '\x02') || (pNVar3 = local_38, cVar2 == '\x01')) {
    *(BasicBlock *)(pNVar3 + 8) = (BasicBlock)0x1;
  }
  if (*(Node **)(this + 0x90) == param_1) {
    lVar5 = *(long *)(this + 0x98);
    if (local_40 == (Node *)0x0) {
      if (FLAG_trace_turbo_scheduler == '\0') goto LAB_012b6264;
      PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
             *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(lVar5 + 0xa0));
    }
    else {
      if (FLAG_trace_turbo_scheduler == '\0') {
LAB_012b6264:
        bVar1 = false;
        goto joined_r0x012b6234;
      }
      PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
             *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(lVar5 + 0xa0),
             (ulong)*(uint *)(local_40 + 0xa0));
    }
    lVar5 = *(long *)(this + 0x98);
    bVar1 = FLAG_trace_turbo_scheduler != '\0';
joined_r0x012b6234:
    if (local_38 == (Node *)0x0) {
      if (bVar1) {
        PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
               *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(lVar5 + 0xa0));
      }
    }
    else if (bVar1) {
      PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
             *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(lVar5 + 0xa0),
             (ulong)*(uint *)(local_38 + 0xa0));
    }
    Schedule::InsertBranch
              (*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),
               *(BasicBlock **)(this + 0xa0),param_1,(BasicBlock *)local_40,(BasicBlock *)local_38);
    return;
  }
  pNVar3 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pBVar4 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar3);
  while (pBVar4 == (BasicBlock *)0x0) {
    pNVar3 = (Node *)NodeProperties::GetControlInput(pNVar3,0);
    pBVar4 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar3);
  }
  if (local_40 == (Node *)0x0) {
    if (FLAG_trace_turbo_scheduler == '\0') goto LAB_012b61b4;
    PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar4 + 0xa0));
  }
  else {
    if (FLAG_trace_turbo_scheduler == '\0') {
LAB_012b61b4:
      bVar1 = false;
      goto joined_r0x012b61bc;
    }
    PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar4 + 0xa0),
           (ulong)*(uint *)(local_40 + 0xa0));
  }
  bVar1 = FLAG_trace_turbo_scheduler != '\0';
joined_r0x012b61bc:
  if (local_38 == (Node *)0x0) {
    if (bVar1) {
      PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
             *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar4 + 0xa0));
    }
  }
  else if (bVar1) {
    PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar4 + 0xa0),
           (ulong)*(uint *)(local_38 + 0xa0));
  }
  Schedule::AddBranch(*(Schedule **)(this + 0x10),pBVar4,param_1,(BasicBlock *)local_40,
                      (BasicBlock *)local_38);
  return;
}

