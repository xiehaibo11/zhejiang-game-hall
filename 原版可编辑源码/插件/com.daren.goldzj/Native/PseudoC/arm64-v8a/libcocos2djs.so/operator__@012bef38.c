
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::VirtualClosure const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,VirtualClosure *param_2)

{
  char cVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar2;
  long *plVar3;
  basic_ostream *pbVar4;
  undefined8 local_48;
  locale alStack_28 [8];
  
  local_48 = **(undefined8 **)param_2;
  pbVar2 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           internal::operator<<(param_1,(Brief *)&local_48);
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_28,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale(alStack_28);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar2,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar2);
  local_48 = **(undefined8 **)(param_2 + 8);
  pbVar2 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           internal::operator<<(param_1,(Brief *)&local_48);
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_28,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale(alStack_28);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar2,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar2);
  plVar3 = *(long **)(param_2 + 0x10);
  if ((plVar3 != (long *)0x0) &&
     ((((*plVar3 != 0 || (plVar3[1] != 0)) || (plVar3[2] != 0)) ||
      ((plVar3[3] != 0 || (plVar3[4] != 0)))))) {
    pbVar4 = (basic_ostream *)operator<<(param_1,(Hints *)(param_2 + 0x10));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"):",2);
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_28,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(alStack_28);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
  }
  return param_1;
}

