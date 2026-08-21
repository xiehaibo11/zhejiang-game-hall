
/* v8::internal::compiler::GraphAssembler::WordShl(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::WordShl(GraphAssembler *this,Node *param_1,Node *param_2)

{
  undefined8 *puVar1;
  MachineOperatorBuilder *this_00;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *this_01;
  BasicBlockUpdater *this_02;
  BasicBlock *pBVar5;
  Node *local_40;
  Node *pNStack_38;
  
  this_00 = (MachineOperatorBuilder *)(*(undefined8 **)(this + 0x18))[2];
  this_01 = (Graph *)**(undefined8 **)(this + 0x18);
  if (this_00[0x10] == (MachineOperatorBuilder)0x4) {
    pOVar2 = (Operator *)MachineOperatorBuilder::Word32Shl(this_00);
  }
  else {
    pOVar2 = (Operator *)MachineOperatorBuilder::Word64Shl(this_00);
  }
  local_40 = param_1;
  pNStack_38 = param_2;
  pNVar3 = (Node *)Graph::NewNode(this_01,pOVar2,2,&local_40,false);
  this_02 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_02 != (BasicBlockUpdater *)0x0) {
    pBVar5 = *(BasicBlock **)(this_02 + 8);
    if (*(int *)(this_02 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_02 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_02 + 0x20)) && ((Node *)*puVar1 == pNVar3)) {
        *(undefined8 **)(this_02 + 0x18) = puVar1 + 1;
        goto LAB_016c478c;
      }
      BasicBlockUpdater::CopyForChange(this_02);
    }
    Schedule::AddNode(*(Schedule **)(this_02 + 0x28),pBVar5,pNVar3);
  }
LAB_016c478c:
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

