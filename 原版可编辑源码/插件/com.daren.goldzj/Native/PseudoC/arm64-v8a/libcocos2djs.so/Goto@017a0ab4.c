
/* v8::internal::compiler::RawMachineAssembler::Goto(v8::internal::compiler::RawMachineLabel*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Goto
          (RawMachineAssembler *this,RawMachineLabel *param_1)

{
  BasicBlock *pBVar1;
  Schedule *this_00;
  BasicBlock *pBVar2;
  
  this_00 = *(Schedule **)(this + 0x10);
  pBVar1 = *(BasicBlock **)param_1;
  pBVar2 = *(BasicBlock **)(this + 0x98);
  param_1[8] = (RawMachineLabel)0x1;
  if (pBVar1 == (BasicBlock *)0x0) {
    pBVar1 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(BasicBlock **)param_1 = pBVar1;
  }
  Schedule::AddGoto(this_00,pBVar2,pBVar1);
  *(undefined8 *)(this + 0x98) = 0;
  return;
}

