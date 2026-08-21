
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::ZoneVector<v8::internal::MachineType> const*) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,ZoneVector *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  puVar1 = *(undefined2 **)param_2;
  puVar2 = *(undefined2 **)(param_2 + 8);
  if (puVar1 != puVar2) {
    internal::operator<<(param_1,*puVar1);
    while (puVar1 = puVar1 + 1, puVar1 != puVar2) {
      uVar3 = *puVar1;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
      internal::operator<<(param_1,uVar3);
    }
  }
  return param_1;
}

