
/* v8::internal::compiler::RepresentationSelector::PrintTruncation(v8::internal::compiler::Truncation)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::PrintTruncation
          (undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  long *plVar3;
  undefined **local_150;
  undefined **local_148;
  locale alStack_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  locale alStack_38 [8];
  
  if (FLAG_trace_representation != '\0') {
    local_150 = (undefined **)0x1ca1178;
    local_f0[0] = (undefined **)0x1ca11a0;
    local_58 = param_2;
    std::__ndk1::ios_base::init((ios_base *)local_f0,(AndroidLogStream *)&local_148);
    local_60 = 0xffffffff;
    local_148 = &PTR__basic_streambuf_01c671a8;
    local_68 = 0;
    local_150 = &PTR__StdoutStream_01ca1128;
    local_f0[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_140);
    local_108 = 0;
    uStack_100 = 0;
    local_148 = &PTR__AndroidLogStream_01cbc008;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    local_f8 = 0;
    __s = (char *)Truncation::description((Truncation *)&local_58);
    sVar2 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_150,__s,sVar2);
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_38,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(alStack_38);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150);
    local_150 = &PTR__StdoutStream_01ca1128;
    local_f0[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_148);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f0);
  }
  return;
}

