
/* v8::internal::compiler::GraphAssembler::UniqueIntPtrConstant(long) */

Node * __thiscall
v8::internal::compiler::GraphAssembler::UniqueIntPtrConstant(GraphAssembler *this,long param_1)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 *puVar3;
  long lVar4;
  Graph *this_00;
  BasicBlockUpdater *this_01;
  BasicBlock *pBVar5;
  Node *local_38;
  
  puVar3 = *(undefined8 **)(this + 0x18);
  this_00 = (Graph *)*puVar3;
  if (*(char *)(puVar3[2] + 0x10) == '\x05') {
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)puVar3[1],param_1);
  }
  else {
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)puVar3[1],(int)param_1);
  }
  local_38 = (Node *)0x0;
  pNVar2 = (Node *)Graph::NewNode(this_00,pOVar1,0,&local_38,false);
  this_01 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_01 != (BasicBlockUpdater *)0x0) {
    pBVar5 = *(BasicBlock **)(this_01 + 8);
    if (*(int *)(this_01 + 0x98) == 0) {
      puVar3 = *(undefined8 **)(this_01 + 0x18);
      if ((puVar3 != *(undefined8 **)(this_01 + 0x20)) && ((Node *)*puVar3 == pNVar2)) {
        *(undefined8 **)(this_01 + 0x18) = puVar3 + 1;
        goto LAB_016bf9bc;
      }
      BasicBlockUpdater::CopyForChange(this_01);
    }
    Schedule::AddNode(*(Schedule **)(this_01 + 0x28),pBVar5,pNVar2);
  }
LAB_016bf9bc:
  lVar4 = *(long *)pNVar2;
  if (*(short *)(lVar4 + 0x10) != 0x12) {
    if (*(char *)(lVar4 + 0x24) != '\0') {
      *(Node **)(this + 0x20) = pNVar2;
      lVar4 = *(long *)pNVar2;
    }
    if (0 < *(int *)(lVar4 + 0x28)) {
      *(Node **)(this + 0x28) = pNVar2;
    }
  }
  return pNVar2;
}

