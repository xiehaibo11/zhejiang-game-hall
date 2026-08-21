
/* v8::internal::CoverageInfo::Print(std::__ndk1::unique_ptr<char [],
   std::__ndk1::default_delete<char []> >) */

void __thiscall v8::internal::CoverageInfo::Print(CoverageInfo *this,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  char *__s;
  long lVar9;
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
  locale alStack_70 [16];
  
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
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_168,"Coverage info (",0xf);
  if (*(char *)*param_2 == '\0') {
    __s = "{anonymous}";
    sVar4 = 0xb;
  }
  else {
    __s = (char *)*param_2;
    sVar4 = strlen(__s);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_168,__s,sVar4);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_168,"):",2);
  std::__ndk1::ios_base::getloc();
  plVar6 = (long *)std::__ndk1::locale::use_facet(alStack_70,(id *)&std::__ndk1::ctype<char>::id);
  cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale(alStack_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar3);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
  if (7 < *(int *)(*(long *)this + 3)) {
    lVar9 = 0;
    lVar7 = 0;
    iVar8 = 0xb;
    do {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_168,"{",1);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(int *)(*(long *)this + (lVar9 >> 0x20 | 7U)) >> 1);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,",",1);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(int *)(*(long *)this + (long)iVar8) >> 1);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"}",1);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale(alStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
      lVar7 = lVar7 + 1;
      iVar8 = iVar8 + 0x10;
      lVar9 = lVar9 + 0x1000000000;
      iVar1 = *(int *)(*(long *)this + 3) >> 1;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
    } while (lVar7 < iVar2 >> 2);
  }
  local_168 = &PTR__StdoutStream_01ca1128;
  local_108[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  return;
}

