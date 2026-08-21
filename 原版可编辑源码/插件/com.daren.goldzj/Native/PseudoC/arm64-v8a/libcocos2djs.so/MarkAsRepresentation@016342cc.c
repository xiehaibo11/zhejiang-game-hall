
/* v8::internal::compiler::InstructionSelector::MarkAsRepresentation(v8::internal::MachineRepresentation,
   v8::internal::compiler::InstructionOperand const&) */

void __thiscall
v8::internal::compiler::InstructionSelector::MarkAsRepresentation
          (InstructionSelector *this,undefined8 param_2,ulong *param_3)

{
  InstructionSequence::MarkAsRepresentation
            (*(InstructionSequence **)(this + 0x10),param_2,*param_3 >> 3);
  return;
}

