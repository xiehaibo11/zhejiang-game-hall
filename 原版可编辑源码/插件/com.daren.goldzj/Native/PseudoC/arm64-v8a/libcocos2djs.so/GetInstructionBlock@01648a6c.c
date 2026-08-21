
/* v8::internal::compiler::InstructionSequence::GetInstructionBlock(int) const */

undefined8 __thiscall
v8::internal::compiler::InstructionSequence::GetInstructionBlock
          (InstructionSequence *this,int param_1)

{
  return *(undefined8 *)
          (*(long *)(*(long *)(*(long *)(this + 0x88) +
                              ((ulong)(*(long *)(this + 0xb0) + (long)param_1) >> 6 &
                              0x3fffffffffffff8)) +
                    (*(long *)(this + 0xb0) + (long)param_1 & 0x1ffU) * 8) + 0x20);
}

