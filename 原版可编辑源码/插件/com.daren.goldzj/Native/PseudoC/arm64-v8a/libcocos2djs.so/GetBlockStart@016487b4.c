
/* v8::internal::compiler::InstructionSequence::GetBlockStart(v8::internal::compiler::RpoNumber)
   const */

undefined8 __thiscall
v8::internal::compiler::InstructionSequence::GetBlockStart(InstructionSequence *this,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = **(long **)(this + 0x10);
  if ((ulong)(long)param_2 < (ulong)((*(long **)(this + 0x10))[1] - lVar2 >> 3)) {
    uVar1 = *(long *)(this + 0xb0) + (long)*(int *)(*(long *)(lVar2 + (long)param_2 * 8) + 0x70);
    return *(undefined8 *)
            (*(long *)(*(long *)(this + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
            (uVar1 & 0x1ff) * 8);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

