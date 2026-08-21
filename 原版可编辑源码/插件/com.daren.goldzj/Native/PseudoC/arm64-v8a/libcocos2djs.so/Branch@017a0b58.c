
/* v8::internal::compiler::RawMachineAssembler::Branch(v8::internal::compiler::Node*,
   v8::internal::compiler::RawMachineLabel*, v8::internal::compiler::RawMachineLabel*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Branch
          (RawMachineAssembler *this,Node *param_1,RawMachineLabel *param_2,RawMachineLabel *param_3
          )

{
  CommonOperatorBuilder *this_00;
  Operator *pOVar1;
  Node *pNVar2;
  BasicBlock *pBVar3;
  BasicBlock *this_01;
  BasicBlock *pBVar4;
  Schedule *pSVar5;
  Node *local_60;
  Node *local_58;
  
  this_00 = (CommonOperatorBuilder *)(this + 0x48);
  local_58 = param_1;
  pOVar1 = (Operator *)CommonOperatorBuilder::Branch(this_00,0,2);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,1,&local_58,false);
  local_60 = pNVar2;
  pBVar3 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
  this_01 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
  Schedule::AddBranch(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar2,pBVar3,
                      this_01);
  pOVar1 = (Operator *)CommonOperatorBuilder::IfTrue(this_00);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,1,&local_60,false);
  BasicBlock::AddNode(pBVar3,pNVar2);
  pBVar4 = *(BasicBlock **)param_2;
  pSVar5 = *(Schedule **)(this + 0x10);
  param_2[8] = (RawMachineLabel)0x1;
  if (pBVar4 == (BasicBlock *)0x0) {
    pBVar4 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(BasicBlock **)param_2 = pBVar4;
  }
  Schedule::AddGoto(pSVar5,pBVar3,pBVar4);
  pOVar1 = (Operator *)CommonOperatorBuilder::IfFalse(this_00);
  pNVar2 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar1,1,&local_60,false);
  BasicBlock::AddNode(this_01,pNVar2);
  pBVar3 = *(BasicBlock **)param_3;
  pSVar5 = *(Schedule **)(this + 0x10);
  param_3[8] = (RawMachineLabel)0x1;
  if (pBVar3 == (BasicBlock *)0x0) {
    pBVar3 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(BasicBlock **)param_3 = pBVar3;
  }
  Schedule::AddGoto(pSVar5,this_01,pBVar3);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

