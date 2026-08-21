
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::NewBasicBlock(bool) */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::NewBasicBlock
          (BasicBlockUpdater *this,bool param_1)

{
  long lVar1;
  BasicBlockUpdater BVar2;
  
  lVar1 = Schedule::NewBasicBlock(*(Schedule **)(this + 0x28));
  if (param_1) {
    BVar2 = (BasicBlockUpdater)0x1;
  }
  else {
    BVar2 = this[0x88];
  }
  *(BasicBlockUpdater *)(lVar1 + 8) = BVar2;
  return;
}

