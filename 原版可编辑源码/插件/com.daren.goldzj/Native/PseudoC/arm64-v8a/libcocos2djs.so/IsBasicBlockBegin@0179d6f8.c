
/* v8::internal::compiler::OperatorProperties::IsBasicBlockBegin(v8::internal::compiler::Operator
   const*) */

uint v8::internal::compiler::OperatorProperties::IsBasicBlockBegin(Operator *param_1)

{
  if (*(ushort *)(param_1 + 0x10) < 0x3e) {
    return (uint)(0x20000000004007f3 >> ((ulong)*(ushort *)(param_1 + 0x10) & 0x3f)) & 1;
  }
  return 0;
}

