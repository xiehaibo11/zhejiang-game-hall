
/* cocos2d::extension::Manifest::loadManifest(rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> const&) */

void __thiscall cocos2d::extension::Manifest::loadManifest(Manifest *this,GenericDocument *param_1)

{
  int *__s2;
  ulong *puVar1;
  Manifest MVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  basic_string *pbVar6;
  size_t sVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  Manifest *pMVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  byte local_90;
  void *local_80;
  long local_68;
  
                    /* try { // try from 00dfb0b0 to 00efb0b7 has its CatchHandler @ 00dfb134 */
                    /* try { // try from 00dfb0b8 to 00efb163 has its CatchHandler @ 00dfb04c */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  loadVersion(this,param_1);
  piVar12 = *(int **)(param_1 + 8);
  uVar9 = *(uint *)param_1;
  uVar16 = (ulong)uVar9;
  piVar14 = piVar12 + uVar16 * 0xc;
  piVar15 = piVar12;
  if (uVar9 != 0) {
    lVar17 = uVar16 * 0x30;
    piVar13 = piVar12;
    do {
      iVar5 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
                    /* catch() { ... } // from try @ 00dfb0b0 with catch @ 00dfb134 */
      if (iVar5 == 10) {
        __s2 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          __s2 = piVar13;
        }
        piVar15 = piVar13;
        if ((__s2 == (int *)"packageUrl") || (iVar5 = memcmp("packageUrl",__s2,10), iVar5 == 0))
        break;
      }
      lVar17 = lVar17 + -0x30;
      piVar13 = piVar13 + 0xc;
      piVar15 = piVar14;
    } while (lVar17 != 0);
  }
  if (piVar14 == piVar15) goto LAB_00dfb268;
  if (uVar9 == 0) {
LAB_00dfb1d4:
                    /* try { // try from 00dfb1d8 to 00efb1e3 has its CatchHandler @ 00dfb25c */
    if (piVar12 == piVar14) goto LAB_00dfb258;
    if ((*(byte *)((long)piVar12 + 0x2f) >> 2 & 1) == 0) goto LAB_00dfb268;
    uVar9 = *(uint *)param_1;
    piVar15 = *(int **)(param_1 + 8);
    piVar12 = piVar15;
    if (uVar9 == 0) {
LAB_00dfb658:
      if (piVar12 == piVar15 + (ulong)uVar9 * 0xc) goto LAB_00dfb678;
      piVar15 = piVar12 + 6;
      if ((*(byte *)((long)piVar12 + 0x2f) >> 4 & 1) == 0) goto LAB_00dfb688;
    }
    else {
      lVar17 = (ulong)uVar9 * 0x30;
                    /* try { // try from 00dfb1fc to 00efb207 has its CatchHandler @ 00dfb280 */
      do {
                    /* try { // try from 00dfb214 to 00efb21f has its CatchHandler @ 00dfb264 */
                    /* try { // try from 00dfb220 to 00efb2c7 has its CatchHandler @ 00dfb174 */
        iVar5 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar5 == 10) {
          piVar14 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar14 = piVar12;
          }
          if ((piVar14 == (int *)"packageUrl") ||
             (iVar5 = memcmp("packageUrl",piVar14,10), iVar5 == 0)) goto LAB_00dfb658;
        }
        lVar17 = lVar17 + -0x30;
        piVar12 = piVar12 + 0xc;
      } while (lVar17 != 0);
