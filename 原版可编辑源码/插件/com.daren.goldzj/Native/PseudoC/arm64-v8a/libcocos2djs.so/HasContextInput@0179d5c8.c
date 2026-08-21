
/* v8::internal::compiler::OperatorProperties::HasContextInput(v8::internal::compiler::Operator
   const*) */

bool v8::internal::compiler::OperatorProperties::HasContextInput(Operator *param_1)

{
  return *(ushort *)(param_1 + 0x10) - 0x2b1 < 0x6d;
}

