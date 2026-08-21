
/* v8::internal::compiler::GraphAssembler::IsHeapNumberMap(v8::internal::TNode<v8::internal::Object>)
    */

void __thiscall
v8::internal::compiler::GraphAssembler::IsHeapNumberMap(GraphAssembler *this,undefined8 param_2)

{
  Node *pNVar1;
  long lVar2;
  
  pNVar1 = (Node *)JSGraph::HeapNumberMapConstant(*(JSGraph **)(this + 0x18));
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
  ReferenceEqual(this,param_2);
  return;
}

