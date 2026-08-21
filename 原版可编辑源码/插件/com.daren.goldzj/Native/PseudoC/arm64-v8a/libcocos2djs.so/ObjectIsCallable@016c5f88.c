
/* v8::internal::compiler::GraphAssembler::ObjectIsCallable(v8::internal::TNode<v8::internal::Object>)
    */

Node * __thiscall
v8::internal::compiler::GraphAssembler::ObjectIsCallable(GraphAssembler *this,Node *param_2)

{
  undefined8 *puVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  Graph *this_00;
  BasicBlockUpdater *this_01;
  BasicBlock *pBVar5;
  Node *local_38;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsCallable
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
  local_38 = param_2;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,1,&local_38,false);
  this_01 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_01 != (BasicBlockUpdater *)0x0) {
    pBVar5 = *(BasicBlock **)(this_01 + 8);
    if (*(int *)(this_01 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_01 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_01 + 0x20)) && ((Node *)*puVar1 == pNVar3)) {
        *(undefined8 **)(this_01 + 0x18) = puVar1 + 1;
        goto LAB_016c6018;
      }
      BasicBlockUpdater::CopyForChange(this_01);
    }
    Schedule::AddNode(*(Schedule **)(this_01 + 0x28),pBVar5,pNVar3);
  }
LAB_016c6018:
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

