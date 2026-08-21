
/* v8::internal::Assembler::IsConstantPoolAt(v8::internal::Instruction*) */

bool v8::internal::Assembler::IsConstantPoolAt(Instruction *param_1)

{
  return (*(uint *)param_1 & 0xff00001f) == 0x5800001f;
}

