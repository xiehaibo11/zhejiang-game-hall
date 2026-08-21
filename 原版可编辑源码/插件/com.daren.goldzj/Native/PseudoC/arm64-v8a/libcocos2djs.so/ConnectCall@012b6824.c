
/* v8::internal::compiler::CFGBuilder::ConnectCall(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CFGBuilder::ConnectCall(CFGBuilder *this,Node *param_1)

{
  bool bVar1;
  Node *pNVar2;
  BasicBlock *pBVar3;
  Node *local_40;
  Node *local_38;
  
  NodeProperties::CollectControlProjections(param_1,&local_40,2);
  local_40 = (Node *)Schedule::block(*(Schedule **)(this + 0x10),local_40);
  local_38 = (Node *)Schedule::block(*(Schedule **)(this + 0x10),local_38);
  *(BasicBlock *)(local_38 + 8) = (BasicBlock)0x1;
  pNVar2 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pBVar3 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar2);
  while (pBVar3 == (BasicBlock *)0x0) {
    pNVar2 = (Node *)NodeProperties::GetControlInput(pNVar2,0);
    pBVar3 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar2);
  }
  if (local_40 == (Node *)0x0) {
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
             *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar3 + 0xa0));
      goto LAB_012b692c;
    }
  }
  else if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar3 + 0xa0),
           (ulong)*(uint *)(local_40 + 0xa0));
LAB_012b692c:
    bVar1 = FLAG_trace_turbo_scheduler != '\0';
    goto joined_r0x012b6974;
  }
  bVar1 = false;
joined_r0x012b6974:
  if (local_38 == (Node *)0x0) {
    if (bVar1) {
      PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
             *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar3 + 0xa0));
    }
  }
  else if (bVar1) {
    PrintF("Connect #%d:%s, id:%d -> id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar3 + 0xa0),
           (ulong)*(uint *)(local_38 + 0xa0));
  }
  Schedule::AddCall(*(Schedule **)(this + 0x10),pBVar3,param_1,(BasicBlock *)local_40,
                    (BasicBlock *)local_38);
  return;
}

