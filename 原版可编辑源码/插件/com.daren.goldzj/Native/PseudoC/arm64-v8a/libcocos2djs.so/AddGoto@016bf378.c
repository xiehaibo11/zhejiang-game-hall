
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddGoto(v8::internal::compiler::BasicBlock*)
    */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddGoto
          (BasicBlockUpdater *this,BasicBlock *param_1)

{
  BasicBlock BVar1;
  BasicBlock *pBVar2;
  BasicBlock *pBVar3;
  
  pBVar3 = *(BasicBlock **)(this + 8);
  if (*(int *)(this + 0x98) == 0) {
    CopyForChange(this);
    BVar1 = param_1[8];
  }
  else {
    BVar1 = param_1[8];
  }
  pBVar2 = pBVar3;
  if ((BVar1 != (BasicBlock)0x0) && (pBVar3[8] == (BasicBlock)0x0)) {
    pBVar2 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this + 0x28));
    pBVar2[8] = (BasicBlock)0x1;
    Schedule::AddGoto(*(Schedule **)(this + 0x28),pBVar3,pBVar2);
  }
  Schedule::AddGoto(*(Schedule **)(this + 0x28),pBVar2,param_1);
  *(undefined8 *)(this + 8) = 0;
  return;
}

