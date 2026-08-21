
/* v8::internal::RuntimeCallStatEntries::Entry::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::RuntimeCallStatEntries::Entry::Print(Entry *this,basic_ostream *param_1)

{
  char cVar1;
  size_t sVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  char *__s;
  locale alStack_28 [8];
  
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 2;
  *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) =
       *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0xfffffeff | 4;
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 2;
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0x32;
  __s = *(char **)this;
  sVar2 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar2);
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 10;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      (double)*(long *)(this + 8) / 1000.0);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"ms ",3);
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 6;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      *(double *)(this + 0x18));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"%",1);
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 10;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      *(ulong *)(this + 0x10));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
  *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 6;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      *(double *)(this + 0x20));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"%",1);
  std::__ndk1::ios_base::getloc();
  plVar4 = (long *)std::__ndk1::locale::use_facet(alStack_28,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
  std::__ndk1::locale::~locale(alStack_28);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  return;
}

