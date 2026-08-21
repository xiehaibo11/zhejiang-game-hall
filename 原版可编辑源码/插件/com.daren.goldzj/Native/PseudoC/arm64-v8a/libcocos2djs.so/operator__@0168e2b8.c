
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::TypedStateValueInfo const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,TypedStateValueInfo *param_2)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  basic_ostream *pbVar5;
  uint uVar6;
  
  puVar2 = (undefined2 *)**(long **)param_2;
  puVar3 = (undefined2 *)(*(long **)param_2)[1];
  if (puVar2 != puVar3) {
    internal::operator<<(param_1,*puVar2);
    while (puVar2 = puVar2 + 1, puVar2 != puVar3) {
      uVar4 = *puVar2;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
      internal::operator<<(param_1,uVar4);
    }
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", ",2);
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar6 != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"sparse:",7);
    if (uVar6 != 1) {
      do {
        pcVar1 = ".";
        if ((uVar6 & 1) != 0) {
          pcVar1 = "^";
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar1,1);
        uVar6 = uVar6 >> 1;
      } while (uVar6 != 1);
    }
    return pbVar5;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"dense",5);
  return pbVar5;
}

