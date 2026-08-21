
/* v8::internal::compiler::GraphAssembler::HeapConstant(v8::internal::Handle<v8::internal::HeapObject>)
    */

Node * v8::internal::compiler::GraphAssembler::HeapConstant(long param_1)

{
  Node *pNVar1;
  long lVar2;
  
  pNVar1 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(param_1 + 0x18));
  if (*(BasicBlockUpdater **)(param_1 + 0x30) != (BasicBlockUpdater *)0x0) {
    pNVar1 = (Node *)BasicBlockUpdater::AddClonedNode
                               (*(BasicBlockUpdater **)(param_1 + 0x30),pNVar1);
  }
  lVar2 = *(long *)pNVar1;
  if (*(char *)(lVar2 + 0x24) != '\0') {
    *(Node **)(param_1 + 0x20) = pNVar1;
    lVar2 = *(long *)pNVar1;
  }
  if (0 < *(int *)(lVar2 + 0x28)) {
    *(Node **)(param_1 + 0x28) = pNVar1;
  }
  return pNVar1;
}

