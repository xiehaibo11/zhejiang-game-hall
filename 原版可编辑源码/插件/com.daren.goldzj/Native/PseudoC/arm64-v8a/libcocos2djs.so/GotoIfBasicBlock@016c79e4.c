
/* v8::internal::compiler::GraphAssembler::GotoIfBasicBlock(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*, v8::internal::compiler::IrOpcode::Value) */

void __thiscall
v8::internal::compiler::GraphAssembler::GotoIfBasicBlock
          (GraphAssembler *this,BasicBlock *param_1,Node *param_2,int param_4)

{
  Node *pNVar1;
  undefined8 *puVar2;
  char cVar3;
  BasicBlock *pBVar4;
  BasicBlock *pBVar5;
  BasicBlock *pBVar6;
  BasicBlock *pBVar7;
  BasicBlock *pBVar8;
  BasicBlock BVar9;
  long *plVar10;
  long lVar11;
  BasicBlockUpdater *pBVar12;
  
  lVar11 = *(long *)(this + 0x30);
  if (lVar11 == 0) {
    return;
  }
  cVar3 = *(char *)(*(long *)(lVar11 + 8) + 8);
  pBVar4 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(lVar11 + 0x28));
  if (cVar3 == '\0') {
    BVar9 = *(BasicBlock *)(lVar11 + 0x88);
  }
  else {
    BVar9 = (BasicBlock)0x1;
  }
  pBVar4[8] = BVar9;
  lVar11 = *(long *)(this + 0x30);
  cVar3 = *(char *)(*(long *)(lVar11 + 8) + 8);
  pBVar5 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(lVar11 + 0x28));
  if (cVar3 == '\0') {
    BVar9 = *(BasicBlock *)(lVar11 + 0x88);
  }
  else {
    BVar9 = (BasicBlock)0x1;
  }
  pBVar5[8] = BVar9;
  pBVar12 = *(BasicBlockUpdater **)(this + 0x30);
  if (param_4 == 4) {
    if (*(int *)(pBVar12 + 0x98) == 0) {
      BasicBlockUpdater::CopyForChange(pBVar12);
    }
    pBVar7 = *(BasicBlock **)(pBVar12 + 8);
    pBVar6 = pBVar4;
    pBVar8 = pBVar5;
  }
  else {
    if (*(int *)(pBVar12 + 0x98) == 0) {
      BasicBlockUpdater::CopyForChange(pBVar12);
    }
    pBVar7 = *(BasicBlock **)(pBVar12 + 8);
    pBVar6 = pBVar5;
    pBVar8 = pBVar4;
  }
  Schedule::AddBranch(*(Schedule **)(pBVar12 + 0x28),pBVar7,param_2,pBVar6,pBVar8);
  *(undefined8 *)(pBVar12 + 8) = 0;
  pNVar1 = *(Node **)(this + 0x28);
  pBVar12 = *(BasicBlockUpdater **)(this + 0x30);
  if (*(int *)(pBVar12 + 0x98) == 0) {
    puVar2 = *(undefined8 **)(pBVar12 + 0x18);
    if ((puVar2 != *(undefined8 **)(pBVar12 + 0x20)) && ((Node *)*puVar2 == pNVar1)) {
      *(undefined8 **)(pBVar12 + 0x18) = puVar2 + 1;
      goto LAB_016c7afc;
    }
    BasicBlockUpdater::CopyForChange(pBVar12);
  }
  Schedule::AddNode(*(Schedule **)(pBVar12 + 0x28),pBVar4,pNVar1);
LAB_016c7afc:
  pBVar12 = *(BasicBlockUpdater **)(this + 0x30);
  if (*(int *)(pBVar12 + 0x98) == 0) {
    BasicBlockUpdater::CopyForChange(pBVar12);
  }
  pBVar6 = pBVar4;
  if ((param_1[8] != (BasicBlock)0x0) && (pBVar4[8] == (BasicBlock)0x0)) {
    pBVar6 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(pBVar12 + 0x28));
    pBVar6[8] = (BasicBlock)0x1;
    Schedule::AddGoto(*(Schedule **)(pBVar12 + 0x28),pBVar4,pBVar6);
  }
  Schedule::AddGoto(*(Schedule **)(pBVar12 + 0x28),pBVar6,param_1);
  *(undefined8 *)(pBVar12 + 8) = 0;
  *(BasicBlock **)(*(long *)(this + 0x30) + 8) = pBVar5;
  if (pBVar5[8] == (BasicBlock)0x0) {
    if (*(long **)(pBVar5 + 0x80) == *(long **)(pBVar5 + 0x88)) {
      BVar9 = (BasicBlock)0x1;
    }
    else {
      BVar9 = (BasicBlock)0x1;
      plVar10 = *(long **)(pBVar5 + 0x80);
      do {
        lVar11 = *plVar10;
        BVar9 = (BasicBlock)((byte)BVar9 & *(char *)(lVar11 + 8) != '\0');
        if (*(long **)(pBVar5 + 0x88) + -1 == plVar10) break;
        plVar10 = plVar10 + 1;
      } while (*(char *)(lVar11 + 8) != '\0');
    }
    pBVar5[8] = BVar9;
  }
  return;
}