LAB_00dfb678:
      piVar15 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00dfb688:
      piVar15 = *(int **)(piVar15 + 2);
    }
    sVar7 = strlen((char *)piVar15);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)piVar15,sVar7);
    MVar2 = this[0x48];
    if (((byte)MVar2 & 1) == 0) {
      if ((byte)MVar2 >> 1 != 0) {
LAB_00dfb6b8:
        if (((byte)MVar2 & 1) == 0) {
          uVar16 = (ulong)((byte)MVar2 >> 1);
          pMVar11 = this + 0x49;
        }
        else {
          uVar16 = *(ulong *)(this + 0x50);
          pMVar11 = *(Manifest **)(this + 0x58);
        }
        if (pMVar11[uVar16 - 1] != (Manifest)0x2f) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x48),"/",1);
        }
      }
    }
    else if (*(long *)(this + 0x50) != 0) goto LAB_00dfb6b8;
  }
  else {
                    /* catch() { ... } // from try @ 00dfb220 with catch @ 00dfb174 */
    lVar17 = uVar16 * 0x30;
    do {
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar5 == 10) {
        piVar15 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar15 = piVar12;
        }
                    /* try { // try from 00dfb1c0 to 00efb1c7 has its CatchHandler @ 00dfb258 */
        if ((piVar15 == (int *)"packageUrl") ||
           (iVar5 = memcmp("packageUrl",piVar15,10), iVar5 == 0)) goto LAB_00dfb1d4;
      }
      lVar17 = lVar17 + -0x30;
      piVar12 = piVar12 + 0xc;
    } while (lVar17 != 0);
LAB_00dfb258:
                    /* catch() { ... } // from try @ 00dfb1c0 with catch @ 00dfb258 */
                    /* catch() { ... } // from try @ 00dfb1d8 with catch @ 00dfb25c */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
                    /* catch() { ... } // from try @ 00dfb214 with catch @ 00dfb264 */
    DAT_01785a60 = 0;
  }
LAB_00dfb268:
  piVar15 = *(int **)(param_1 + 8);
  uVar9 = *(uint *)param_1;
  uVar16 = (ulong)uVar9;
  piVar14 = piVar15 + uVar16 * 0xc;
                    /* catch() { ... } // from try @ 00dfb1fc with catch @ 00dfb280 */
  piVar12 = piVar15;
  if (uVar9 == 0) {
LAB_00dfb2ec:
    if (piVar14 != piVar12) {
      if (uVar9 == 0) {
LAB_00dfb358:
        if (piVar15 != piVar14) {
          if ((*(short *)((long)piVar15 + 0x2e) == 3) && (piVar15[6] != 0)) {
            lVar17 = *(long *)(piVar15 + 8) + 0x18;
            if ((*(byte *)(*(long *)(piVar15 + 8) + 0x17) >> 4 & 1) == 0) goto LAB_00dfb3b4;
            do {
              pcVar8 = (char *)(lVar17 + -0x18);
              lVar10 = lVar17;
              while( true ) {
                pbVar6 = (basic_string *)
                         std::__ndk1::
                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         ::basic_string<decltype(nullptr)>(local_c0,pcVar8);
                parseAsset(pbVar6,(GenericValue *)local_c0);
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::ManifestAsset&>
                          ((basic_string *)(this + 0x100),(basic_string *)local_c0,
                           (ManifestAsset *)local_c0);
                if ((local_90 & 1) != 0) {
                  operator_delete(local_80);
                }
                if ((local_a8 & 1) != 0) {
                  operator_delete(local_98);
                }
                if (((byte)local_c0[0] & 1) != 0) {
                  operator_delete(local_b0);
                }
                lVar17 = lVar10 + 0x30;
                if (lVar10 + 0x18 == *(long *)(piVar15 + 8) + (ulong)(uint)piVar15[6] * 0x30)
                goto LAB_00dfb454;
                if ((*(byte *)(lVar10 + 0x2f) >> 4 & 1) != 0) break;
LAB_00dfb3b4:
                pcVar8 = *(char **)(lVar17 + -0x10);
                lVar10 = lVar17;
              }
            } while( true );
          }
          goto LAB_00dfb454;
        }
      }
      else {
                    /* try { // try from 00dfb2fc to 00efb303 has its CatchHandler @ 00dfb328 */
        lVar17 = uVar16 * 0x30;
                    /* try { // try from 00dfb304 to 00efb32f has its CatchHandler @ 00dfb2e0 */
        do {
          iVar5 = *piVar15;
                    /* catch() { ... } // from try @ 00dfb2fc with catch @ 00dfb328 */
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            iVar5 = 0x15 - *(char *)((long)piVar15 + 0x15);
          }
          if (iVar5 == 6) {
            piVar12 = *(int **)(piVar15 + 2);
            if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
              piVar12 = piVar15;
            }
            if ((piVar12 == (int *)"assets") || (iVar5 = memcmp("assets",piVar12,6), iVar5 == 0))
            goto LAB_00dfb358;
          }
          lVar17 = lVar17 + -0x30;
          piVar15 = piVar15 + 0xc;
        } while (lVar17 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
  }
  else {
    lVar17 = uVar16 * 0x30;
    do {
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar5 == 6) {
        piVar13 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar13 = piVar12;
        }
                    /* catch() { ... } // from try @ 00dfb304 with catch @ 00dfb2e0 */
        if ((piVar13 == (int *)"assets") || (iVar5 = memcmp("assets",piVar13,6), iVar5 == 0))
        goto LAB_00dfb2ec;
      }
      lVar17 = lVar17 + -0x30;
      piVar12 = piVar12 + 0xc;
    } while (lVar17 != 0);
  }
