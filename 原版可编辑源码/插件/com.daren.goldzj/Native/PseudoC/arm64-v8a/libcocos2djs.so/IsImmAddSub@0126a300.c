
/* v8::internal::Assembler::IsImmAddSub(long) */

bool v8::internal::Assembler::IsImmAddSub(long param_1)

{
  if ((ulong)param_1 < 0x1000) {
    return true;
  }
  return (ulong)(param_1 >> 0xc) < 0x1000 && (param_1 & 0xfffU) == 0;
}

