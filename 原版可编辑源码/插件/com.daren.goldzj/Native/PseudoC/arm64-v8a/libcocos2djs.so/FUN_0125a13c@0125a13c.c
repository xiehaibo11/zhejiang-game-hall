
void FUN_0125a13c(long param_1,uint *param_2)

{
  char cVar1;
  long *plVar2;
  undefined **local_148;
  undefined **local_140;
  locale alStack_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined **local_e8 [17];
  undefined8 local_60;
  undefined4 local_58;
  locale alStack_38 [8];
  
  **(uint **)(param_1 + 0x10) = *param_2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
  if (v8::internal::FLAG_trace_wasm_serialization != '\0') {
    local_148 = (undefined **)0x1ca1178;
    local_e8[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_e8,(AndroidLogStream *)&local_140);
    local_58 = 0xffffffff;
    local_140 = &PTR__basic_streambuf_01c671a8;
    local_60 = 0;
    local_148 = &PTR__StdoutStream_01ca1128;
    local_e8[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_138);
    local_140 = &PTR__AndroidLogStream_01cbc008;
    local_100 = 0;
    uStack_f8 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    local_130 = 0;
    local_f0 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_148,"wrote: ",7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_148,(ulong)*param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_148," sized: ",8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_148,4);
    std::__ndk1::ios_base::getloc();
    plVar2 = (long *)std::__ndk1::locale::use_facet(alStack_38,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,10);
    std::__ndk1::locale::~locale(alStack_38);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_148,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_148);
    local_148 = &PTR__StdoutStream_01ca1128;
    local_e8[0] = &PTR__StdoutStream_01ca1150;
    v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_140);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_e8);
  }
  return;
}

