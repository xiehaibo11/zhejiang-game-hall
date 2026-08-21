
/* v8::internal::ContinuationSourceRanges::GetRange(v8::internal::SourceRangeKind) */

ulong v8::internal::ContinuationSourceRanges::GetRange(long param_1)

{
  return (ulong)*(uint *)(param_1 + 8) | 0xffffffff00000000;
}

