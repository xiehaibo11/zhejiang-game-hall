
/* v8::internal::compiler::GraphAssembler::Store(v8::internal::compiler::StoreRepresentation,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::Store
          (GraphAssembler *this,undefined2 param_2,Node *param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  BasicBlockUpdater *this_00;
  BasicBlock *pBVar5;
  Graph *this_01;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  this_01 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Store
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x18))[2],param_2);
  uStack_50 = *(undefined8 *)(this + 0x20);
  local_48 = *(undefined8 *)(this + 0x28);
  local_68 = param_3;
  uStack_60 = param_4;
  local_58 = param_5;
  pNVar3 = (Node *)Graph::NewNode(this_01,pOVar2,5,&local_68,false);
  this_00 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_00 != (BasicBlockUpdater *)0x0) {
    pBVar5 = *(BasicBlock **)(this_00 + 8);
    if (*(int *)(this_00 + 0x98) == 0) {
      puVar1 = *(undefined8 **)(this_00 + 0x18);
      if ((puVar1 != *(undefined8 **)(this_00 + 0x20)) && ((Node *)*puVar1 == pNVar3)) {
        *(undefined8 **)(this_00 + 0x18) = puVar1 + 1;
        goto LAB_016c6880;
      }
      BasicBlockUpdater::CopyForChange(this_00);
    }
    Schedule::AddNode(*(Schedule **)(this_00 + 0x28),pBVar5,pNVar3);
  }
LAB_016c6880:
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

