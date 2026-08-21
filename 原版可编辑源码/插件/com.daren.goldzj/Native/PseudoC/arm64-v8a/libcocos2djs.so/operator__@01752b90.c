
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CreateFunctionContextParameters
   const&, v8::internal::compiler::CreateFunctionContextParameters const&) */

bool v8::internal::compiler::operator==
               (CreateFunctionContextParameters *param_1,CreateFunctionContextParameters *param_2)

{
  return *(long *)param_1 == *(long *)param_2 && *(long *)(param_1 + 5) == *(long *)(param_2 + 5);
}

