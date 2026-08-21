
/* v8::internal::compiler::GraphAssembler::StoreField(v8::internal::compiler::FieldAccess const&,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::StoreField
          (GraphAssembler *this,FieldAccess *param_1,Node *param_2,Node *param_3)

{
  undefined8 *puVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  BasicBlockUpdater *this_00;
  Graph *this_01;
  BasicBlock *pBVar5;
  Node *local_50;
  Node *pNStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  this_01 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f],param_1);
  local_40 = *(undefined8 *)(this + 0x20);
  uStack_38 = *(undefined8 *)(this + 0x28);
  local_50 = param_2;
  pNStack_48 = param_3;
  pNVar3 = (Node *)Graph::NewNode(this_01,pOVar2,4,&local_50,false);
  this_00 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_00 != (BasicBlockUpdater *)0x0) {
    pBVar5 = *(BasicBlock **)(this_00 + 8);
    if (*(int *)(this_00 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_00 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_00 + 0x20)) && ((Node *)*puVar1 == pNVar3)) {
        *(undefined8 **)(this_00 + 0x18) = puVar1 + 1;
        goto LAB_016c55b4;
      }
      BasicBlockUpdater::CopyForChange(this_00);
    }
    Schedule::AddNode(*(Schedule **)(this_00 + 0x28),pBVar5,pNVar3);
  }
LAB_016c55b4:
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

