
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CreateArrayParameters
   const&, v8::internal::compiler::CreateArrayParameters const&) */

bool v8::internal::compiler::operator==
               (CreateArrayParameters *param_1,CreateArrayParameters *param_2)

{
  return *(long *)param_1 == *(long *)param_2 && *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}

