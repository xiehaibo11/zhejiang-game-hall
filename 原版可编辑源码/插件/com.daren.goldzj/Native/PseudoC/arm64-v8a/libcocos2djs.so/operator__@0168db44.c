
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::SelectParameters const&,
   v8::internal::compiler::SelectParameters const&) */

bool v8::internal::compiler::operator==(SelectParameters *param_1,SelectParameters *param_2)

{
  return *param_1 == *param_2 && param_1[1] == param_2[1];
}

