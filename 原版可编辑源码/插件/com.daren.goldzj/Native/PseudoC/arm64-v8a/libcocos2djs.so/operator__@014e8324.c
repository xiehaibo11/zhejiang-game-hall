
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::BasicBlockProfiler const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,BasicBlockProfiler *param_2)

{
  char cVar1;
  basic_ostream *pbVar2;
  long *plVar3;
  BasicBlockProfiler *pBVar4;
  locale alStack_38 [8];
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"---- Start Profiling Data ----",0x1e);
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_38,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale(alStack_38);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
  for (pBVar4 = *(BasicBlockProfiler **)(param_2 + 8); param_2 != pBVar4;
      pBVar4 = *(BasicBlockProfiler **)(pBVar4 + 8)) {
    operator<<(param_1,*(Data **)(pBVar4 + 0x10));
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"---- End Profiling Data ----",0x1c);
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_38,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale(alStack_38);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
  return param_1;
}

