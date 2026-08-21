
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::S8x16ShuffleParameter
   const&, v8::internal::compiler::S8x16ShuffleParameter const&) */

bool v8::internal::compiler::operator==
               (S8x16ShuffleParameter *param_1,S8x16ShuffleParameter *param_2)

{
  return *(long *)param_1 == *(long *)param_2 && *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}

