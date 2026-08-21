
/* v8::internal::compiler::GraphAssembler::GotoBasicBlock(v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::GraphAssembler::GotoBasicBlock(GraphAssembler *this,BasicBlock *param_1)

{
  BasicBlock *pBVar1;
  BasicBlockUpdater *this_00;
  BasicBlock *pBVar2;
  
  this_00 = *(BasicBlockUpdater **)(this + 0x30);
  if (this_00 != (BasicBlockUpdater *)0x0) {
    pBVar2 = *(BasicBlock **)(this_00 + 8);
    if (*(int *)(this_00 + 0x98) == 0) {
      BasicBlockUpdater::CopyForChange(this_00);
    }
    pBVar1 = pBVar2;
    if ((param_1[8] != (BasicBlock)0x0) && (pBVar2[8] == (BasicBlock)0x0)) {
      pBVar1 = (BasicBlock *)Schedule::NewBasicBlock(*(Schedule **)(this_00 + 0x28));
      pBVar1[8] = (BasicBlock)0x1;
      Schedule::AddGoto(*(Schedule **)(this_00 + 0x28),pBVar2,pBVar1);
    }
    Schedule::AddGoto(*(Schedule **)(this_00 + 0x28),pBVar1,param_1);
    *(undefined8 *)(this_00 + 8) = 0;
  }
  return;
}

