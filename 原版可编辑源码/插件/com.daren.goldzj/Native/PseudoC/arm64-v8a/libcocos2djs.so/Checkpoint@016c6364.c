
/* v8::internal::compiler::GraphAssembler::Checkpoint(v8::internal::compiler::FrameState) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::Checkpoint(GraphAssembler *this,Node *param_2)

{
  Graph *this_00;
  undefined8 *puVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  BasicBlockUpdater *this_01;
  BasicBlock *pBVar5;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Checkpoint
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
  uStack_40 = *(undefined8 *)(this + 0x20);
  local_38 = *(undefined8 *)(this + 0x28);
  local_48 = param_2;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,3,&local_48,false);
  this_01 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_01 != (BasicBlockUpdater *)0x0) {
    pBVar5 = *(BasicBlock **)(this_01 + 8);
    if (*(int *)(this_01 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_01 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_01 + 0x20)) && ((Node *)*puVar1 == pNVar3)) {
        *(undefined8 **)(this_01 + 0x18) = puVar1 + 1;
        goto LAB_016c63f8;
      }
      BasicBlockUpdater::CopyForChange(this_01);
    }
    Schedule::AddNode(*(Schedule **)(this_01 + 0x28),pBVar5,pNVar3);
  }
LAB_016c63f8:
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

