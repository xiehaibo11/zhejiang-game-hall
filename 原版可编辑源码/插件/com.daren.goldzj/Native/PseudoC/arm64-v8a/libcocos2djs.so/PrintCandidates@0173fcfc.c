
/* v8::internal::compiler::JSInliningHeuristic::PrintCandidates() */

void __thiscall
v8::internal::compiler::JSInliningHeuristic::PrintCandidates(JSInliningHeuristic *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  size_t sVar6;
  JSInliningHeuristic *pJVar7;
  char *__s;
  JSInliningHeuristic *this_00;
  JSInliningHeuristic *pJVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_180 [16];
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
  local_120 = 0;
  uStack_118 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_160 = &PTR__AndroidLogStream_01cbc008;
  uStack_148 = 0;
  local_150 = 0;
  local_110 = 0;
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,
                      *(ulong *)(this + 0x60));
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4," candidate(s) for inlining:",0x1b);
  std::__ndk1::ios_base::getloc();
  plVar5 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)local_180,(id *)&std::__ndk1::ctype<char>::id);
  cVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
  std::__ndk1::locale::~locale((locale *)local_180);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar2);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
  pJVar8 = *(JSInliningHeuristic **)(this + 0x48);
  while( true ) {
    if (pJVar8 == this + 0x50) {
      local_108[0] = &PTR__StdoutStream_01ca1150;
      local_168 = &PTR__StdoutStream_01ca1128;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
      return;
    }
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_168,"- candidate: ",0xd);
    __s = *(char **)(**(long **)(pJVar8 + 0x108) + 8);
    sVar6 = strlen(__s);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,__s,sVar6);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," node #",7);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(uint *)(*(long *)(pJVar8 + 0x108) + 0x14) & 0xffffff);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," with frequency ",0x10);
    pbVar4 = (basic_ostream *)compiler::operator<<(pbVar4,(CallFrequency *)(pJVar8 + 0x110));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(int *)(pJVar8 + 0x100));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," target(s):",0xb);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)local_180,(id *)&std::__ndk1::ctype<char>::id);
    cVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)local_180);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    if (0 < *(int *)(pJVar8 + 0x100)) break;
LAB_01740068:
    pJVar7 = *(JSInliningHeuristic **)(pJVar8 + 8);
    if (*(JSInliningHeuristic **)(pJVar8 + 8) == (JSInliningHeuristic *)0x0) {
      pJVar7 = pJVar8 + 0x10;
      bVar1 = *(JSInliningHeuristic **)*(JSInliningHeuristic **)pJVar7 != pJVar8;
      pJVar8 = *(JSInliningHeuristic **)pJVar7;
      if (bVar1) {
        do {
          lVar9 = *(long *)pJVar7;
          pJVar7 = (JSInliningHeuristic *)(lVar9 + 0x10);
          pJVar8 = *(JSInliningHeuristic **)pJVar7;
        } while (*(long *)pJVar8 != lVar9);
      }
    }
    else {
      do {
        pJVar8 = pJVar7;
        pJVar7 = *(JSInliningHeuristic **)pJVar8;
      } while (*(JSInliningHeuristic **)pJVar8 != (JSInliningHeuristic *)0x0);
    }
  }
  lVar9 = 0;
  pJVar7 = pJVar8 + 0x90;
  if (pJVar8[0x20] != (JSInliningHeuristic)0x0) goto LAB_0173fff8;
  do {
    if (pJVar8[0xe8] != (JSInliningHeuristic)0x1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    auVar10 = *(undefined1 (*) [16])(pJVar8 + 0xf0);
    this_00 = pJVar7;
    while( true ) {
      local_180 = auVar10;
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_168,"  - target: ",0xc);
      compiler::operator<<(pbVar4,(ObjectRef *)local_180);
      if (*(FixedArrayBaseRef *)(this_00 + -8) == (FixedArrayBaseRef)0x0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168,", no bytecode",0xd);
      }
      else {
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)&local_168,", bytecode size: ",0x11);
        iVar3 = FixedArrayBaseRef::length((FixedArrayBaseRef *)this_00);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,iVar3);
      }
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      cVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale(alStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
      lVar9 = lVar9 + 1;
      pJVar7 = this_00 + 0x18;
      if (*(int *)(pJVar8 + 0x100) <= lVar9) goto LAB_01740068;
      if (*(FixedArrayBaseRef *)(this_00 + -0x58) == (FixedArrayBaseRef)0x0) break;
LAB_0173fff8:
      auVar10 = JSFunctionRef::shared((JSFunctionRef *)(pJVar7 + -0x68));
      this_00 = pJVar7;
    }
  } while( true );
}

