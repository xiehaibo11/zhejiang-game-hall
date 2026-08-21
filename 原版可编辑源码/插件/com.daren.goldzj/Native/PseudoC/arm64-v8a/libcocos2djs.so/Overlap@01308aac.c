
/* v8::internal::compiler::Type::Overlap(v8::internal::compiler::RangeType const*,
   v8::internal::compiler::RangeType const*) */

bool v8::internal::compiler::Type::Overlap(RangeType *param_1,RangeType *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_2 + 8);
  if (*(double *)(param_2 + 8) <= *(double *)(param_1 + 8)) {
    dVar1 = *(double *)(param_1 + 8);
  }
  dVar2 = *(double *)(param_2 + 0x10);
  if (*(double *)(param_1 + 0x10) <= *(double *)(param_2 + 0x10)) {
    dVar2 = *(double *)(param_1 + 0x10);
  }
  return dVar1 <= dVar2;
}

