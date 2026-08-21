
/* v8::internal::IfStatementSourceRanges::HasRange(v8::internal::SourceRangeKind) */

uint __thiscall v8::internal::IfStatementSourceRanges::HasRange(undefined8 param_1,int param_2)

{
  if (param_2 - 2U < 5) {
    return 0x13U >> (ulong)(param_2 - 2U & 0x1f) & 1;
  }
  return 0;
}

