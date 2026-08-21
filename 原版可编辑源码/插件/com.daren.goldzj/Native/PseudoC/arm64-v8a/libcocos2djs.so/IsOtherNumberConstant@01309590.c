
/* v8::internal::compiler::OtherNumberConstantType::IsOtherNumberConstant(double) */

bool v8::internal::compiler::OtherNumberConstantType::IsOtherNumberConstant(double param_1)

{
  if (NAN(param_1)) {
    return false;
  }
  return param_1 != -0.0 && (double)(long)param_1 != param_1;
}

