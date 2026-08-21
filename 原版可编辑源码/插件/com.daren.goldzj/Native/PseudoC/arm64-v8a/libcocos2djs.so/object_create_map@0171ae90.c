
/* v8::internal::compiler::JSObjectData::object_create_map(v8::internal::compiler::JSHeapBroker*)
   const */

undefined8 __thiscall
v8::internal::compiler::JSObjectData::object_create_map(JSObjectData *this,JSHeapBroker *param_1)

{
  char cVar1;
  basic_ostream *pbVar2;
  long *plVar3;
  locale alStack_18 [8];
  
  if ((this[0x48] == (JSObjectData)0x0) && (param_1[0x74] != (JSHeapBroker)0x0)) {
    pbVar2 = (basic_ostream *)JSHeapBroker::Trace(param_1);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"Missing ",8);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"object_create_map on ",0x15);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,this);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2," (",2);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"../../src/compiler/js-heap-broker.cc",0x24);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,":",1);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,0x11a);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,")",1);
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_18,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(alStack_18);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
  }
  return *(undefined8 *)(this + 0x50);
}

