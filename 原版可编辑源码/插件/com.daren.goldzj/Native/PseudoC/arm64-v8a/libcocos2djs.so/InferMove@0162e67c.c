
/* v8::internal::compiler::CodeGenerator::MoveType::InferMove(v8::internal::compiler::InstructionOperand*,
   v8::internal::compiler::InstructionOperand*) */

undefined1
v8::internal::compiler::CodeGenerator::MoveType::InferMove
          (InstructionOperand *param_1,InstructionOperand *param_2)

{
  undefined1 uVar1;
  
  if ((*(ulong *)param_1 & 7) == 2) {
    uVar1 = 4;
    if ((*(ulong *)param_2 & 0x1c) != 4) {
      uVar1 = 5;
    }
    return uVar1;
  }
  if ((*(ulong *)param_1 & 0x1c) == 4) {
    return (*(ulong *)param_2 & 0x1c) != 4;
  }
  uVar1 = 2;
  if ((*(ulong *)param_2 & 0x1c) != 4) {
    uVar1 = 3;
  }
  return uVar1;
}

