
/* v8::internal::compiler::RepresentationSelector::PrintNodeFeedbackType(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::PrintNodeFeedbackType
          (RepresentationSelector *this,Node *param_1)

{
  char cVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  uint uVar4;
  Node *pNVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
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
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_168,"#",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(uint *)(param_1 + 0x14) & 0xffffff);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,":",1);
  pbVar2 = (basic_ostream *)compiler::operator<<(pbVar2,*(Operator **)param_1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"(",1);
  pNVar5 = param_1 + 0x20;
  uVar4 = (byte)param_1[0x17] & 0xf;
  if (uVar4 == 0xf) {
    uVar4 = *(uint *)(*(long *)pNVar5 + 8);
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  if (uVar4 != 0) {
    plVar7 = *(long **)pNVar5;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_168,"#",1);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(uint *)((long)plVar7 + 0x14) & 0xffffff);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,":",1);
    pcVar8 = *(char **)(*plVar7 + 8);
    sVar3 = strlen(pcVar8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar8,sVar3);
    if (uVar4 != 1) {
      lVar9 = (long)(int)uVar4 * 8 + -8;
      do {
        pNVar5 = pNVar5 + 8;
        plVar7 = *(long **)pNVar5;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168,", ",2);
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_168,"#",1);
        pbVar2 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                            *(uint *)((long)plVar7 + 0x14) & 0xffffff);
        pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar2,":",1);
        pcVar8 = *(char **)(*plVar7 + 8);
        sVar3 = strlen(pcVar8);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar2,pcVar8,sVar3);
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_168,")",1);
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_168,"  [Static type: ",0x10);
    compiler::operator<<(pbVar2,lVar9);
    lVar6 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28
                     + 0x18);
    if ((lVar6 != 0) && (lVar6 != lVar9)) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_168,", Feedback type: ",0x11);
      compiler::operator<<(pbVar2,lVar6);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_168,"]",1);
  }
  std::__ndk1::ios_base::getloc();
  plVar7 = (long *)std::__ndk1::locale::use_facet(alStack_70,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
  std::__ndk1::locale::~locale(alStack_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
  local_168 = &PTR__StdoutStream_01ca1128;
  local_108[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  return;
}

