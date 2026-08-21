
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::S8x16ShuffleParameter
   const&, v8::internal::compiler::S8x16ShuffleParameter const&) */

uint v8::internal::compiler::operator!=
               (S8x16ShuffleParameter *param_1,S8x16ShuffleParameter *param_2)

{
  uint uVar1;
  
  uVar1 = operator==(param_1,param_2);
  return ~uVar1 & 1;
}

