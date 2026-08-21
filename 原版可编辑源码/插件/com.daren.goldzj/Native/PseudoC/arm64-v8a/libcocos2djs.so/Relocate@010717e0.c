
/* v8::internal::Code::Relocate(long) */

void __thiscall v8::internal::Code::Relocate(Code *this,long param_1)

{
  Instruction *this_00;
  long lVar1;
  RelocIterator aRStack_70 [16];
  Instruction *local_60;
  char local_58;
  char local_38;
  
  RelocIterator::RelocIterator(aRStack_70,*(undefined8 *)this,0x141);
  this_00 = local_60;
  while (local_38 == '\0') {
    local_60 = this_00;
    if (local_58 == '\b') {
      *(long *)this_00 = *(long *)this_00 + param_1;
    }
    else if ((*(uint *)this_00 | 0x80000000) >> 0x1a == 0x25) {
      lVar1 = Instruction::ImmPCOffsetTarget(this_00);
      Instruction::SetBranchImmTarget(this_00,(Instruction *)(lVar1 - param_1));
    }
    RelocIterator::next(aRStack_70);
    this_00 = local_60;
  }
  FlushInstructionCache((void *)(*(long *)this + 0x3f),(long)*(int *)(*(long *)this + 0x13));
  return;
}

