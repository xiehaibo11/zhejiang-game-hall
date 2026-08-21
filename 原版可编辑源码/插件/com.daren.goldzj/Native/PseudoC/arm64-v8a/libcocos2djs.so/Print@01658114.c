
/* v8::internal::compiler::SpillRange::Print() const */

void __thiscall v8::internal::compiler::SpillRange::Print(SpillRange *this)

{
  long *plVar1;
  char cVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined **local_168;
  undefined **local_160;
  locale alStack_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  locale local_70 [16];
  
  local_168 = (undefined **)0x1ca1178;
  local_108[0] = (undefined **)0x1ca11a0;
  std::__ndk1::ios_base::init((ios_base *)local_108,(AndroidLogStream *)&local_160);
  local_78 = 0xffffffff;
  local_168 = &PTR__StdoutStream_01ca1128;
  local_108[0] = &PTR__StdoutStream_01ca1150;
  local_160 = &PTR__basic_streambuf_01c671a8;
  local_80 = 0;
  std::__ndk1::locale::locale(alStack_158);
  local_160 = &PTR__AndroidLogStream_01cbc008;
  local_120 = 0;
  uStack_118 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_110 = 0;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_168,"{",1);
  std::__ndk1::ios_base::getloc();
  plVar4 = (long *)std::__ndk1::locale::use_facet(local_70,(id *)&std::__ndk1::ctype<char>::id);
  cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
  std::__ndk1::locale::~locale(local_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,cVar2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3);
  plVar1 = *(long **)(this + 8);
  for (plVar4 = *(long **)this; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,
                        *(int *)(*plVar4 + 0x5c));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
  }
  std::__ndk1::ios_base::getloc();
  plVar4 = (long *)std::__ndk1::locale::use_facet(local_70,(id *)&std::__ndk1::ctype<char>::id);
  cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
  std::__ndk1::locale::~locale(local_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
  for (puVar5 = *(undefined4 **)(this + 0x20); puVar5 != (undefined4 *)0x0;
      puVar5 = *(undefined4 **)(puVar5 + 2)) {
    local_70[0] = (locale)0x5b;
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_168,(char *)local_70,1);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,*puVar5);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,", ",2);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,puVar5[1]);
    local_70[0] = (locale)0x29;
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,(char *)local_70,1);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(local_70,(id *)&std::__ndk1::ctype<char>::id);
    cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale(local_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3);
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_168,"}",1);
  std::__ndk1::ios_base::getloc();
  plVar4 = (long *)std::__ndk1::locale::use_facet(local_70,(id *)&std::__ndk1::ctype<char>::id);
  cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
  std::__ndk1::locale::~locale(local_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,cVar2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3);
  local_168 = &PTR__StdoutStream_01ca1128;
  local_108[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  return;
}

