
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::AllocateParameters
   const&, v8::internal::compiler::AllocateParameters const&) */

bool v8::internal::compiler::operator==(AllocateParameters *param_1,AllocateParameters *param_2)

{
  return param_1[8] == param_2[8] && *(long *)param_1 == *(long *)param_2;
}

