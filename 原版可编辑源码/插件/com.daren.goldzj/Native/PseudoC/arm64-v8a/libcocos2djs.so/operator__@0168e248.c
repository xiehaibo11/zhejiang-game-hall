
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::TypedStateValueInfo
   const&, v8::internal::compiler::TypedStateValueInfo const&) */

bool v8::internal::compiler::operator!=(TypedStateValueInfo *param_1,TypedStateValueInfo *param_2)

{
  if (*(long *)param_1 != *(long *)param_2) {
    return true;
  }
  return *(int *)(param_1 + 8) != *(int *)(param_2 + 8);
}

