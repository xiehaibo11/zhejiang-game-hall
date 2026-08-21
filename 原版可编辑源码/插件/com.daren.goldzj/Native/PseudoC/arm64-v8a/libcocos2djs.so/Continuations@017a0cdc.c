
/* v8::internal::compiler::RawMachineAssembler::Continuations(v8::internal::compiler::Node*,
   v8::internal::compiler::RawMachineLabel*, v8::internal::compiler::RawMachineLabel*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Continuations
          (RawMachineAssembler *this,Node *param_1,RawMachineLabel *param_2,RawMachineLabel *param_3
          )

{
  BasicBlock *pBVar1;
  Schedule *this_00;
  BasicBlock *pBVar2;
  BasicBlock *pBVar3;
  
  this_00 = *(Schedule **)(this + 0x10);
  pBVar3 = *(BasicBlock **)param_2;
  pBVar2 = *(BasicBlock **)(this + 0x98);
  param_2[8] = (RawMachineLabel)0x1;
  if (pBVar3 == (BasicBlock *)0x0) {
    pBVar3 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(BasicBlock **)param_2 = pBVar3;
  }
  pBVar1 = *(BasicBlock **)param_3;
  param_3[8] = (RawMachineLabel)0x1;
  if (pBVar1 == (BasicBlock *)0x0) {
    pBVar1 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(BasicBlock **)param_3 = pBVar1;
  }
  Schedule::AddCall(this_00,pBVar2,param_1,pBVar3,pBVar1);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

