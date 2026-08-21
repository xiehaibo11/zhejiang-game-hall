
/* v8::internal::compiler::NoChangeBecauseOfMissingData(v8::internal::compiler::JSHeapBroker*, char
   const*, int) */

undefined8
v8::internal::compiler::NoChangeBecauseOfMissingData
          (JSHeapBroker *param_1,char *param_2,int param_3)

{
  char cVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  long *plVar4;
  locale alStack_18 [8];
  
  if (param_1[0x74] != (JSHeapBroker)0x0) {
    pbVar2 = (basic_ostream *)JSHeapBroker::Trace(param_1);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"Missing ",8);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"data in function ",0x11);
    sVar3 = strlen(param_2);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,param_2,sVar3);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2," at line ",9);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,param_3);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2," (",2);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"../../src/compiler/js-heap-broker.cc",0x24);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,":",1);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,0xf7c);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,")",1);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(alStack_18,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale(alStack_18);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
  }
  return 0;
}

