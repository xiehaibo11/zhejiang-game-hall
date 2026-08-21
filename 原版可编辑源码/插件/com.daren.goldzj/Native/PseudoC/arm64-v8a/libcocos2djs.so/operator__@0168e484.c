
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::IfValueParameters
   const&, v8::internal::compiler::IfValueParameters const&) */

bool v8::internal::compiler::operator==(IfValueParameters *param_1,IfValueParameters *param_2)

{
  if (*(int *)param_1 == *(int *)param_2) {
    return param_1[8] == param_2[8];
  }
  return false;
}

