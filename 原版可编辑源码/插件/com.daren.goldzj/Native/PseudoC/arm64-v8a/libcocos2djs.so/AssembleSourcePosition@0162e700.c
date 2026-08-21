
/* v8::internal::compiler::CodeGenerator::AssembleSourcePosition(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleSourcePosition
          (CodeGenerator *this,Instruction *param_1)

{
  ulong uVar1;
  undefined8 local_28;
  
  local_28 = 0;
  if ((((*(uint *)param_1 & 0x1ff) != 0x11) ||
      (uVar1 = Instruction::AreMovesRedundant(param_1), (uVar1 & 1) == 0)) &&
     (uVar1 = InstructionSequence::GetSourcePosition
                        (*(InstructionSequence **)(this + 0x28),param_1,(SourcePosition *)&local_28)
     , (uVar1 & 1) != 0)) {
    AssembleSourcePosition(this,local_28);
  }
  return;
}

