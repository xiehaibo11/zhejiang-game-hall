
/* v8::internal::compiler::GraphAssembler::RecordBranchInBlockUpdater(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::BasicBlock*, v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::GraphAssembler::RecordBranchInBlockUpdater
          (GraphAssembler *this,Node *param_1,Node *param_2,Node *param_3,BasicBlock *param_4,
          BasicBlock *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  BasicBlock *pBVar3;
  BasicBlock *pBVar4;
  BasicBlock *pBVar5;
  BasicBlock BVar6;
  long lVar7;
  BasicBlockUpdater *pBVar8;
  
  lVar7 = *(long *)(this + 0x30);
  cVar2 = *(char *)(*(long *)(lVar7 + 8) + 8);
  pBVar3 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(lVar7 + 0x28));
  if (cVar2 == '\0') {
    BVar6 = *(BasicBlock *)(lVar7 + 0x88);
  }
  else {
    BVar6 = (BasicBlock)0x1;
  }
  pBVar3[8] = BVar6;
  lVar7 = *(long *)(this + 0x30);
  cVar2 = *(char *)(*(long *)(lVar7 + 8) + 8);
  pBVar4 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(lVar7 + 0x28));
  if (cVar2 == '\0') {
    BVar6 = *(BasicBlock *)(lVar7 + 0x88);
  }
  else {
    BVar6 = (BasicBlock)0x1;
  }
  pBVar4[8] = BVar6;
  pBVar8 = *(BasicBlockUpdater **)(this + 0x30);
  if (*(int *)(pBVar8 + 0x98) == 0) {
    BasicBlockUpdater::CopyForChange(pBVar8);
  }
  Schedule::AddBranch(*(Schedule **)(pBVar8 + 0x28),*(BasicBlock **)(pBVar8 + 8),param_1,pBVar3,
                      pBVar4);
  *(undefined8 *)(pBVar8 + 8) = 0;
  pBVar8 = *(BasicBlockUpdater **)(this + 0x30);
  if (*(int *)(pBVar8 + 0x98) == 0) {
    puVar1 = *(undefined8 **)(pBVar8 + 0x18);
    if ((puVar1 == *(undefined8 **)(pBVar8 + 0x20)) || ((Node *)*puVar1 != param_2)) {
      BasicBlockUpdater::CopyForChange(pBVar8);
      goto LAB_016c7768;
    }
    *(undefined8 **)(pBVar8 + 0x18) = puVar1 + 1;
  }
  else {
LAB_016c7768:
    Schedule::AddNode(*(Schedule **)(pBVar8 + 0x28),pBVar3,param_2);
  }
  pBVar8 = *(BasicBlockUpdater **)(this + 0x30);
  if (*(int *)(pBVar8 + 0x98) == 0) {
    BasicBlockUpdater::CopyForChange(pBVar8);
  }
  pBVar5 = pBVar3;
  if ((param_4[8] != (BasicBlock)0x0) && (pBVar3[8] == (BasicBlock)0x0)) {
    pBVar5 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(pBVar8 + 0x28));
    pBVar5[8] = (BasicBlock)0x1;
    Schedule::AddGoto(*(Schedule **)(pBVar8 + 0x28),pBVar3,pBVar5);
  }
  Schedule::AddGoto(*(Schedule **)(pBVar8 + 0x28),pBVar5,param_4);
  *(undefined8 *)(pBVar8 + 8) = 0;
  pBVar8 = *(BasicBlockUpdater **)(this + 0x30);
  if (*(int *)(pBVar8 + 0x98) == 0) {
    puVar1 = *(undefined8 **)(pBVar8 + 0x18);
    if ((puVar1 != *(undefined8 **)(pBVar8 + 0x20)) && ((Node *)*puVar1 == param_3)) {
      *(undefined8 **)(pBVar8 + 0x18) = puVar1 + 1;
      goto LAB_016c7814;
    }
    BasicBlockUpdater::CopyForChange(pBVar8);
  }
  Schedule::AddNode(*(Schedule **)(pBVar8 + 0x28),pBVar4,param_3);
LAB_016c7814:
  pBVar8 = *(BasicBlockUpdater **)(this + 0x30);
  if (*(int *)(pBVar8 + 0x98) == 0) {
    BasicBlockUpdater::CopyForChange(pBVar8);
  }
  pBVar3 = pBVar4;
  if ((param_5[8] != (BasicBlock)0x0) && (pBVar4[8] == (BasicBlock)0x0)) {
    pBVar3 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(pBVar8 + 0x28));
    pBVar3[8] = (BasicBlock)0x1;
    Schedule::AddGoto(*(Schedule **)(pBVar8 + 0x28),pBVar4,pBVar3);
  }
  Schedule::AddGoto(*(Schedule **)(pBVar8 + 0x28),pBVar3,param_5);
  *(undefined8 *)(pBVar8 + 8) = 0;
  return;
}

