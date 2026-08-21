
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::SplitBasicBlock() */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::SplitBasicBlock(BasicBlockUpdater *this)

{
  char cVar1;
  long lVar2;
  BasicBlockUpdater BVar3;
  
  cVar1 = *(char *)(*(long *)(this + 8) + 8);
  lVar2 = Schedule::NewBasicBlock(*(Schedule **)(this + 0x28));
  if (cVar1 == '\0') {
    BVar3 = this[0x88];
  }
  else {
    BVar3 = (BasicBlockUpdater)0x1;
  }
  *(BasicBlockUpdater *)(lVar2 + 8) = BVar3;
  return;
}

