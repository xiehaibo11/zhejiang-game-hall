
/* cocos2d::extension::Manifest::loadVersion(rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> const&) */

void __thiscall cocos2d::extension::Manifest::loadVersion(Manifest *this,GenericDocument *param_1)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  Manifest MVar6;
  int iVar7;
  void *pvVar8;
  size_t sVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  void *__dest;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  char *pcVar21;
  ulong local_98 [2];
  void *local_88;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  piVar14 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)param_1;
  uVar18 = (ulong)uVar4;
  piVar15 = piVar14 + uVar18 * 0xc;
                    /* catch() { ... } // from try @ 00a55630 with catch @ 00a555cc */
  piVar17 = piVar14;
  if (uVar4 != 0) {
    lVar20 = uVar18 * 0x30;
    piVar19 = piVar14;
    do {
      iVar7 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar7 == 0x11) {
        piVar1 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar19;
        }
        piVar17 = piVar19;
                    /* try { // try from 00a55620 to 00b5562f has its CatchHandler @ 00a55704 */
        if ((piVar1 == (int *)"remoteManifestUrl") ||
           (iVar7 = memcmp("remoteManifestUrl",piVar1,0x11), iVar7 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
                    /* try { // try from 00a55630 to 00b5571f has its CatchHandler @ 00a555cc */
      piVar19 = piVar19 + 0xc;
      piVar17 = piVar15;
    } while (lVar20 != 0);
  }
  if (piVar15 != piVar17) {
    if (uVar4 == 0) {
LAB_00a556b0:
      if (piVar14 != piVar15) {
        if ((*(byte *)((long)piVar14 + 0x2f) >> 2 & 1) == 0) goto LAB_00a557a0;
        uVar4 = *(uint *)param_1;
        piVar17 = *(int **)(param_1 + 8);
        piVar14 = piVar17;
        if (uVar4 == 0) {
LAB_00a55750:
          if (piVar14 == piVar17 + (ulong)uVar4 * 0xc) goto LAB_00a55770;
          piVar17 = piVar14 + 6;
          if ((*(byte *)((long)piVar14 + 0x2f) >> 4 & 1) == 0) goto LAB_00a55780;
        }
        else {
          lVar20 = (ulong)uVar4 * 0x30;
          do {
            iVar7 = *piVar14;
            if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
            }
            if (iVar7 == 0x11) {
                    /* catch() { ... } // from try @ 00a55620 with catch @ 00a55704 */
              piVar15 = *(int **)(piVar14 + 2);
              if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                piVar15 = piVar14;
              }
                    /* try { // try from 00a55720 to 00b55773 has its CatchHandler @ 00a55720
                       catch() { ... } // from try @ 00a55720 with catch @ 00a55720
                       catch() { ... } // from try @ 00a558e0 with catch @ 00a55720 */
              if ((piVar15 == (int *)"remoteManifestUrl") ||
                 (iVar7 = memcmp("remoteManifestUrl",piVar15,0x11), iVar7 == 0)) goto LAB_00a55750;
            }
            lVar20 = lVar20 + -0x30;
            piVar14 = piVar14 + 0xc;
          } while (lVar20 != 0);
LAB_00a55770:
                    /* try { // try from 00a55774 to 00b5578b has its CatchHandler @ 00a5595c */
          piVar17 = (int *)&rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::
                            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                            ::buffer;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
LAB_00a55780:
          piVar17 = *(int **)(piVar17 + 2);
        }
        sVar9 = strlen((char *)piVar17);
                    /* try { // try from 00a55794 to 00b5579f has its CatchHandler @ 00a55958 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x48),(char *)piVar17,sVar9);
        goto LAB_00a557a0;
      }
    }
    else {
      lVar20 = uVar18 * 0x30;
      do {
        iVar7 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
        if (iVar7 == 0x11) {
          piVar17 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar14;
          }
          if ((piVar17 == (int *)"remoteManifestUrl") ||
             (iVar7 = memcmp("remoteManifestUrl",piVar17,0x11), iVar7 == 0)) goto LAB_00a556b0;
        }
        lVar20 = lVar20 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar20 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a557a0:
                    /* try { // try from 00a557a0 to 00b557ab has its CatchHandler @ 00a55954 */
  piVar14 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)param_1;
  uVar18 = (ulong)uVar4;
                    /* try { // try from 00a557ac to 00b558df has its CatchHandler @ 00a5596c */
  piVar15 = piVar14 + uVar18 * 0xc;
  piVar17 = piVar14;
  if (uVar4 != 0) {
    lVar20 = uVar18 * 0x30;
    piVar19 = piVar14;
    do {
      iVar7 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar7 == 0x10) {
        piVar1 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar19;
        }
        piVar17 = piVar19;
        if ((piVar1 == (int *)"remoteVersionUrl") ||
           (iVar7 = memcmp("remoteVersionUrl",piVar1,0x10), iVar7 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
      piVar19 = piVar19 + 0xc;
      piVar17 = piVar15;
    } while (lVar20 != 0);
  }
  if (piVar15 != piVar17) {
    if (uVar4 == 0) {
LAB_00a55898:
      if (piVar14 != piVar15) {
        if ((*(byte *)((long)piVar14 + 0x2f) >> 2 & 1) == 0) goto LAB_00a55988;
        uVar4 = *(uint *)param_1;
        piVar17 = *(int **)(param_1 + 8);
        piVar14 = piVar17;
        if (uVar4 == 0) {
LAB_00a55938:
          if (piVar14 == piVar17 + (ulong)uVar4 * 0xc) goto LAB_00a55958;
          piVar17 = piVar14 + 6;
          if ((*(byte *)((long)piVar14 + 0x2f) >> 4 & 1) == 0) goto LAB_00a55968;
        }
        else {
          lVar20 = (ulong)uVar4 * 0x30;
          do {
            iVar7 = *piVar14;
                    /* try { // try from 00a558e0 to 00b559c3 has its CatchHandler @ 00a55720 */
            if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
            }
            if (iVar7 == 0x10) {
              piVar15 = *(int **)(piVar14 + 2);
              if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                piVar15 = piVar14;
              }
              if ((piVar15 == (int *)"remoteVersionUrl") ||
                 (iVar7 = memcmp("remoteVersionUrl",piVar15,0x10), iVar7 == 0)) goto LAB_00a55938;
            }
            lVar20 = lVar20 + -0x30;
            piVar14 = piVar14 + 0xc;
          } while (lVar20 != 0);
LAB_00a55958:
                    /* catch() { ... } // from try @ 00a55794 with catch @ 00a55958 */
                    /* catch() { ... } // from try @ 00a55774 with catch @ 00a5595c */
          piVar17 = (int *)&rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::
                            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                            ::buffer;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
LAB_00a55968:
          piVar17 = *(int **)(piVar17 + 2);
        }
                    /* catch() { ... } // from try @ 00a557ac with catch @ 00a5596c */
        sVar9 = strlen((char *)piVar17);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x60),(char *)piVar17,sVar9);
        goto LAB_00a55988;
      }
    }
    else {
      lVar20 = uVar18 * 0x30;
      do {
        iVar7 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
        if (iVar7 == 0x10) {
          piVar17 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar14;
          }
          if ((piVar17 == (int *)"remoteVersionUrl") ||
             (iVar7 = memcmp("remoteVersionUrl",piVar17,0x10), iVar7 == 0)) goto LAB_00a55898;
        }
        lVar20 = lVar20 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar20 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a55988:
  piVar14 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)param_1;
  uVar18 = (ulong)uVar4;
  piVar15 = piVar14 + uVar18 * 0xc;
  piVar17 = piVar14;
  if (uVar4 != 0) {
    lVar20 = uVar18 * 0x30;
    piVar19 = piVar14;
    do {
                    /* try { // try from 00a559c4 to 00b55a17 has its CatchHandler @ 00a559c4
                       catch() { ... } // from try @ 00a559c4 with catch @ 00a559c4
                       catch() { ... } // from try @ 00a55b84 with catch @ 00a559c4 */
      iVar7 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar7 == 7) {
        piVar1 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar19;
        }
        piVar17 = piVar19;
        if ((piVar1 == (int *)0x194a128) || (iVar7 = memcmp("version",piVar1,7), iVar7 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
      piVar19 = piVar19 + 0xc;
      piVar17 = piVar15;
    } while (lVar20 != 0);
  }
  if (piVar15 != piVar17) {
    if (uVar4 == 0) {
LAB_00a55a80:
      if (piVar14 != piVar15) {
        if ((*(byte *)((long)piVar14 + 0x2f) >> 2 & 1) == 0) goto LAB_00a55b70;
        uVar4 = *(uint *)param_1;
        piVar17 = *(int **)(param_1 + 8);
        piVar14 = piVar17;
        if (uVar4 == 0) {
LAB_00a55b20:
          if (piVar14 == piVar17 + (ulong)uVar4 * 0xc) goto LAB_00a55b40;
          piVar17 = piVar14 + 6;
          if ((*(byte *)((long)piVar14 + 0x2f) >> 4 & 1) == 0) goto LAB_00a55b50;
        }
        else {
          lVar20 = (ulong)uVar4 * 0x30;
          do {
            iVar7 = *piVar14;
            if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
            }
            if (iVar7 == 7) {
              piVar15 = *(int **)(piVar14 + 2);
              if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                piVar15 = piVar14;
              }
              if ((piVar15 == (int *)0x194a128) || (iVar7 = memcmp("version",piVar15,7), iVar7 == 0)
                 ) goto LAB_00a55b20;
            }
            lVar20 = lVar20 + -0x30;
            piVar14 = piVar14 + 0xc;
          } while (lVar20 != 0);
LAB_00a55b40:
          piVar17 = (int *)&rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::
                            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                            ::buffer;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
LAB_00a55b50:
          piVar17 = *(int **)(piVar17 + 2);
        }
        sVar9 = strlen((char *)piVar17);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x78),(char *)piVar17,sVar9);
        goto LAB_00a55b70;
      }
    }
    else {
                    /* try { // try from 00a55a18 to 00b55a2f has its CatchHandler @ 00a55c00 */
      lVar20 = uVar18 * 0x30;
      do {
                    /* try { // try from 00a55a38 to 00b55a43 has its CatchHandler @ 00a55bfc */
        iVar7 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
                    /* try { // try from 00a55a44 to 00b55a4f has its CatchHandler @ 00a55bf8 */
        if (iVar7 == 7) {
                    /* try { // try from 00a55a50 to 00b55b83 has its CatchHandler @ 00a55c10 */
          piVar17 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar14;
          }
          if ((piVar17 == (int *)0x194a128) || (iVar7 = memcmp("version",piVar17,7), iVar7 == 0))
          goto LAB_00a55a80;
        }
        lVar20 = lVar20 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar20 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a55b70:
  piVar14 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)param_1;
  uVar18 = (ulong)uVar4;
  piVar15 = piVar14 + uVar18 * 0xc;
                    /* try { // try from 00a55b84 to 00b55c67 has its CatchHandler @ 00a559c4 */
  piVar17 = piVar14;
  if (uVar4 != 0) {
    lVar20 = uVar18 * 0x30;
    piVar19 = piVar14;
    do {
      iVar7 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar7 == 0xd) {
        piVar1 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar19;
        }
        piVar17 = piVar19;
        if ((piVar1 == (int *)"groupVersions") ||
           (iVar7 = memcmp("groupVersions",piVar1,0xd), iVar7 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
      piVar19 = piVar19 + 0xc;
      piVar17 = piVar15;
    } while (lVar20 != 0);
  }
                    /* catch() { ... } // from try @ 00a55a44 with catch @ 00a55bf8 */
  if (piVar15 != piVar17) {
                    /* catch() { ... } // from try @ 00a55a38 with catch @ 00a55bfc */
    if (uVar4 == 0) {
LAB_00a55c68:
                    /* try { // try from 00a55c68 to 00b55cbb has its CatchHandler @ 00a55c68
                       catch() { ... } // from try @ 00a55c68 with catch @ 00a55c68
                       catch() { ... } // from try @ 00a55e48 with catch @ 00a55c68 */
      if (piVar14 != piVar15) {
        if ((*(short *)((long)piVar14 + 0x2e) == 3) && (piVar14[6] != 0)) {
          pcVar21 = (char *)(*(long *)(piVar14 + 8) + 0x18);
          do {
            if (((byte)pcVar21[-1] >> 4 & 1) == 0) {
              pcVar16 = *(char **)(pcVar21 + -0x10);
            }
            else {
              pcVar16 = pcVar21 + -0x18;
            }
            local_80 = 0;
            sStack_78 = 0;
                    /* try { // try from 00a55cbc to 00b55cd3 has its CatchHandler @ 00a55ec4 */
            local_70 = (void *)0x0;
            sVar9 = strlen(pcVar16);
            if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar9 < 0x17) {
                    /* try { // try from 00a55cdc to 00b55ce7 has its CatchHandler @ 00a55ec0 */
              local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar9 << 1));
              pvVar8 = (void *)((ulong)&local_80 | 1);
              if (sVar9 != 0) goto LAB_00a55d0c;
            }
            else {
              uVar18 = sVar9 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a55cf4 to 00b55e47 has its CatchHandler @ 00a55ed4 */
              pvVar8 = operator_new(uVar18);
              local_80 = uVar18 | 1;
              sStack_78 = sVar9;
              local_70 = pvVar8;
LAB_00a55d0c:
              memcpy(pvVar8,pcVar16,sVar9);
            }
            *(undefined1 *)((long)pvVar8 + sVar9) = 0;
            local_98[1] = 0;
            local_88 = (void *)0x0;
            local_98[0] = 0x3002;
            if ((*(ushort *)(pcVar21 + 0x16) >> 10 & 1) != 0) {
              pcVar16 = pcVar21;
              if ((*(ushort *)(pcVar21 + 0x16) >> 0xc & 1) == 0) {
                pcVar16 = *(char **)(pcVar21 + 8);
              }
              sVar9 = strlen(pcVar16);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)local_98,pcVar16,sVar9);
            }
            pvVar8 = local_70;
            sVar9 = sStack_78;
            puVar3 = *(ulong **)(this + 0x98);
            if (puVar3 == *(ulong **)(this + 0xa0)) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)(this + 0x90),(basic_string *)&local_80);
            }
            else {
              puVar3[1] = 0;
              puVar3[2] = 0;
              *puVar3 = 0;
              if ((local_80 & 1) == 0) {
                puVar3[2] = (ulong)local_70;
                puVar3[1] = sStack_78;
                *puVar3 = local_80;
              }
              else {
                if (0xffffffffffffffef < sStack_78) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (sStack_78 < 0x17) {
                  __dest = (void *)((long)puVar3 + 1);
                  *(char *)puVar3 = (char)((int)sStack_78 << 1);
                  if (sStack_78 != 0) goto LAB_00a55de8;
                }
                else {
                  uVar18 = sStack_78 + 0x10 & 0xfffffffffffffff0;
                  __dest = operator_new(uVar18);
                  puVar3[1] = sVar9;
                  puVar3[2] = (ulong)__dest;
                  *puVar3 = uVar18 | 1;
LAB_00a55de8:
                  memcpy(__dest,pvVar8,sVar9);
                }
                *(undefined1 *)((long)__dest + sVar9) = 0;
              }
              *(long *)(this + 0x98) = *(long *)(this + 0x98) + 0x18;
            }
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
                      ((basic_string *)(this + 0xa8),(basic_string *)&local_80,
                       (basic_string *)&local_80);
            if ((local_98[0] & 1) != 0) {
              operator_delete(local_88);
            }
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
                    /* try { // try from 00a55e48 to 00b55f2b has its CatchHandler @ 00a55c68 */
            pcVar16 = pcVar21 + 0x18;
            pcVar21 = pcVar21 + 0x30;
          } while (pcVar16 != (char *)(*(long *)(piVar14 + 8) + (ulong)(uint)piVar14[6] * 0x30));
        }
        goto LAB_00a55e70;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a55a18 with catch @ 00a55c00 */
      lVar20 = uVar18 * 0x30;
                    /* catch() { ... } // from try @ 00a55a50 with catch @ 00a55c10 */
      do {
        iVar7 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
        if (iVar7 == 0xd) {
          piVar17 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar14;
          }
          if ((piVar17 == (int *)"groupVersions") ||
             (iVar7 = memcmp("groupVersions",piVar17,0xd), iVar7 == 0)) goto LAB_00a55c68;
        }
        lVar20 = lVar20 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar20 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a55e70:
  piVar14 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)param_1;
  uVar18 = (ulong)uVar4;
  piVar15 = piVar14 + uVar18 * 0xc;
  piVar17 = piVar14;
  if (uVar4 != 0) {
    lVar20 = uVar18 * 0x30;
    piVar19 = piVar14;
    do {
      iVar7 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
                    /* catch() { ... } // from try @ 00a55ce8 with catch @ 00a55ebc */
      if (iVar7 == 0xd) {
                    /* catch() { ... } // from try @ 00a55cdc with catch @ 00a55ec0 */
                    /* catch() { ... } // from try @ 00a55cbc with catch @ 00a55ec4 */
        piVar1 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar19;
        }
        piVar17 = piVar19;
                    /* catch() { ... } // from try @ 00a55cf4 with catch @ 00a55ed4 */
        if ((piVar1 == (int *)"engineVersion") ||
           (iVar7 = memcmp("engineVersion",piVar1,0xd), iVar7 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
      piVar19 = piVar19 + 0xc;
      piVar17 = piVar15;
    } while (lVar20 != 0);
  }
  if (piVar15 != piVar17) {
    if (uVar4 == 0) {
LAB_00a55f68:
      if (piVar14 != piVar15) {
        if ((*(byte *)((long)piVar14 + 0x2f) >> 2 & 1) == 0) goto LAB_00a56058;
        uVar4 = *(uint *)param_1;
        piVar17 = *(int **)(param_1 + 8);
                    /* try { // try from 00a55f80 to 00b55f97 has its CatchHandler @ 00a56164 */
        piVar14 = piVar17;
        if (uVar4 == 0) {
LAB_00a56008:
          if (piVar14 == piVar17 + (ulong)uVar4 * 0xc) goto LAB_00a56028;
          piVar17 = piVar14 + 6;
          if ((*(byte *)((long)piVar14 + 0x2f) >> 4 & 1) == 0) goto LAB_00a56038;
        }
        else {
          lVar20 = (ulong)uVar4 * 0x30;
          do {
                    /* try { // try from 00a55fa0 to 00b55fab has its CatchHandler @ 00a56160 */
                    /* try { // try from 00a55fac to 00b55fb7 has its CatchHandler @ 00a5615c */
            iVar7 = *piVar14;
            if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
            }
                    /* try { // try from 00a55fb8 to 00b560e7 has its CatchHandler @ 00a56174 */
            if (iVar7 == 0xd) {
              piVar15 = *(int **)(piVar14 + 2);
              if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                piVar15 = piVar14;
              }
              if ((piVar15 == (int *)"engineVersion") ||
                 (iVar7 = memcmp("engineVersion",piVar15,0xd), iVar7 == 0)) goto LAB_00a56008;
            }
            lVar20 = lVar20 + -0x30;
            piVar14 = piVar14 + 0xc;
          } while (lVar20 != 0);
LAB_00a56028:
          piVar17 = (int *)&rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::
                            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                            ::buffer;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
LAB_00a56038:
          piVar17 = *(int **)(piVar17 + 2);
        }
        sVar9 = strlen((char *)piVar17);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0xd0),(char *)piVar17,sVar9);
        goto LAB_00a56058;
      }
    }
    else {
      lVar20 = uVar18 * 0x30;
      do {
        iVar7 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar7 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
                    /* try { // try from 00a55f2c to 00b55f7f has its CatchHandler @ 00a55f2c
                       catch() { ... } // from try @ 00a55f2c with catch @ 00a55f2c
                       catch() { ... } // from try @ 00a560e8 with catch @ 00a55f2c */
        if (iVar7 == 0xd) {
          piVar17 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar14;
          }
          if ((piVar17 == (int *)"engineVersion") ||
             (iVar7 = memcmp("engineVersion",piVar17,0xd), iVar7 == 0)) goto LAB_00a55f68;
        }
        lVar20 = lVar20 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar20 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a56058:
  plVar10 = *(long **)(param_1 + 8);
  uVar4 = *(uint *)param_1;
  uVar18 = (ulong)uVar4;
  plVar11 = plVar10 + uVar18 * 6;
  plVar12 = plVar10;
  if (uVar4 != 0) {
    lVar20 = uVar18 * 0x30;
    plVar13 = plVar10;
    do {
      iVar7 = (int)*plVar13;
      if ((*(ushort *)((long)plVar13 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)plVar13 + 0x15);
      }
      if (iVar7 == 8) {
        plVar2 = (long *)plVar13[1];
        if ((*(ushort *)((long)plVar13 + 0x16) & 0x1000) != 0) {
          plVar2 = plVar13;
        }
        plVar12 = plVar13;
        if ((plVar2 == (long *)"updating") || (*plVar2 == 0x676e697461647075)) break;
      }
      lVar20 = lVar20 + -0x30;
      plVar13 = plVar13 + 6;
      plVar12 = plVar11;
    } while (lVar20 != 0);
  }
                    /* try { // try from 00a560e8 to 00b561cb has its CatchHandler @ 00a55f2c */
  if (plVar11 == plVar12) goto LAB_00a5624c;
  if (uVar4 == 0) {
LAB_00a56168:
    if (plVar10 != plVar11) {
                    /* catch() { ... } // from try @ 00a55fb8 with catch @ 00a56174 */
      if ((*(byte *)((long)plVar10 + 0x2e) >> 3 & 1) == 0) goto LAB_00a5624c;
      uVar4 = *(uint *)param_1;
      plVar12 = *(long **)(param_1 + 8);
      plVar10 = plVar12;
      if (uVar4 == 0) {
LAB_00a56214:
                    /* try { // try from 00a56220 to 00b56237 has its CatchHandler @ 00a56428 */
        if (plVar10 == plVar12 + (ulong)uVar4 * 6) goto LAB_00a56234;
        MVar6 = (Manifest)(*(short *)((long)plVar10 + 0x2e) == 10);
      }
      else {
        lVar20 = (ulong)uVar4 * 0x30;
        do {
          iVar7 = (int)*plVar10;
          if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
            iVar7 = 0x15 - *(char *)((long)plVar10 + 0x15);
          }
          if (iVar7 == 8) {
                    /* try { // try from 00a561cc to 00b5621f has its CatchHandler @ 00a561cc
                       catch() { ... } // from try @ 00a561cc with catch @ 00a561cc
                       catch() { ... } // from try @ 00a563ac with catch @ 00a561cc */
            plVar11 = (long *)plVar10[1];
            if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
              plVar11 = plVar10;
            }
            if ((plVar11 == (long *)"updating") || (*plVar11 == 0x676e697461647075))
            goto LAB_00a56214;
          }
          lVar20 = lVar20 + -0x30;
          plVar10 = plVar10 + 6;
        } while (lVar20 != 0);
LAB_00a56234:
        MVar6 = (Manifest)0x0;
                    /* try { // try from 00a56240 to 00b5624b has its CatchHandler @ 00a56424 */
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01d38c18 = 0;
        DAT_01d38c20 = 0;
      }
      this[0xe] = MVar6;
      goto LAB_00a5624c;
    }
  }
  else {
    lVar20 = uVar18 * 0x30;
    do {
      iVar7 = (int)*plVar10;
      if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)plVar10 + 0x15);
      }
      if (iVar7 == 8) {
        plVar12 = (long *)plVar10[1];
        if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
          plVar12 = plVar10;
        }
        if ((plVar12 == (long *)"updating") || (*plVar12 == 0x676e697461647075)) goto LAB_00a56168;
      }
      lVar20 = lVar20 + -0x30;
                    /* catch() { ... } // from try @ 00a55fac with catch @ 00a5615c */
      plVar10 = plVar10 + 6;
                    /* catch() { ... } // from try @ 00a55fa0 with catch @ 00a56160 */
    } while (lVar20 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
LAB_00a5624c:
                    /* try { // try from 00a5624c to 00b56257 has its CatchHandler @ 00a56420 */
  this[0xc] = (Manifest)0x1;
                    /* try { // try from 00a56258 to 00b563ab has its CatchHandler @ 00a56438 */
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

