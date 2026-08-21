
/* v8::internal::compiler::InstructionBlock::PredecessorIndexOf(v8::internal::compiler::RpoNumber)
   const */

long __thiscall
v8::internal::compiler::InstructionBlock::PredecessorIndexOf(InstructionBlock *this,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 == *(long *)(this + 0x28)) {
    return 0;
  }
  lVar2 = 0;
  lVar3 = *(long *)(this + 0x28) - lVar1;
  do {
    if (*(int *)(lVar1 + lVar2 * 4) == param_2) {
      return lVar2;
    }
    lVar3 = lVar3 + -4;
    lVar2 = lVar2 + 1;
  } while (lVar3 != 0);
  return lVar2;
}

