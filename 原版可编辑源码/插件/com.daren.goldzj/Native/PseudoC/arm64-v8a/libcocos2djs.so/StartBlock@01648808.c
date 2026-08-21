
/* v8::internal::compiler::InstructionSequence::StartBlock(v8::internal::compiler::RpoNumber) */

void __thiscall
v8::internal::compiler::InstructionSequence::StartBlock(InstructionSequence *this,int param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(this + 0x10);
  if ((ulong)(long)param_2 < (ulong)((*(long **)(this + 0x10))[1] - lVar1 >> 3)) {
    lVar1 = *(long *)(lVar1 + (long)param_2 * 8);
    *(long *)(this + 0x170) = lVar1;
    *(int *)(lVar1 + 0x70) = (int)*(undefined8 *)(this + 0xb8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

