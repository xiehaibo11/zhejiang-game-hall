
/* cocos2d::extension::Manifest::loadVersion(rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> const&) */

void __thiscall cocos2d::extension::Manifest::loadVersion(Manifest *this,GenericDocument *param_1)

{
  int *piVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  void *__src;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  int *piVar16;
  long lVar17;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  piVar8 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar13 = (ulong)uVar3;
  piVar11 = piVar8 + uVar13 * 0xc;
  piVar12 = piVar8;
  if (uVar3 != 0) {
    lVar17 = uVar13 * 0x30;
    piVar9 = piVar8;
    do {
      iVar5 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar5 == 0x11) {
        piVar16 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar16 = piVar9;
        }
        piVar12 = piVar9;
                    /* try { // try from 00dfa620 to 00efa627 has its CatchHandler @ 00dfa8c8 */
                    /* try { // try from 00dfa628 to 00efa697 has its CatchHandler @ 00dfa500 */
        if ((piVar16 == (int *)"remoteManifestUrl") ||
           (iVar5 = memcmp("remoteManifestUrl",piVar16,0x11), iVar5 == 0)) break;
      }
      lVar17 = lVar17 + -0x30;
      piVar9 = piVar9 + 0xc;
      piVar12 = piVar11;
    } while (lVar17 != 0);
  }
  piVar9 = (int *)&rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::
                   operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                   ::buffer;
  if (piVar11 != piVar12) {
    if (uVar3 == 0) {
LAB_00dfa6b0:
                    /* try { // try from 00dfa6b0 to 00efa6bb has its CatchHandler @ 00dfa8f4 */
      if (piVar8 != piVar11) {
        if ((*(byte *)((long)piVar8 + 0x2f) >> 2 & 1) == 0) goto LAB_00dfa794;
        uVar3 = *(uint *)param_1;
                    /* try { // try from 00dfa6c8 to 00efa6d3 has its CatchHandler @ 00dfa8e4 */
        piVar12 = *(int **)(param_1 + 8);
        piVar8 = piVar12;
        if (uVar3 == 0) {
LAB_00dfa748:
                    /* try { // try from 00dfa750 to 00efa75b has its CatchHandler @ 00dfa8ec */
          if (piVar8 == piVar12 + (ulong)uVar3 * 0xc) goto LAB_00dfa768;
          piVar12 = piVar8 + 6;
          if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00dfa774;
        }
        else {
          lVar17 = (ulong)uVar3 * 0x30;
                    /* try { // try from 00dfa6dc to 00efa6e7 has its CatchHandler @ 00dfa94c */
          do {
                    /* try { // try from 00dfa6f4 to 00efa6ff has its CatchHandler @ 00dfa8f8 */
            iVar5 = *piVar8;
            if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
              iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
            }
                    /* try { // try from 00dfa70c to 00efa717 has its CatchHandler @ 00dfa8e8 */
            if (iVar5 == 0x11) {
              piVar11 = *(int **)(piVar8 + 2);
              if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                piVar11 = piVar8;
              }
                    /* try { // try from 00dfa720 to 00efa72b has its CatchHandler @ 00dfa950 */
              if ((piVar11 == (int *)"remoteManifestUrl") ||
                 (iVar5 = memcmp("remoteManifestUrl",piVar11,0x11), iVar5 == 0)) goto LAB_00dfa748;
            }
            lVar17 = lVar17 + -0x30;
            piVar8 = piVar8 + 0xc;
          } while (lVar17 != 0);
LAB_00dfa768:
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
          piVar12 = piVar9;
LAB_00dfa774:
          piVar12 = *(int **)(piVar12 + 2);
        }
                    /* try { // try from 00dfa77c to 00efa787 has its CatchHandler @ 00dfa900 */
        sVar6 = strlen((char *)piVar12);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x60),(char *)piVar12,sVar6);
        goto LAB_00dfa794;
      }
    }
    else {
      lVar17 = uVar13 * 0x30;
      do {
        iVar5 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar5 == 0x11) {
          piVar12 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar12 = piVar8;
          }
                    /* try { // try from 00dfa698 to 00efa6a3 has its CatchHandler @ 00dfa948 */
          if ((piVar12 == (int *)"remoteManifestUrl") ||
             (iVar5 = memcmp("remoteManifestUrl",piVar12,0x11), iVar5 == 0)) goto LAB_00dfa6b0;
        }
        lVar17 = lVar17 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar17 != 0);
    }
                    /* try { // try from 00dfa738 to 00efa743 has its CatchHandler @ 00dfa8fc */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00dfa794:
                    /* try { // try from 00dfa794 to 00efa79f has its CatchHandler @ 00dfa8f0 */
  piVar8 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar13 = (ulong)uVar3;
  piVar11 = piVar8 + uVar13 * 0xc;
  piVar12 = piVar8;
  if (uVar3 != 0) {
                    /* try { // try from 00dfa7bc to 00efa7c3 has its CatchHandler @ 00dfa90c */
    lVar17 = uVar13 * 0x30;
    piVar16 = piVar8;
                    /* try { // try from 00dfa7c4 to 00efa7cf has its CatchHandler @ 00dfa958 */
    do {
                    /* try { // try from 00dfa7dc to 00efa7e7 has its CatchHandler @ 00dfa930 */
      iVar5 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
                    /* try { // try from 00dfa7f0 to 00efa82b has its CatchHandler @ 00dfa958 */
      if (iVar5 == 0x10) {
        piVar1 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar16;
        }
        piVar12 = piVar16;
        if ((piVar1 == (int *)"remoteVersionUrl") ||
           (iVar5 = memcmp("remoteVersionUrl",piVar1,0x10), iVar5 == 0)) break;
      }
      lVar17 = lVar17 + -0x30;
                    /* try { // try from 00dfa7d0 to 00efa7db has its CatchHandler @ 00dfa92c */
      piVar16 = piVar16 + 0xc;
      piVar12 = piVar11;
    } while (lVar17 != 0);
  }
  if (piVar11 != piVar12) {
                    /* try { // try from 00dfa82c to 00efa9af has its CatchHandler @ 00dfa500 */
    if (uVar3 == 0) {
LAB_00dfa890:
      if (piVar8 != piVar11) {
        if ((*(byte *)((long)piVar8 + 0x2f) >> 2 & 1) == 0) goto LAB_00dfa974;
        uVar3 = *(uint *)param_1;
        piVar12 = *(int **)(param_1 + 8);
        piVar8 = piVar12;
        if (uVar3 == 0) {
LAB_00dfa928:
                    /* catch() { ... } // from try @ 00dfa7d0 with catch @ 00dfa92c */
                    /* catch() { ... } // from try @ 00dfa7dc with catch @ 00dfa930 */
          if (piVar8 == piVar12 + (ulong)uVar3 * 0xc) goto LAB_00dfa948;
          piVar12 = piVar8 + 6;
          if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00dfa954;
        }
        else {
          lVar17 = (ulong)uVar3 * 0x30;
          do {
            iVar5 = *piVar8;
                    /* catch() { ... } // from try @ 00dfa6c8 with catch @ 00dfa8e4 */
            if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
              iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
            }
                    /* catch() { ... } // from try @ 00dfa70c with catch @ 00dfa8e8 */
                    /* catch() { ... } // from try @ 00dfa750 with catch @ 00dfa8ec */
            if (iVar5 == 0x10) {
                    /* catch() { ... } // from try @ 00dfa794 with catch @ 00dfa8f0 */
                    /* catch() { ... } // from try @ 00dfa6b0 with catch @ 00dfa8f4 */
              piVar11 = *(int **)(piVar8 + 2);
                    /* catch() { ... } // from try @ 00dfa6f4 with catch @ 00dfa8f8 */
              if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                piVar11 = piVar8;
              }
                    /* catch() { ... } // from try @ 00dfa738 with catch @ 00dfa8fc */
                    /* catch() { ... } // from try @ 00dfa77c with catch @ 00dfa900 */
                    /* catch() { ... } // from try @ 00dfa7bc with catch @ 00dfa90c */
              if ((piVar11 == (int *)"remoteVersionUrl") ||
                 (iVar5 = memcmp("remoteVersionUrl",piVar11,0x10), iVar5 == 0)) goto LAB_00dfa928;
            }
            lVar17 = lVar17 + -0x30;
                    /* catch() { ... } // from try @ 00dfa620 with catch @ 00dfa8c8 */
            piVar8 = piVar8 + 0xc;
          } while (lVar17 != 0);
LAB_00dfa948:
                    /* catch() { ... } // from try @ 00dfa698 with catch @ 00dfa948 */
                    /* catch() { ... } // from try @ 00dfa6dc with catch @ 00dfa94c */
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
                    /* catch() { ... } // from try @ 00dfa720 with catch @ 00dfa950 */
          DAT_01785a60 = 0;
          piVar12 = piVar9;
LAB_00dfa954:
                    /* catch() { ... } // from try @ 00dfa764 with catch @ 00dfa954 */
          piVar12 = *(int **)(piVar12 + 2);
        }
                    /* catch() { ... } // from try @ 00dfa7c4 with catch @ 00dfa958
                       catch() { ... } // from try @ 00dfa7f0 with catch @ 00dfa958 */
        sVar6 = strlen((char *)piVar12);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x78),(char *)piVar12,sVar6);
        goto LAB_00dfa974;
      }
    }
    else {
      lVar17 = uVar13 * 0x30;
      do {
        iVar5 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar5 == 0x10) {
          piVar12 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar12 = piVar8;
          }
          if ((piVar12 == (int *)"remoteVersionUrl") ||
             (iVar5 = memcmp("remoteVersionUrl",piVar12,0x10), iVar5 == 0)) goto LAB_00dfa890;
        }
        lVar17 = lVar17 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar17 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00dfa974:
  piVar8 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar13 = (ulong)uVar3;
  piVar11 = piVar8 + uVar13 * 0xc;
  piVar12 = piVar8;
  if (uVar3 != 0) {
    lVar17 = uVar13 * 0x30;
    piVar16 = piVar8;
    do {
                    /* try { // try from 00dfa9b8 to 00efaac3 has its CatchHandler @ 00dfa9b8
                       catch() { ... } // from try @ 00dfa9b8 with catch @ 00dfa9b8
                       catch() { ... } // from try @ 00dfaacc with catch @ 00dfa9b8
                       catch() { ... } // from try @ 00dfab14 with catch @ 00dfa9b8 */
      iVar5 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar5 == 7) {
        piVar1 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar16;
        }
        piVar12 = piVar16;
        if ((piVar1 == (int *)0x1472d09) || (iVar5 = memcmp("version",piVar1,7), iVar5 == 0)) break;
      }
      lVar17 = lVar17 + -0x30;
      piVar16 = piVar16 + 0xc;
      piVar12 = piVar11;
    } while (lVar17 != 0);
  }
  if (piVar11 != piVar12) {
    if (uVar3 == 0) {
LAB_00dfaa70:
      if (piVar8 != piVar11) {
        if ((*(byte *)((long)piVar8 + 0x2f) >> 2 & 1) == 0) goto LAB_00dfab54;
        uVar3 = *(uint *)param_1;
        piVar12 = *(int **)(param_1 + 8);
        piVar8 = piVar12;
        if (uVar3 == 0) {
LAB_00dfab08:
                    /* catch() { ... } // from try @ 00dfaac4 with catch @ 00dfab14
                       catch() { ... } // from try @ 00dfab04 with catch @ 00dfab14
                       try { // try from 00dfab14 to 00efab2f has its CatchHandler @ 00dfa9b8 */
          if (piVar8 == piVar12 + (ulong)uVar3 * 0xc) goto LAB_00dfab28;
          piVar12 = piVar8 + 6;
          if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00dfab34;
        }
        else {
          lVar17 = (ulong)uVar3 * 0x30;
          do {
            iVar5 = *piVar8;
                    /* try { // try from 00dfaac4 to 00efaacb has its CatchHandler @ 00dfab14 */
            if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
              iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
            }
                    /* try { // try from 00dfaacc to 00efab03 has its CatchHandler @ 00dfa9b8 */
            if (iVar5 == 7) {
              piVar11 = *(int **)(piVar8 + 2);
              if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                piVar11 = piVar8;
              }
              if ((piVar11 == (int *)0x1472d09) || (iVar5 = memcmp("version",piVar11,7), iVar5 == 0)
                 ) goto LAB_00dfab08;
            }
            lVar17 = lVar17 + -0x30;
            piVar8 = piVar8 + 0xc;
          } while (lVar17 != 0);
LAB_00dfab28:
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
                    /* try { // try from 00dfab30 to 00efac23 has its CatchHandler @ 00dfab30
                       catch() { ... } // from try @ 00dfab30 with catch @ 00dfab30
                       catch() { ... } // from try @ 00dfac2c with catch @ 00dfab30
                       catch() { ... } // from try @ 00dfac6c with catch @ 00dfab30 */
          DAT_01785a60 = 0;
          piVar12 = piVar9;
LAB_00dfab34:
          piVar12 = *(int **)(piVar12 + 2);
        }
        sVar6 = strlen((char *)piVar12);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x90),(char *)piVar12,sVar6);
        goto LAB_00dfab54;
      }
    }
    else {
      lVar17 = uVar13 * 0x30;
      do {
        iVar5 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar5 == 7) {
          piVar12 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar12 = piVar8;
          }
          if ((piVar12 == (int *)0x1472d09) || (iVar5 = memcmp("version",piVar12,7), iVar5 == 0))
          goto LAB_00dfaa70;
        }
        lVar17 = lVar17 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar17 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00dfab54:
  piVar12 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar13 = (ulong)uVar3;
  piVar11 = piVar12 + uVar13 * 0xc;
  piVar8 = piVar12;
  if (uVar3 == 0) {
LAB_00dfabdc:
    if (piVar11 != piVar8) {
      if (uVar3 == 0) {
LAB_00dfac48:
        if (piVar12 != piVar11) {
          if ((*(short *)((long)piVar12 + 0x2e) == 3) && (piVar12[6] != 0)) {
                    /* try { // try from 00dfac64 to 00efac6b has its CatchHandler @ 00dfac6c */
                    /* catch() { ... } // from try @ 00dfac24 with catch @ 00dfac6c
                       catch() { ... } // from try @ 00dfac64 with catch @ 00dfac6c
                       try { // try from 00dfac6c to 00efac87 has its CatchHandler @ 00dfab30 */
            pcVar15 = (char *)(*(long *)(piVar12 + 8) + 0x18);
            if ((*(byte *)(*(long *)(piVar12 + 8) + 0x17) >> 4 & 1) == 0) goto LAB_00dfacb4;
LAB_00dfacbc:
            pcVar7 = pcVar15 + -0x18;
            pcVar14 = pcVar15;
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>(&local_80,pcVar7);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>(local_98,"0");
              if ((*(ushort *)(pcVar14 + 0x16) >> 10 & 1) != 0) {
                pcVar15 = pcVar14;
                if ((*(ushort *)(pcVar14 + 0x16) >> 0xc & 1) == 0) {
                  pcVar15 = *(char **)(pcVar14 + 8);
                }
                sVar6 = strlen(pcVar15);
                    /* catch() { ... } // from try @ 00dfad1c with catch @ 00dfacf8 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_98,pcVar15,sVar6);
              }
              __src = local_70;
              uVar13 = uStack_78;
              puVar2 = *(ulong **)(this + 0xb0);
              if (puVar2 == *(ulong **)(this + 0xb8)) {
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)(this + 0xa8),(basic_string *)&local_80);
              }
              else {
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[2] = 0;
                    /* try { // try from 00dfad14 to 00efad1b has its CatchHandler @ 00dfad40 */
                if (((byte)local_80 & 1) == 0) {
                    /* try { // try from 00dfad1c to 00efad47 has its CatchHandler @ 00dfacf8 */
                  puVar2[2] = (ulong)local_70;
                  puVar2[1] = uStack_78;
                  *puVar2 = CONCAT71(uStack_7f,local_80);
                }
                else {
                    /* catch() { ... } // from try @ 00dfad14 with catch @ 00dfad40 */
                  if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_78 < 0x17) {
                    __dest = (void *)((long)puVar2 + 1);
                    *(char *)puVar2 = (char)((int)uStack_78 << 1);
                    if (uStack_78 != 0) goto LAB_00dfadac;
                  }
                  else {
                    uVar10 = uStack_78 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar10);
                    puVar2[1] = uVar13;
                    puVar2[2] = (ulong)__dest;
                    *puVar2 = uVar10 | 1;
LAB_00dfadac:
                    memcpy(__dest,__src,uVar13);
                  }
                    /* try { // try from 00dfadb8 to 00efadef has its CatchHandler @ 00dfadb8
                       catch() { ... } // from try @ 00dfadb8 with catch @ 00dfadb8
                       catch() { ... } // from try @ 00dfae14 with catch @ 00dfadb8 */
                  *(undefined1 *)((long)__dest + uVar13) = 0;
                }
                *(ulong **)(this + 0xb0) = puVar2 + 3;
              }
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                          *)(this + 0xc0),(basic_string *)&local_80,(basic_string *)&local_80,
                         (basic_string *)local_98);
              if (((byte)local_98[0] & 1) != 0) {
                operator_delete(local_88);
              }
                    /* try { // try from 00dfadf0 to 00efadfb has its CatchHandler @ 00dfae4c */
              if (((byte)local_80 & 1) != 0) {
                operator_delete(local_70);
              }
              pcVar15 = pcVar14 + 0x30;
              if (pcVar14 + 0x18 ==
                  (char *)(*(long *)(piVar12 + 8) + (ulong)(uint)piVar12[6] * 0x30)) break;
              if (((byte)pcVar14[0x2f] >> 4 & 1) != 0) goto LAB_00dfacbc;
LAB_00dfacb4:
              pcVar7 = *(char **)(pcVar15 + -0x10);
              pcVar14 = pcVar15;
            } while( true );
          }
          goto LAB_00dfae1c;
        }
      }
      else {
        lVar17 = uVar13 * 0x30;
        do {
          iVar5 = *piVar12;
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
          }
          if (iVar5 == 0xd) {
                    /* try { // try from 00dfac24 to 00efac2b has its CatchHandler @ 00dfac6c */
            piVar8 = *(int **)(piVar12 + 2);
                    /* try { // try from 00dfac2c to 00efac63 has its CatchHandler @ 00dfab30 */
            if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
              piVar8 = piVar12;
            }
            if ((piVar8 == (int *)"groupVersions") ||
               (iVar5 = memcmp("groupVersions",piVar8,0xd), iVar5 == 0)) goto LAB_00dfac48;
          }
          lVar17 = lVar17 + -0x30;
          piVar12 = piVar12 + 0xc;
        } while (lVar17 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
                    /* try { // try from 00dfae0c to 00efae13 has its CatchHandler @ 00dfae44 */
    }
  }
  else {
    lVar17 = uVar13 * 0x30;
    do {
      iVar5 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar5 == 0xd) {
        piVar16 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar16 = piVar8;
        }
        if ((piVar16 == (int *)"groupVersions") ||
           (iVar5 = memcmp("groupVersions",piVar16,0xd), iVar5 == 0)) goto LAB_00dfabdc;
      }
      lVar17 = lVar17 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar17 != 0);
  }
