
/* v8::internal::compiler::RangeType::Limits::Union(v8::internal::compiler::RangeType::Limits,
   v8::internal::compiler::RangeType::Limits) */

double v8::internal::compiler::RangeType::Limits::Union
                 (double param_1,double param_2,double param_3,double param_4)

{
  if (param_1 <= param_2) {
    if (param_4 < param_3) {
      return param_1;
    }
    if (param_1 <= param_3) {
      param_3 = param_1;
    }
  }
  return param_3;
}

