
/* v8::internal::TransitionsAccessor::PrintTransitionTree() */

void __thiscall v8::internal::TransitionsAccessor::PrintTransitionTree(TransitionsAccessor *this)

{
  basic_ostream *pbVar1;
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
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_148,"map= ",5);
  local_38 = *(undefined8 *)(this + 0x10);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  PrintTransitionTree(this,(basic_ostream *)&local_148,0,(PerThreadAssertScopeDebugOnly *)&local_38)
  ;
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_148,"\n",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1);
  local_148 = &PTR__StdoutStream_01ca1128;
  local_e8[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_140);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_e8);
  return;
}