LAB_00dfae1c:
  piVar8 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar13 = (ulong)uVar3;
  piVar11 = piVar8 + uVar13 * 0xc;
  piVar12 = piVar8;
  if (uVar3 != 0) {
                    /* catch() { ... } // from try @ 00dfae0c with catch @ 00dfae44 */
    lVar17 = uVar13 * 0x30;
    piVar16 = piVar8;
                    /* catch() { ... } // from try @ 00dfadf0 with catch @ 00dfae4c */
    do {
                    /* try { // try from 00dfae64 to 00efae8b has its CatchHandler @ 00dfae64
                       catch() { ... } // from try @ 00dfae64 with catch @ 00dfae64
                       catch() { ... } // from try @ 00dfae98 with catch @ 00dfae64 */
      iVar5 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar5 == 0xd) {
        piVar1 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar16;
        }
                    /* try { // try from 00dfae8c to 00efae97 has its CatchHandler @ 00dfaecc */
        piVar12 = piVar16;
                    /* try { // try from 00dfae98 to 00efaee7 has its CatchHandler @ 00dfae64 */
        if ((piVar1 == (int *)"engineVersion") ||
           (iVar5 = memcmp("engineVersion",piVar1,0xd), iVar5 == 0)) break;
      }
      lVar17 = lVar17 + -0x30;
      piVar16 = piVar16 + 0xc;
      piVar12 = piVar11;
    } while (lVar17 != 0);
  }
  if (piVar11 == piVar12) goto LAB_00dfb000;
  if (uVar3 == 0) {
LAB_00dfaf18:
    if (piVar8 != piVar11) {
      if ((*(byte *)((long)piVar8 + 0x2f) >> 2 & 1) == 0) goto LAB_00dfb000;
      uVar3 = *(uint *)param_1;
      piVar12 = *(int **)(param_1 + 8);
      piVar8 = piVar12;
      if (uVar3 == 0) {
LAB_00dfafb4:
        if (piVar8 == piVar12 + (ulong)uVar3 * 0xc) goto LAB_00dfafd4;
        piVar9 = piVar8 + 6;
        if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00dfafe0;
      }
      else {
        lVar17 = (ulong)uVar3 * 0x30;
                    /* try { // try from 00dfaf44 to 00efaf4b has its CatchHandler @ 00dfafdc */
        do {
                    /* try { // try from 00dfaf5c to 00efaf67 has its CatchHandler @ 00dfafe0 */
          iVar5 = *piVar8;
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
          }
          if (iVar5 == 0xd) {
                    /* try { // try from 00dfaf80 to 00efaf8b has its CatchHandler @ 00dfb004 */
            piVar11 = *(int **)(piVar8 + 2);
            if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
              piVar11 = piVar8;
            }
                    /* try { // try from 00dfaf98 to 00efafa3 has its CatchHandler @ 00dfafe8 */
            if ((piVar11 == (int *)"engineVersion") ||
               (iVar5 = memcmp("engineVersion",piVar11,0xd), iVar5 == 0)) goto LAB_00dfafb4;
          }
          lVar17 = lVar17 + -0x30;
          piVar8 = piVar8 + 0xc;
        } while (lVar17 != 0);
LAB_00dfafd4:
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
                    /* catch() { ... } // from try @ 00dfaf44 with catch @ 00dfafdc */
        DAT_01785a60 = 0;
LAB_00dfafe0:
                    /* catch() { ... } // from try @ 00dfaf5c with catch @ 00dfafe0 */
        piVar9 = *(int **)(piVar9 + 2);
      }
                    /* catch() { ... } // from try @ 00dfaf98 with catch @ 00dfafe8 */
      sVar6 = strlen((char *)piVar9);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0xe8),(char *)piVar9,sVar6);
      goto LAB_00dfb000;
    }
  }
  else {
    lVar17 = uVar13 * 0x30;
    do {
      iVar5 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar5 == 0xd) {
                    /* catch() { ... } // from try @ 00dfafa4 with catch @ 00dfaef8 */
        piVar12 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar12 = piVar8;
        }
        if ((piVar12 == (int *)"engineVersion") ||
           (iVar5 = memcmp("engineVersion",piVar12,0xd), iVar5 == 0)) goto LAB_00dfaf18;
      }
      lVar17 = lVar17 + -0x30;
                    /* catch() { ... } // from try @ 00dfae8c with catch @ 00dfaecc */
      piVar8 = piVar8 + 0xc;
    } while (lVar17 != 0);
  }
                    /* try { // try from 00dfafa4 to 00efb04b has its CatchHandler @ 00dfaef8 */
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00dfb000:
                    /* catch() { ... } // from try @ 00dfaf80 with catch @ 00dfb004 */
  this[0x21] = (Manifest)0x1;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

