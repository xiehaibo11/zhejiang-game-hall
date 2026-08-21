
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::LifetimePosition) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  basic_ostream *this;
  char *pcVar3;
  char local_34 [4];
  char local_30 [4];
  char local_2c [4];
  undefined1 local_28;
  undefined1 local_24;
  
  local_34[0] = '@';
  this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                   (param_1,local_34,1);
  uVar1 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,(int)uVar1 >> 2);
  if ((param_2 >> 1 & 1) == 0) {
    local_28 = 0x67;
    lVar2 = -8;
  }
  else {
    lVar2 = -4;
    local_24 = 0x69;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,&stack0xffffffffffffffe0 + lVar2,1);
  if ((param_2 & 1) == 0) {
    local_2c[0] = 's';
    pcVar3 = local_2c;
  }
  else {
    pcVar3 = local_30;
    local_30[0] = 'e';
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,1);
  return param_1;
}

