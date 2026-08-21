
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CreateClosureParameters
   const&, v8::internal::compiler::CreateClosureParameters const&) */

bool v8::internal::compiler::operator==
               (CreateClosureParameters *param_1,CreateClosureParameters *param_2)

{
  return (*(long *)param_1 == *(long *)param_2 && *(long *)(param_1 + 8) == *(long *)(param_2 + 8))
         && (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10) &&
            param_1[0x18] == param_2[0x18]);
}