LAB_00dfb454:
  piVar15 = *(int **)(param_1 + 8);
  uVar9 = *(uint *)param_1;
  uVar16 = (ulong)uVar9;
  piVar14 = piVar15 + uVar16 * 0xc;
  piVar12 = piVar15;
  if (uVar9 == 0) {
LAB_00dfb4d8:
    if (piVar14 != piVar12) {
      if (uVar9 == 0) {
LAB_00dfb544:
        if (piVar15 != piVar14) {
          if ((*(short *)((long)piVar15 + 0x2e) == 4) && (uVar9 = piVar15[6], uVar9 != 0)) {
            lVar17 = 0;
            uVar16 = 0;
            do {
              lVar10 = *(long *)(piVar15 + 8);
              uVar3 = *(ushort *)(lVar10 + lVar17 + 0x16);
              if ((uVar3 >> 10 & 1) != 0) {
                if ((uVar3 >> 0xc & 1) == 0) {
                  pcVar8 = *(char **)(lVar10 + lVar17 + 8);
                }
                else {
                  pcVar8 = (char *)(lVar10 + lVar17);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a8,pcVar8);
                puVar1 = *(ulong **)(this + 0x130);
                if (puVar1 < *(ulong **)(this + 0x138)) {
                  puVar1[2] = (ulong)local_98;
                  puVar1[1] = uStack_a0;
                  *puVar1 = local_a8;
                  uStack_a0 = 0;
                  local_98 = (void *)0x0;
                  local_a8 = 0;
                  *(ulong **)(this + 0x130) = puVar1 + 3;
                }
                else {
                  std::__ndk1::
                  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                              *)(this + 0x128),(basic_string *)&local_a8);
                  if ((local_a8 & 1) != 0) {
                    operator_delete(local_98);
                  }
                }
                uVar9 = piVar15[6];
              }
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0x18;
            } while (uVar16 < uVar9);
          }
          goto LAB_00dfb61c;
        }
      }
      else {
        lVar17 = uVar16 * 0x30;
                    /* try { // try from 00dfb4f0 to 00efb4f7 has its CatchHandler @ 00dfb77c */
        do {
          iVar5 = *piVar15;
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            iVar5 = 0x15 - *(char *)((long)piVar15 + 0x15);
          }
          if (iVar5 == 0xb) {
            piVar12 = *(int **)(piVar15 + 2);
            if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
              piVar12 = piVar15;
            }
            if ((piVar12 == (int *)"searchPaths") ||
               (iVar5 = memcmp("searchPaths",piVar12,0xb), iVar5 == 0)) goto LAB_00dfb544;
          }
          lVar17 = lVar17 + -0x30;
                    /* try { // try from 00dfb4f8 to 00efb7b7 has its CatchHandler @ 00dfb3f8 */
          piVar15 = piVar15 + 0xc;
        } while (lVar17 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
  }
  else {
    lVar17 = uVar16 * 0x30;
    do {
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar5 == 0xb) {
        piVar13 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar13 = piVar12;
        }
        if ((piVar13 == (int *)"searchPaths") ||
           (iVar5 = memcmp("searchPaths",piVar13,0xb), iVar5 == 0)) goto LAB_00dfb4d8;
      }
      lVar17 = lVar17 + -0x30;
      piVar12 = piVar12 + 0xc;
    } while (lVar17 != 0);
  }
LAB_00dfb61c:
  this[0x22] = (Manifest)0x1;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

