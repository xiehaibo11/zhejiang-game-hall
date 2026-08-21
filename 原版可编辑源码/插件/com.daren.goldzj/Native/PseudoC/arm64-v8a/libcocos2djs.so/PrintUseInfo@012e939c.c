
/* v8::internal::compiler::RepresentationSelector::PrintUseInfo(v8::internal::compiler::UseInfo) */

void __thiscall
v8::internal::compiler::RepresentationSelector::PrintUseInfo(undefined8 param_1,undefined1 *param_2)

{
  char *__s;
  size_t sVar1;
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
  undefined8 local_38;
  
  if (FLAG_trace_representation != '\0') {
    local_148 = (undefined **)0x1ca1178;
    local_e8[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_e8,(AndroidLogStream *)&local_140);
    local_58 = 0xffffffff;
    local_140 = &PTR__basic_streambuf_01c671a8;
    local_60 = 0;
    local_148 = &PTR__StdoutStream_01ca1128;
    local_e8[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_138);
    local_100 = 0;
    uStack_f8 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    local_140 = &PTR__AndroidLogStream_01cbc008;
    uStack_128 = 0;
    local_130 = 0;
    local_f0 = 0;
    internal::operator<<(&local_148,*param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_148,":",1);
    local_38 = *(undefined8 *)(param_2 + 4);
    __s = (char *)Truncation::description((Truncation *)&local_38);
    sVar1 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_148,__s,sVar1);
    local_148 = &PTR__StdoutStream_01ca1128;
    local_e8[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_140);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_e8);
  }
  return;
}

