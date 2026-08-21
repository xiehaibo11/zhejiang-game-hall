
/* v8::internal::compiler::CFGBuilder::ConnectDeoptimize(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CFGBuilder::ConnectDeoptimize(CFGBuilder *this,Node *param_1)

{
  Node *pNVar1;
  BasicBlock *pBVar2;
  
  pNVar1 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pBVar2 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar1);
  while (pBVar2 == (BasicBlock *)0x0) {
    pNVar1 = (Node *)NodeProperties::GetControlInput(pNVar1,0);
    pBVar2 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar1);
  }
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("Connect #%d:%s, id:%d -> end\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar2 + 0xa0));
  }
  Schedule::AddDeoptimize(*(Schedule **)(this + 0x10),pBVar2,param_1);
  return;
}

