
/* v8::internal::compiler::GraphTrimmer::TrimGraph() */

void __thiscall v8::internal::compiler::GraphTrimmer::TrimGraph(GraphTrimmer *this)

{
  Use *pUVar1;
  long *plVar2;
  Use *pUVar3;
  char cVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  Zone *pZVar8;
  Node *pNVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  Node *pNVar18;
  long lVar19;
  Use *pUVar20;
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
  
  lVar16 = *(long *)(*(long *)this + 0x10);
  if (*(uint *)(this + 8) < *(uint *)(lVar16 + 0x10)) {
    plVar15 = *(long **)(this + 0x18);
  }
  else {
    *(uint *)(lVar16 + 0x10) = *(uint *)(this + 8) + 1;
    plVar15 = *(long **)(this + 0x18);
    if (plVar15 == *(long **)(this + 0x20)) {
      lVar19 = (long)plVar15 - *(long *)(this + 0x10) >> 3;
      uVar17 = lVar19 + 1;
      if (uVar17 >> 0x1c != 0) {
LAB_016ca904:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = (long)*(long **)(this + 0x20) - *(long *)(this + 0x10);
      uVar12 = lVar7 >> 2;
      if (uVar17 <= uVar12) {
        uVar17 = uVar12;
      }
      if (0x7fffffe < (ulong)(lVar7 >> 3)) {
        uVar17 = 0xfffffff;
      }
      if (uVar17 == 0) {
        lVar7 = 0;
      }
      else {
        pZVar8 = *(Zone **)(this + 0x28);
        uVar12 = uVar17 * 8;
        lVar7 = *(long *)(pZVar8 + 0x10);
        if (uVar12 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar7) ||
            uVar12 - (*(long *)(pZVar8 + 0x18) - lVar7) == 0) {
          *(ulong *)(pZVar8 + 0x10) = lVar7 + uVar12;
        }
        else {
          lVar7 = Zone::NewExpand(pZVar8,uVar12);
        }
      }
      plVar10 = (long *)(lVar7 + lVar19 * 8);
      plVar15 = plVar10 + 1;
      *plVar10 = lVar16;
      plVar5 = *(long **)(this + 0x10);
      plVar13 = *(long **)(this + 0x18);
      while (plVar13 != plVar5) {
        plVar13 = plVar13 + -1;
        plVar10 = plVar10 + -1;
        *plVar10 = *plVar13;
      }
      *(long **)(this + 0x10) = plVar10;
      *(long **)(this + 0x18) = plVar15;
      *(ulong *)(this + 0x20) = lVar7 + uVar17 * 8;
    }
    else {
      *plVar15 = lVar16;
      plVar15 = (long *)(*(long *)(this + 0x18) + 8);
      *(long **)(this + 0x18) = plVar15;
    }
  }
  plVar10 = *(long **)(this + 0x10);
  if (plVar15 != plVar10) {
    uVar17 = 0;
    do {
      plVar5 = (long *)(plVar10[uVar17] + 0x20);
      uVar6 = *(byte *)(plVar10[uVar17] + 0x17) & 0xf;
      if (uVar6 == 0xf) {
        uVar6 = *(uint *)(*plVar5 + 8);
        plVar5 = (long *)(*plVar5 + 0x10);
      }
      if (uVar6 != 0) {
        plVar10 = plVar5 + (int)uVar6;
        do {
          lVar16 = *plVar5;
          if (*(uint *)(lVar16 + 0x10) <= *(uint *)(this + 8)) {
            *(uint *)(lVar16 + 0x10) = *(uint *)(this + 8) + 1;
            plVar15 = *(long **)(this + 0x18);
            if (plVar15 == *(long **)(this + 0x20)) {
              lVar19 = (long)plVar15 - *(long *)(this + 0x10) >> 3;
              uVar12 = lVar19 + 1;
              if (uVar12 >> 0x1c != 0) goto LAB_016ca904;
              lVar7 = (long)*(long **)(this + 0x20) - *(long *)(this + 0x10);
              uVar11 = lVar7 >> 2;
              if (uVar12 <= uVar11) {
                uVar12 = uVar11;
              }
              if (0x7fffffe < (ulong)(lVar7 >> 3)) {
                uVar12 = 0xfffffff;
              }
              if (uVar12 == 0) {
                lVar7 = 0;
              }
              else {
                pZVar8 = *(Zone **)(this + 0x28);
                uVar11 = uVar12 * 8;
                lVar7 = *(long *)(pZVar8 + 0x10);
                if (uVar11 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar7) ||
                    uVar11 - (*(long *)(pZVar8 + 0x18) - lVar7) == 0) {
                  *(ulong *)(pZVar8 + 0x10) = lVar7 + uVar11;
                }
                else {
                  lVar7 = Zone::NewExpand(pZVar8,uVar11);
                }
              }
              plVar13 = (long *)(lVar7 + lVar19 * 8);
              plVar15 = plVar13 + 1;
              *plVar13 = lVar16;
              plVar2 = *(long **)(this + 0x10);
              plVar14 = *(long **)(this + 0x18);
              while (plVar14 != plVar2) {
                plVar14 = plVar14 + -1;
                plVar13 = plVar13 + -1;
                *plVar13 = *plVar14;
              }
              *(long **)(this + 0x10) = plVar13;
              *(long **)(this + 0x18) = plVar15;
              *(ulong *)(this + 0x20) = lVar7 + uVar12 * 8;
            }
            else {
              *plVar15 = lVar16;
              plVar15 = (long *)(*(long *)(this + 0x18) + 8);
              *(long **)(this + 0x18) = plVar15;
            }
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar10);
      }
      plVar10 = *(long **)(this + 0x10);
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulong)((long)plVar15 - (long)plVar10 >> 3));
    if (plVar10 != plVar15) {
      do {
        pNVar9 = (Node *)*plVar10;
        pUVar20 = *(Use **)(pNVar9 + 0x18);
        while (pUVar3 = pUVar20, pUVar3 != (Use *)0x0) {
          uVar6 = *(uint *)(pUVar3 + 0x10);
          pUVar20 = *(Use **)pUVar3;
          uVar17 = (ulong)(uVar6 >> 1);
          pUVar1 = pUVar3 + uVar17 * 0x18 + 0x18;
          lVar16 = 0x10;
          if ((uVar6 & 1) != 0) {
            lVar16 = 0x20;
          }
          pNVar18 = (Node *)pUVar1;
          if ((uVar6 & 1) == 0) {
            pNVar18 = *(Node **)pUVar1;
          }
          if (*(uint *)(pNVar18 + 0x10) <= *(uint *)(this + 8)) {
            if (FLAG_trace_turbo_trimming != '\0') {
              local_168 = (undefined **)0x1ca1178;
              local_108[0] = (undefined **)0x1ca11a0;
              std::__ndk1::ios_base::init((ios_base *)local_108,(AndroidLogStream *)&local_160);
              local_78 = 0xffffffff;
              local_80 = 0;
              local_160 = &PTR__basic_streambuf_01c671a8;
              local_168 = &PTR__StdoutStream_01ca1128;
              local_108[0] = &PTR__StdoutStream_01ca1150;
              std::__ndk1::locale::locale(alStack_158);
              uStack_138 = 0;
              local_140 = 0;
              uStack_128 = 0;
              uStack_130 = 0;
              uStack_148 = 0;
              local_150 = 0;
              local_160 = &PTR__AndroidLogStream_01cbc008;
              local_120 = 0;
              uStack_118 = 0;
              local_110 = 0;
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_168,"DeadLink: ",10);
              compiler::operator<<((basic_ostream *)&local_168,pNVar18);
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_168,"(",1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,
                         *(uint *)(pUVar3 + 0x10) >> 1);
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_168,") -> ",5);
              compiler::operator<<((basic_ostream *)&local_168,pNVar9);
              std::__ndk1::ios_base::getloc();
              plVar5 = (long *)std::__ndk1::locale::use_facet
                                         (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
              cVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
              std::__ndk1::locale::~locale(alStack_70);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar4);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
              local_168 = &PTR__StdoutStream_01ca1128;
              local_108[0] = &PTR__StdoutStream_01ca1150;
              AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
              std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
            }
            if (*(Node **)(pUVar1 + uVar17 * 8 + lVar16) != (Node *)0x0) {
              Node::RemoveUse(*(Node **)(pUVar1 + uVar17 * 8 + lVar16),pUVar3);
              *(undefined8 *)(pUVar1 + uVar17 * 8 + lVar16) = 0;
            }
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar15);
    }
  }
  return;
}

