
/* v8::internal::Assembler::IsImmLLiteral(long) */

bool v8::internal::Assembler::IsImmLLiteral(long param_1)

{
  return (param_1 & 3U) == 0 && param_1 + 0x100000U < 0x200000;
}

