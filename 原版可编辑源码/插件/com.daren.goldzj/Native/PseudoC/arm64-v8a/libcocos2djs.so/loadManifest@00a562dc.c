
/* cocos2d::extension::Manifest::loadManifest(rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> const&) */

void __thiscall cocos2d::extension::Manifest::loadManifest(Manifest *this,GenericDocument *param_1)

{
  int *piVar1;
  ulong *puVar2;
  Manifest MVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  basic_string *pbVar7;
  size_t sVar8;
  void *pvVar9;
  uint uVar10;
  long lVar11;
  Manifest *pMVar12;
  ulong uVar13;
  char *pcVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  ulong local_c0;
  size_t local_b8;
  void *local_b0;
  ulong local_a8;
  size_t sStack_a0;
  void *local_98;
  byte local_90;
  void *local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  loadVersion(this,param_1);
  piVar15 = *(int **)(param_1 + 8);
  uVar10 = *(uint *)param_1;
  uVar13 = (ulong)uVar10;
  piVar18 = piVar15 + uVar13 * 0xc;
  piVar16 = piVar15;
  if (uVar10 != 0) {
    lVar20 = uVar13 * 0x30;
    piVar17 = piVar15;
    do {
      iVar6 = *piVar17;
      if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar17 + 0x15);
      }
      if (iVar6 == 10) {
        piVar1 = *(int **)(piVar17 + 2);
        if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar17;
        }
        piVar16 = piVar17;
        if ((piVar1 == (int *)"packageUrl") || (iVar6 = memcmp("packageUrl",piVar1,10), iVar6 == 0))
        break;
      }
      lVar20 = lVar20 + -0x30;
      piVar17 = piVar17 + 0xc;
      piVar16 = piVar18;
    } while (lVar20 != 0);
  }
  if (piVar18 == piVar16) goto LAB_00a564a8;
  if (uVar10 == 0) {
LAB_00a56410:
    if (piVar15 == piVar18) goto LAB_00a56498;
    if ((*(byte *)((long)piVar15 + 0x2f) >> 2 & 1) == 0) goto LAB_00a564a8;
                    /* catch() { ... } // from try @ 00a5624c with catch @ 00a56420 */
    uVar10 = *(uint *)param_1;
                    /* catch() { ... } // from try @ 00a56240 with catch @ 00a56424 */
    piVar16 = *(int **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00a56220 with catch @ 00a56428 */
    piVar15 = piVar16;
    if (uVar10 == 0) {
LAB_00a56970:
                    /* catch() { ... } // from try @ 00a569d8 with catch @ 00a56970 */
      if (piVar15 == piVar16 + (ulong)uVar10 * 0xc) goto LAB_00a56994;
      piVar16 = piVar15 + 6;
      if ((*(byte *)((long)piVar15 + 0x2f) >> 4 & 1) == 0) goto LAB_00a569a4;
    }
    else {
                    /* catch() { ... } // from try @ 00a56258 with catch @ 00a56438 */
      lVar20 = (ulong)uVar10 * 0x30;
      do {
        iVar6 = *piVar15;
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
        }
        if (iVar6 == 10) {
          piVar18 = *(int **)(piVar15 + 2);
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            piVar18 = piVar15;
          }
          if ((piVar18 == (int *)"packageUrl") ||
             (iVar6 = memcmp("packageUrl",piVar18,10), iVar6 == 0)) goto LAB_00a56970;
        }
        lVar20 = lVar20 + -0x30;
        piVar15 = piVar15 + 0xc;
                    /* try { // try from 00a56490 to 00b564df has its CatchHandler @ 00a56490
                       catch() { ... } // from try @ 00a56490 with catch @ 00a56490
                       catch() { ... } // from try @ 00a56598 with catch @ 00a56490 */
      } while (lVar20 != 0);
LAB_00a56994:
      piVar16 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
LAB_00a569a4:
      piVar16 = *(int **)(piVar16 + 2);
    }
    sVar8 = strlen((char *)piVar16);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)piVar16,sVar8);
                    /* try { // try from 00a569c8 to 00b569d7 has its CatchHandler @ 00a56b24 */
    MVar3 = this[0x30];
    if (((byte)MVar3 & 1) == 0) {
      if ((byte)MVar3 >> 1 != 0) {
LAB_00a569d8:
                    /* try { // try from 00a569d8 to 00b56b3f has its CatchHandler @ 00a56970 */
        if (((byte)MVar3 & 1) == 0) {
          uVar13 = (ulong)((byte)MVar3 >> 1);
          pMVar12 = this + 0x31;
        }
        else {
          uVar13 = *(ulong *)(this + 0x38);
          pMVar12 = *(Manifest **)(this + 0x40);
        }
        if (pMVar12[uVar13 - 1] != (Manifest)0x2f) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x30),"/",1);
        }
      }
    }
    else if (*(long *)(this + 0x38) != 0) goto LAB_00a569d8;
  }
  else {
                    /* try { // try from 00a563ac to 00b5648f has its CatchHandler @ 00a561cc */
    lVar20 = uVar13 * 0x30;
    do {
      iVar6 = *piVar15;
      if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
      }
      if (iVar6 == 10) {
        piVar16 = *(int **)(piVar15 + 2);
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          piVar16 = piVar15;
        }
        if ((piVar16 == (int *)"packageUrl") ||
           (iVar6 = memcmp("packageUrl",piVar16,10), iVar6 == 0)) goto LAB_00a56410;
      }
      lVar20 = lVar20 + -0x30;
      piVar15 = piVar15 + 0xc;
    } while (lVar20 != 0);
