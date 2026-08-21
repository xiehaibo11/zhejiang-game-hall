
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::VirtualBoundFunction const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,VirtualBoundFunction *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  basic_ostream *pbVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)&local_38,(id *)&std::__ndk1::ctype<char>::id);
  cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale((locale *)&local_38);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"    Target: ",0xc);
  operator<<(pbVar4,(Hints *)param_2);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"    Arguments:",0xe);
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)&local_38,(id *)&std::__ndk1::ctype<char>::id);
  cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale((locale *)&local_38);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  for (puVar5 = *(undefined8 **)(param_2 + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    local_38 = *puVar5;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"    ",4);
    operator<<(pbVar4,(Hints *)&local_38);
  }
  return param_1;
}

