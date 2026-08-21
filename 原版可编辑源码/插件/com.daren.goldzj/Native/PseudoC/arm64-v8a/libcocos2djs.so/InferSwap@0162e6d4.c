
/* v8::internal::compiler::CodeGenerator::MoveType::InferSwap(v8::internal::compiler::InstructionOperand*,
   v8::internal::compiler::InstructionOperand*) */

bool v8::internal::compiler::CodeGenerator::MoveType::InferSwap
               (InstructionOperand *param_1,InstructionOperand *param_2)

{
  if ((*(ulong *)param_1 & 0x1c) == 4) {
    return (*(ulong *)param_2 & 0x1c) != 4;
  }
  return (bool)3;
}

