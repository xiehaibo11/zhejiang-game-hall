
/* v8::internal::Log::MessageBuilder::WriteToLogFile() */

void __thiscall v8::internal::Log::MessageBuilder::WriteToLogFile(MessageBuilder *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  locale alStack_28 [8];
  
  lVar3 = *(long *)this;
  std::__ndk1::ios_base::getloc();
  plVar2 = (long *)std::__ndk1::locale::use_facet(alStack_28,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,10);
  std::__ndk1::locale::~locale(alStack_28);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(lVar3 + 0x10),cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(lVar3 + 0x10));
  return;
}

