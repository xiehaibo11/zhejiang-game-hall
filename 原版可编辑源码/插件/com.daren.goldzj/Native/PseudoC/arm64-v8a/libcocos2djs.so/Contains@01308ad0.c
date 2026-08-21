
/* v8::internal::compiler::Type::Contains(v8::internal::compiler::RangeType const*,
   v8::internal::compiler::RangeType const*) */

bool v8::internal::compiler::Type::Contains(RangeType *param_1,RangeType *param_2)

{
  if (*(double *)(param_2 + 8) < *(double *)(param_1 + 8)) {
    return false;
  }
  return *(double *)(param_2 + 0x10) <= *(double *)(param_1 + 0x10);
}