LAB_00a56498:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a564a8:
  piVar15 = *(int **)(param_1 + 8);
  uVar10 = *(uint *)param_1;
  uVar13 = (ulong)uVar10;
  piVar18 = piVar15 + uVar13 * 0xc;
  piVar16 = piVar15;
  if (uVar10 != 0) {
    lVar20 = uVar13 * 0x30;
    piVar17 = piVar15;
    do {
                    /* try { // try from 00a564e0 to 00b564f7 has its CatchHandler @ 00a56660 */
      iVar6 = *piVar17;
      if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar17 + 0x15);
      }
      if (iVar6 == 6) {
        piVar1 = *(int **)(piVar17 + 2);
        if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar17;
        }
        piVar16 = piVar17;
                    /* try { // try from 00a5650c to 00b5651f has its CatchHandler @ 00a5665c */
        if ((piVar1 == (int *)"assets") || (iVar6 = memcmp("assets",piVar1,6), iVar6 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
                    /* try { // try from 00a56520 to 00b5652f has its CatchHandler @ 00a56630 */
      piVar17 = piVar17 + 0xc;
      piVar16 = piVar18;
    } while (lVar20 != 0);
  }
  if (piVar18 != piVar16) {
    if (uVar10 == 0) {
LAB_00a565a0:
      if (piVar15 != piVar18) {
        if ((*(short *)((long)piVar15 + 0x2e) == 3) && (piVar15[6] != 0)) {
          lVar20 = *(long *)(piVar15 + 8) + 0x18;
          do {
            if ((*(byte *)(lVar20 + -1) >> 4 & 1) == 0) {
              pcVar14 = *(char **)(lVar20 + -0x10);
            }
            else {
              pcVar14 = (char *)(lVar20 + -0x18);
            }
                    /* catch() { ... } // from try @ 00a56548 with catch @ 00a56614 */
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = (void *)0x0;
            sVar8 = strlen(pcVar14);
            if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
                    /* catch() { ... } // from try @ 00a56560 with catch @ 00a5662c */
                    /* catch() { ... } // from try @ 00a56520 with catch @ 00a56630 */
                    /* catch() { ... } // from try @ 00a56568 with catch @ 00a56634 */
            if (sVar8 < 0x17) {
              local_c0 = CONCAT71(local_c0._1_7_,(char)((int)sVar8 << 1));
                    /* catch() { ... } // from try @ 00a56550 with catch @ 00a56644 */
              pvVar9 = (void *)((ulong)&local_c0 | 1);
              if (sVar8 != 0) goto LAB_00a5666c;
              pbVar7 = (basic_string *)0x0;
            }
            else {
              uVar13 = sVar8 + 0x10 & 0xfffffffffffffff0;
              pvVar9 = operator_new(uVar13);
                    /* catch() { ... } // from try @ 00a5650c with catch @ 00a5665c */
              local_c0 = uVar13 | 1;
                    /* catch() { ... } // from try @ 00a564e0 with catch @ 00a56660 */
              local_b8 = sVar8;
              local_b0 = pvVar9;
LAB_00a5666c:
              pbVar7 = memcpy(pvVar9,pcVar14,sVar8);
            }
            *(undefined1 *)((long)pvVar9 + sVar8) = 0;
            parseAsset(pbVar7,(GenericValue *)&local_c0);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::ManifestAsset&>
                      ((basic_string *)(this + 0xe8),(basic_string *)&local_c0,
                       (ManifestAsset *)&local_c0);
            if ((local_90 & 1) != 0) {
              operator_delete(local_80);
            }
            if ((local_a8 & 1) != 0) {
              operator_delete(local_98);
            }
            if ((local_c0 & 1) != 0) {
              operator_delete(local_b0);
            }
            lVar11 = lVar20 + 0x18;
            lVar20 = lVar20 + 0x30;
          } while (lVar11 != *(long *)(piVar15 + 8) + (ulong)(uint)piVar15[6] * 0x30);
        }
        goto LAB_00a566f4;
      }
    }
    else {
      lVar20 = uVar13 * 0x30;
                    /* try { // try from 00a56548 to 00b5654f has its CatchHandler @ 00a56614 */
      do {
                    /* try { // try from 00a56550 to 00b5655f has its CatchHandler @ 00a56644 */
        iVar6 = *piVar15;
                    /* try { // try from 00a56560 to 00b56567 has its CatchHandler @ 00a5662c */
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
        }
                    /* try { // try from 00a56568 to 00b56597 has its CatchHandler @ 00a56634 */
        if (iVar6 == 6) {
          piVar16 = *(int **)(piVar15 + 2);
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            piVar16 = piVar15;
          }
          if ((piVar16 == (int *)"assets") || (iVar6 = memcmp("assets",piVar16,6), iVar6 == 0))
          goto LAB_00a565a0;
        }
        lVar20 = lVar20 + -0x30;
        piVar15 = piVar15 + 0xc;
                    /* try { // try from 00a56598 to 00b566af has its CatchHandler @ 00a56490 */
      } while (lVar20 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a566f4:
                    /* try { // try from 00a566f4 to 00b5670b has its CatchHandler @ 00a5673c */
  piVar15 = *(int **)(param_1 + 8);
  uVar10 = *(uint *)param_1;
  uVar13 = (ulong)uVar10;
  piVar18 = piVar15 + uVar13 * 0xc;
  piVar16 = piVar15;
  if (uVar10 != 0) {
                    /* try { // try from 00a5670c to 00b5674f has its CatchHandler @ 00a566b0 */
    lVar20 = uVar13 * 0x30;
    piVar17 = piVar15;
    do {
      iVar6 = *piVar17;
      if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar17 + 0x15);
      }
                    /* catch() { ... } // from try @ 00a566f4 with catch @ 00a5673c */
      if (iVar6 == 0xb) {
        piVar1 = *(int **)(piVar17 + 2);
        if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar17;
        }
                    /* try { // try from 00a56750 to 00b5679f has its CatchHandler @ 00a56750
                       catch() { ... } // from try @ 00a56750 with catch @ 00a56750
                       catch() { ... } // from try @ 00a56858 with catch @ 00a56750 */
        piVar16 = piVar17;
        if ((piVar1 == (int *)"searchPaths") ||
           (iVar6 = memcmp("searchPaths",piVar1,0xb), iVar6 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
      piVar17 = piVar17 + 0xc;
      piVar16 = piVar18;
    } while (lVar20 != 0);
  }
  if (piVar18 != piVar16) {
    if (uVar10 == 0) {
LAB_00a567ec:
      if (piVar15 != piVar18) {
        if ((*(short *)((long)piVar15 + 0x2e) == 4) && (uVar10 = piVar15[6], uVar10 != 0)) {
                    /* try { // try from 00a56808 to 00b5680f has its CatchHandler @ 00a568d4 */
                    /* try { // try from 00a56810 to 00b5681f has its CatchHandler @ 00a56904 */
          lVar20 = 0;
          uVar13 = 0;
                    /* try { // try from 00a56820 to 00b56827 has its CatchHandler @ 00a568ec */
          do {
            lVar11 = *(long *)(piVar15 + 8);
                    /* try { // try from 00a56828 to 00b56857 has its CatchHandler @ 00a568f4 */
            uVar4 = *(ushort *)(lVar11 + lVar20 + 0x16);
            if ((uVar4 >> 10 & 1) != 0) {
              if ((uVar4 >> 0xc & 1) == 0) {
                pcVar14 = *(char **)(lVar11 + lVar20 + 8);
              }
              else {
                pcVar14 = (char *)(lVar11 + lVar20);
              }
              local_a8 = 0;
              sStack_a0 = 0;
              local_98 = (void *)0x0;
              sVar8 = strlen(pcVar14);
                    /* try { // try from 00a56858 to 00b5696f has its CatchHandler @ 00a56750 */
              if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar8 < 0x17) {
                local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar8 << 1));
                pvVar9 = (void *)((ulong)&local_a8 | 1);
                if (sVar8 != 0) goto LAB_00a568a0;
              }
              else {
                uVar19 = sVar8 + 0x10 & 0xfffffffffffffff0;
                pvVar9 = operator_new(uVar19);
                local_a8 = uVar19 | 1;
                sStack_a0 = sVar8;
                local_98 = pvVar9;
LAB_00a568a0:
                memcpy(pvVar9,pcVar14,sVar8);
              }
              *(undefined1 *)((long)pvVar9 + sVar8) = 0;
              puVar2 = *(ulong **)(this + 0x118);
              if (puVar2 < *(ulong **)(this + 0x120)) {
                puVar2[2] = (ulong)local_98;
                puVar2[1] = sStack_a0;
                *puVar2 = local_a8;
                sStack_a0 = 0;
                local_98 = (void *)0x0;
                    /* catch() { ... } // from try @ 00a56808 with catch @ 00a568d4 */
                local_a8 = 0;
                *(long *)(this + 0x118) = *(long *)(this + 0x118) + 0x18;
              }
              else {
                    /* catch() { ... } // from try @ 00a56820 with catch @ 00a568ec */
                    /* catch() { ... } // from try @ 00a567e0 with catch @ 00a568f0 */
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)(this + 0x110),(basic_string *)&local_a8);
                    /* catch() { ... } // from try @ 00a56828 with catch @ 00a568f4 */
                if ((local_a8 & 1) != 0) {
                  operator_delete(local_98);
                }
              }
                    /* catch() { ... } // from try @ 00a56810 with catch @ 00a56904 */
              uVar10 = piVar15[6];
            }
            uVar13 = uVar13 + 1;
            lVar20 = lVar20 + 0x18;
          } while (uVar13 < uVar10);
        }
        goto LAB_00a5692c;
      }
    }
    else {
      lVar20 = uVar13 * 0x30;
      do {
                    /* try { // try from 00a567a0 to 00b567b7 has its CatchHandler @ 00a56920 */
        iVar6 = *piVar15;
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
        }
        if (iVar6 == 0xb) {
          piVar16 = *(int **)(piVar15 + 2);
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            piVar16 = piVar15;
          }
                    /* try { // try from 00a567cc to 00b567df has its CatchHandler @ 00a5691c */
          if ((piVar16 == (int *)"searchPaths") ||
             (iVar6 = memcmp("searchPaths",piVar16,0xb), iVar6 == 0)) goto LAB_00a567ec;
        }
        lVar20 = lVar20 + -0x30;
                    /* try { // try from 00a567e0 to 00b567ef has its CatchHandler @ 00a568f0 */
        piVar15 = piVar15 + 0xc;
      } while (lVar20 != 0);
    }
                    /* catch() { ... } // from try @ 00a567cc with catch @ 00a5691c */
                    /* catch() { ... } // from try @ 00a567a0 with catch @ 00a56920 */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a5692c:
  this[0xd] = (Manifest)0x1;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

