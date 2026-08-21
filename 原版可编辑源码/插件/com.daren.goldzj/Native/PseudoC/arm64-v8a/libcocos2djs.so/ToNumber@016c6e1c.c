
/* v8::internal::compiler::GraphAssembler::ToNumber(v8::internal::TNode<v8::internal::Object>) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::ToNumber(GraphAssembler *this,undefined8 param_2)

{
  undefined8 *puVar1;
  CallDescriptor *pCVar2;
  Node *pNVar3;
  JSGraph *this_00;
  long lVar4;
  Graph *this_01;
  BasicBlockUpdater *this_02;
  Operator *pOVar5;
  BasicBlock *pBVar6;
  undefined **local_70;
  int *piStack_68;
  Node *local_60;
  undefined8 uStack_58;
  Node *local_50;
  undefined8 uStack_48;
  
  this_00 = *(JSGraph **)(this + 0x18);
  pOVar5 = *(Operator **)(this + 8);
  this_01 = *(Graph **)this_00;
  if (pOVar5 == (Operator *)0x0) {
    Builtins::CallableFor((Builtins *)&local_60,*(undefined8 *)(this_00 + 0x168),0x65);
    local_70 = &PTR__CallInterfaceDescriptor_01ca0fc8;
    piStack_68 = (int *)local_50;
    pCVar2 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 0x18),&local_70,
                        *(int *)((long)local_50 + 8) - *(int *)local_50,0,0x70,0);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Call
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x18) + 8),pCVar2);
    this_00 = *(JSGraph **)(this + 0x18);
    *(Operator **)(this + 8) = pOVar5;
  }
  pNVar3 = (Node *)JSGraph::ToNumberBuiltinConstant(this_00);
  if (*(BasicBlockUpdater **)(this + 0x30) != (BasicBlockUpdater *)0x0) {
    pNVar3 = (Node *)BasicBlockUpdater::AddClonedNode(*(BasicBlockUpdater **)(this + 0x30),pNVar3);
  }
  lVar4 = *(long *)pNVar3;
  if (*(char *)(lVar4 + 0x24) != '\0') {
    *(Node **)(this + 0x20) = pNVar3;
    lVar4 = *(long *)pNVar3;
  }
  if (0 < *(int *)(lVar4 + 0x28)) {
    *(Node **)(this + 0x28) = pNVar3;
  }
  local_50 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
  if (*(BasicBlockUpdater **)(this + 0x30) != (BasicBlockUpdater *)0x0) {
    local_50 = (Node *)BasicBlockUpdater::AddClonedNode
                                 (*(BasicBlockUpdater **)(this + 0x30),local_50);
  }
  lVar4 = *(long *)local_50;
  if (*(char *)(lVar4 + 0x24) != '\0') {
    *(Node **)(this + 0x20) = local_50;
    lVar4 = *(long *)local_50;
  }
  if (0 < *(int *)(lVar4 + 0x28)) {
    *(Node **)(this + 0x28) = local_50;
  }
  uStack_48 = *(undefined8 *)(this + 0x20);
  local_60 = pNVar3;
  uStack_58 = param_2;
  pNVar3 = (Node *)Graph::NewNode(this_01,pOVar5,4,&local_60,false);
  this_02 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_02 != (BasicBlockUpdater *)0x0) {
    pBVar6 = *(BasicBlock **)(this_02 + 8);
    if (*(int *)(this_02 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_02 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_02 + 0x20)) && ((Node *)*puVar1 == pNVar3)) {
        *(undefined8 **)(this_02 + 0x18) = puVar1 + 1;
        goto LAB_016c6fb4;
      }
      BasicBlockUpdater::CopyForChange(this_02);
    }
    Schedule::AddNode(*(Schedule **)(this_02 + 0x28),pBVar6,pNVar3);
  }
LAB_016c6fb4:
  lVar4 = *(long *)pNVar3;
  if (*(short *)(lVar4 + 0x10) != 0x12) {
    if (*(char *)(lVar4 + 0x24) != '\0') {
      *(Node **)(this + 0x20) = pNVar3;
      lVar4 = *(long *)pNVar3;
    }
    if (0 < *(int *)(lVar4 + 0x28)) {
      *(Node **)(this + 0x28) = pNVar3;
    }
  }
  return pNVar3;
}

