
/* v8::internal::Builtins::GetStackParameterCount(v8::internal::Builtins::Name) */

long v8::internal::Builtins::GetStackParameterCount(int param_1)

{
  return (long)*(short *)(&DAT_01c98628 + (long)param_1 * 0x18);
}

