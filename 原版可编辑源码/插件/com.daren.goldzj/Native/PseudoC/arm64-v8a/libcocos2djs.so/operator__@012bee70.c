
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::VirtualContext const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,VirtualContext *param_2)

{
  char cVar1;
  basic_ostream *pbVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  long *plVar3;
  undefined8 local_38;
  locale alStack_18 [8];
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Distance ",9);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(uint *)param_2)
  ;
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2," from ",6);
  local_38 = **(undefined8 **)(param_2 + 8);
  this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
         internal::operator<<(pbVar2,(Brief *)&local_38);
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_18,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale(alStack_18);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this);
  return param_1;
}

