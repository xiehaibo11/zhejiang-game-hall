
/* v8::internal::compiler::LoadElimination::AbstractMaps::Print() const */

void __thiscall v8::internal::compiler::LoadElimination::AbstractMaps::Print(AbstractMaps *this)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  long *plVar6;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  undefined8 *puVar7;
  AbstractMaps *pAVar8;
  AbstractMaps *pAVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *__s;
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
  pAVar9 = *(AbstractMaps **)this;
  do {
    if (pAVar9 == this + 8) {
      local_108[0] = &PTR__StdoutStream_01ca1150;
      local_168 = &PTR__StdoutStream_01ca1128;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
      return;
    }
    plVar6 = *(long **)(pAVar9 + 0x20);
    puVar1 = *(undefined8 **)(pAVar9 + 0x28);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_168,"    #",5);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(uint *)((long)plVar6 + 0x14) & 0xffffff);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,":",1);
    __s = *(char **)(*plVar6 + 8);
    sVar5 = strlen(__s);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,__s,sVar5);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(alStack_70,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale(alStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    lVar11 = 0;
    uVar12 = 0;
    uVar10 = (ulong)puVar1 & 3;
    while (uVar10 != 1) {
      if (uVar10 == 0) {
        if (uVar12 != 0) break;
      }
      else if ((ulong)(*(long *)((long)puVar1 + 6) - *(long *)((long)puVar1 - 2) >> 3) <= uVar12)
      break;
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_168,"     - ",7);
      puVar7 = puVar1;
      if (uVar10 != 0) {
        if ((ulong)(*(long *)((long)puVar1 + 6) - *(long *)((long)puVar1 - 2) >> 3) <=
            (ulong)(lVar11 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar7 = *(undefined8 **)(*(long *)((long)puVar1 - 2) + (lVar11 >> 0x20) * 8);
      }
      local_170 = *puVar7;
      this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                internal::operator<<(pbVar4,(Brief *)&local_170);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale(alStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this_00,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this_00);
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x100000000;
    }
    pAVar8 = *(AbstractMaps **)(pAVar9 + 8);
    if (*(AbstractMaps **)(pAVar9 + 8) == (AbstractMaps *)0x0) {
      pAVar8 = pAVar9 + 0x10;
      bVar2 = *(AbstractMaps **)*(AbstractMaps **)pAVar8 != pAVar9;
      pAVar9 = *(AbstractMaps **)pAVar8;
      if (bVar2) {
        do {
          lVar11 = *(long *)pAVar8;
          pAVar8 = (AbstractMaps *)(lVar11 + 0x10);
          pAVar9 = *(AbstractMaps **)pAVar8;
        } while (*(long *)pAVar9 != lVar11);
      }
    }
    else {
      do {
        pAVar9 = pAVar8;
        pAVar8 = *(AbstractMaps **)pAVar9;
      } while (*(AbstractMaps **)pAVar9 != (AbstractMaps *)0x0);
    }
  } while( true );
}

