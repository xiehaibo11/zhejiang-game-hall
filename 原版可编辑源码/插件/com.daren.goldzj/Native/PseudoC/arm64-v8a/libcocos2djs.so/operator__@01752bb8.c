
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CreateFunctionContextParameters
   const&, v8::internal::compiler::CreateFunctionContextParameters const&) */

bool v8::internal::compiler::operator!=
               (CreateFunctionContextParameters *param_1,CreateFunctionContextParameters *param_2)

{
  if ((*(long *)param_1 == *(long *)param_2) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    return param_1[0xc] != param_2[0xc];
  }
  return true;
}

