
/* v8::internal::compiler::GraphAssembler::CEntryStubConstant(int) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::CEntryStubConstant(GraphAssembler *this,int param_1)

{
  Node *pNVar1;
  long lVar2;
  
  pNVar1 = (Node *)JSGraph::CEntryStubConstant(*(JSGraph **)(this + 0x18),param_1,0,0,0);
  if (*(BasicBlockUpdater **)(this + 0x30) != (BasicBlockUpdater *)0x0) {
    pNVar1 = (Node *)BasicBlockUpdater::AddClonedNode(*(BasicBlockUpdater **)(this + 0x30),pNVar1);
  }
  lVar2 = *(long *)pNVar1;
  if (*(char *)(lVar2 + 0x24) != '\0') {
    *(Node **)(this + 0x20) = pNVar1;
    lVar2 = *(long *)pNVar1;
  }
  if (0 < *(int *)(lVar2 + 0x28)) {
    *(Node **)(this + 0x28) = pNVar1;
  }
  return pNVar1;
}

