
/* v8::internal::compiler::RawMachineAssembler::Switch(v8::internal::compiler::Node*,
   v8::internal::compiler::RawMachineLabel*, int const*, v8::internal::compiler::RawMachineLabel**,
   unsigned long) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Switch
          (RawMachineAssembler *this,Node *param_1,RawMachineLabel *param_2,int *param_3,
          RawMachineLabel **param_4,ulong param_5)

{
  ulong uVar1;
  CommonOperatorBuilder *this_00;
  int iVar2;
  BasicBlock **ppBVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  BasicBlock *pBVar7;
  Node *pNVar8;
  BasicBlock **ppBVar9;
  ulong uVar10;
  BasicBlock *pBVar11;
  Zone *this_01;
  Graph *pGVar12;
  RawMachineLabel *pRVar13;
  Schedule *pSVar14;
  Node *local_70;
  Node *local_68;
  
  uVar1 = param_5 + 1;
  this_00 = (CommonOperatorBuilder *)(this + 0x48);
  local_70 = param_1;
  pOVar5 = (Operator *)CommonOperatorBuilder::Switch(this_00,uVar1);
  pNVar6 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar5,1,&local_70,false);
  uVar10 = uVar1 * 8;
  this_01 = (Zone *)**(undefined8 **)(this + 8);
  ppBVar9 = *(BasicBlock ***)(this_01 + 0x10);
  uVar4 = param_5;
  if (uVar10 < (ulong)(*(long *)(this_01 + 0x18) - (long)ppBVar9) ||
      uVar10 - (*(long *)(this_01 + 0x18) - (long)ppBVar9) == 0) {
    *(BasicBlock ***)(this_01 + 0x10) = ppBVar9 + uVar1;
    ppBVar3 = ppBVar9;
  }
  else {
    ppBVar9 = (BasicBlock **)Zone::NewExpand(this_01,uVar10);
    ppBVar3 = ppBVar9;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    iVar2 = *param_3;
    pBVar7 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    pGVar12 = *(Graph **)(this + 8);
    pOVar5 = (Operator *)CommonOperatorBuilder::IfValue(this_00,iVar2,0,0);
    local_68 = pNVar6;
    pNVar8 = (Node *)Graph::NewNode(pGVar12,pOVar5,1,&local_68,false);
    Schedule::AddNode(*(Schedule **)(this + 0x10),pBVar7,pNVar8);
    pRVar13 = *param_4;
    pSVar14 = *(Schedule **)(this + 0x10);
    pBVar11 = *(BasicBlock **)pRVar13;
    pRVar13[8] = (RawMachineLabel)0x1;
    if (pBVar11 == (BasicBlock *)0x0) {
      pBVar11 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
      *(BasicBlock **)pRVar13 = pBVar11;
    }
    Schedule::AddGoto(pSVar14,pBVar7,pBVar11);
    *ppBVar9 = pBVar7;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    ppBVar9 = ppBVar9 + 1;
  }
  pBVar7 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
  pGVar12 = *(Graph **)(this + 8);
  pOVar5 = (Operator *)CommonOperatorBuilder::IfDefault(this_00,0);
  local_68 = pNVar6;
  pNVar8 = (Node *)Graph::NewNode(pGVar12,pOVar5,1,&local_68,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),pBVar7,pNVar8);
  pSVar14 = *(Schedule **)(this + 0x10);
  pBVar11 = *(BasicBlock **)param_2;
  param_2[8] = (RawMachineLabel)0x1;
  if (pBVar11 == (BasicBlock *)0x0) {
    pBVar11 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(BasicBlock **)param_2 = pBVar11;
  }
  Schedule::AddGoto(pSVar14,pBVar7,pBVar11);
  ppBVar3[param_5] = pBVar7;
  Schedule::AddSwitch(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar6,ppBVar3,uVar1
                     );
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

