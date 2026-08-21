
/* v8::internal::compiler::LiveRange::Print(v8::internal::RegisterConfiguration const*, bool) const
    */

void __thiscall
v8::internal::compiler::LiveRange::Print
          (LiveRange *this,RegisterConfiguration *param_1,bool param_2)

{
  char cVar1;
  long *plVar2;
  RegisterConfiguration *local_170;
  LiveRange *local_168;
  undefined **local_160;
  undefined **local_158;
  locale alStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  locale alStack_68 [8];
  
  local_160 = (undefined **)0x1ca1178;
  local_100[0] = (undefined **)0x1ca11a0;
  std::__ndk1::ios_base::init((ios_base *)local_100,(AndroidLogStream *)&local_158);
  local_70 = 0xffffffff;
  local_158 = &PTR__basic_streambuf_01c671a8;
  local_78 = 0;
  local_160 = &PTR__StdoutStream_01ca1128;
  local_100[0] = &PTR__StdoutStream_01ca1150;
  std::__ndk1::locale::locale(alStack_150);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_158 = &PTR__AndroidLogStream_01cbc008;
  uStack_120 = 0;
  local_128 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_140 = 0;
  local_148 = 0;
  local_170 = param_1;
  for (; this != (LiveRange *)0x0; this = *(LiveRange **)(this + 0x28)) {
    local_168 = this;
    compiler::operator<<((basic_ostream *)&local_160,(PrintableLiveRange *)&local_170);
    std::__ndk1::ios_base::getloc();
    plVar2 = (long *)std::__ndk1::locale::use_facet(alStack_68,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,10);
    std::__ndk1::locale::~locale(alStack_68);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_160);
    if (!param_2) break;
  }
  local_160 = &PTR__StdoutStream_01ca1128;
  local_100[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_158);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  return;
}

