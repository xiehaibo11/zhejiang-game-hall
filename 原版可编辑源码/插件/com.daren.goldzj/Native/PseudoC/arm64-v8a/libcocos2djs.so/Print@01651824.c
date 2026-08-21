
/* v8::internal::compiler::BlockAssessments::Print() const */

void __thiscall v8::internal::compiler::BlockAssessments::Print(BlockAssessments *this)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  BlockAssessments *pBVar6;
  long lVar7;
  BlockAssessments *pBVar8;
  undefined8 local_170;
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
  undefined8 local_118;
  undefined8 uStack_110;
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
  local_118 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_160 = &PTR__AndroidLogStream_01cbc008;
  uStack_148 = 0;
  local_150 = 0;
  local_120 = 0;
  pBVar8 = *(BlockAssessments **)this;
  do {
    if (pBVar8 == this + 8) {
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale(alStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
      local_168 = &PTR__StdoutStream_01ca1128;
      local_108[0] = &PTR__StdoutStream_01ca1150;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
      return;
    }
    local_170 = *(undefined8 *)(pBVar8 + 0x20);
    piVar1 = *(int **)(pBVar8 + 0x28);
    pbVar4 = (basic_ostream *)
             compiler::operator<<((basic_ostream *)&local_168,(InstructionOperand *)&local_170);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," : ",3);
    if (*piVar1 == 0) {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_168,"v",1);
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","assessment->kind() == Final");
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,piVar1[1]);
    }
    else {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_168,"P",1);
    }
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet(alStack_70,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale(alStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
    pBVar6 = *(BlockAssessments **)(pBVar8 + 8);
    if (*(BlockAssessments **)(pBVar8 + 8) == (BlockAssessments *)0x0) {
      pBVar6 = pBVar8 + 0x10;
      bVar2 = *(BlockAssessments **)*(BlockAssessments **)pBVar6 != pBVar8;
      pBVar8 = *(BlockAssessments **)pBVar6;
      if (bVar2) {
        do {
          lVar7 = *(long *)pBVar6;
          pBVar6 = (BlockAssessments *)(lVar7 + 0x10);
          pBVar8 = *(BlockAssessments **)pBVar6;
        } while (*(long *)pBVar8 != lVar7);
      }
    }
    else {
      do {
        pBVar8 = pBVar6;
        pBVar6 = *(BlockAssessments **)pBVar8;
      } while (*(BlockAssessments **)pBVar8 != (BlockAssessments *)0x0);
    }
  } while( true );
}

