
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CreateBoundFunctionParameters
   const&, v8::internal::compiler::CreateBoundFunctionParameters const&) */

bool v8::internal::compiler::operator==
               (CreateBoundFunctionParameters *param_1,CreateBoundFunctionParameters *param_2)

{
  return *(long *)param_1 == *(long *)param_2 && *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}

