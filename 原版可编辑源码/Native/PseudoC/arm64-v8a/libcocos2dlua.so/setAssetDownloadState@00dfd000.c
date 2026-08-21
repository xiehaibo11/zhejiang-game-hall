
/* cocos2d::extension::Manifest::setAssetDownloadState(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::extension::Manifest::DownloadState const&) */

void __thiscall
cocos2d::extension::Manifest::setAssetDownloadState
          (Manifest *this,basic_string *param_1,DownloadState *param_2)

{
  int *piVar1;
  basic_string *__s2;
  int *__s2_00;
  uint uVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ushort uVar8;
  basic_string *pbVar9;
  long *plVar10;
  undefined2 uVar11;
  basic_string *__s1;
  basic_string *pbVar12;
  basic_string *pbVar13;
  basic_string *pbVar14;
  basic_string *pbVar15;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *this_00;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  basic_string *pbVar20;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                      *)(this + 0x100),param_1);
  if ((lVar7 == 0) ||
     (*(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)param_2, *(short *)(this + 0x156) != 3))
  goto LAB_00dfd530;
  piVar16 = *(int **)(this + 0x148);
  uVar2 = *(uint *)(this + 0x140);
  uVar18 = (ulong)uVar2;
  piVar17 = piVar16 + uVar18 * 0xc;
  piVar19 = piVar16;
  if (uVar2 != 0) {
    lVar7 = uVar18 * 0x30;
    do {
      iVar6 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar6 == 6) {
        piVar1 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar19;
        }
        if ((piVar1 == (int *)"assets") || (iVar6 = memcmp("assets",piVar1,6), iVar6 == 0))
        goto LAB_00dfd0e0;
      }
      lVar7 = lVar7 + -0x30;
      piVar19 = piVar19 + 0xc;
    } while (lVar7 != 0);
    goto LAB_00dfd530;
  }
LAB_00dfd0e0:
  if (piVar17 == piVar19) goto LAB_00dfd530;
  if (uVar2 == 0) {
LAB_00dfd14c:
                    /* try { // try from 00dfd150 to 00efd153 has its CatchHandler @ 00dfd1d4 */
    if (piVar16 != piVar17) {
      if (*(short *)((long)piVar16 + 0x2e) != 3) goto LAB_00dfd530;
      __s1 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        __s1 = param_1 + 1;
      }
      pbVar20 = __s1 + -1;
      pbVar9 = pbVar20;
      do {
        pbVar9 = pbVar9 + 1;
      } while (*pbVar9 != (basic_string)0x0);
      pbVar15 = *(basic_string **)(piVar16 + 8);
      uVar2 = piVar16[6];
      uVar18 = (ulong)uVar2;
      pbVar12 = pbVar15 + uVar18 * 0x30;
      pbVar14 = pbVar15;
      if (uVar2 != 0) {
        lVar7 = uVar18 * 0x30;
        pbVar13 = pbVar15;
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfd150 with catch @ 00dfd1d4
                        */
          iVar6 = *(int *)pbVar13;
          if ((*(ushort *)(pbVar13 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - (char)pbVar13[0x15];
          }
          if (iVar6 == (int)((long)pbVar9 - (long)__s1)) {
            __s2 = *(basic_string **)(pbVar13 + 8);
            if ((*(ushort *)(pbVar13 + 0x16) & 0x1000) != 0) {
              __s2 = pbVar13;
            }
            pbVar14 = pbVar13;
            if ((__s2 == __s1) ||
               (iVar6 = memcmp(__s1,__s2,(long)pbVar9 - (long)__s1 & 0xffffffff), iVar6 == 0))
            break;
          }
          lVar7 = lVar7 + -0x30;
          pbVar13 = pbVar13 + 0x30;
          pbVar14 = pbVar12;
        } while (lVar7 != 0);
      }
      if (pbVar12 == pbVar14) goto LAB_00dfd530;
      do {
        pbVar20 = pbVar20 + 1;
      } while (*pbVar20 != (basic_string)0x0);
      if (uVar2 == 0) {
LAB_00dfd2c4:
                    /* catch() { ... } // from try @ 00dfd2f8 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd344 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd3a0 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd3fc with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd458 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd4b4 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd510 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd56c with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd5c8 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd624 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd680 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd6dc with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd738 with catch @ 00dfd2c8
                       catch() { ... } // from try @ 00dfd794 with catch @ 00dfd2c8 */
        if (pbVar15 == pbVar12) goto LAB_00dfd370;
        this_00 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   *)(pbVar15 + 0x18);
        uVar18 = (ulong)*(uint *)this_00;
        piVar19 = *(int **)(pbVar15 + 0x20);
        bVar5 = uVar18 == 0;
        piVar16 = piVar19 + uVar18 * 0xc;
        if (*(uint *)this_00 == 0) {
          bVar5 = true;
          piVar4 = piVar19;
        }
        else {
                    /* try { // try from 00dfd2f0 to 00efd2f7 has its CatchHandler @ 00dfd7fc */
          lVar7 = 0;
                    /* try { // try from 00dfd2f8 to 00efd33b has its CatchHandler @ 00dfd2c8 */
          piVar17 = piVar19;
          do {
            piVar1 = (int *)((long)piVar19 + lVar7);
            iVar6 = *piVar1;
            if ((*(ushort *)((long)piVar1 + 0x16) & 0x1000) != 0) {
              iVar6 = 0x15 - *(char *)((long)piVar1 + 0x15);
            }
                    /* try { // try from 00dfd33c to 00efd343 has its CatchHandler @ 00dfd7f8 */
            if (iVar6 == 0xd) {
                    /* try { // try from 00dfd344 to 00efd397 has its CatchHandler @ 00dfd2c8 */
              __s2_00 = *(int **)(piVar1 + 2);
              if ((*(ushort *)((long)piVar1 + 0x16) & 0x1000) != 0) {
                __s2_00 = piVar1;
              }
              piVar4 = piVar17;
              if ((__s2_00 == (int *)"downloadState") ||
                 (iVar6 = memcmp("downloadState",__s2_00,0xd), iVar6 == 0)) break;
            }
            lVar7 = lVar7 + 0x30;
            piVar17 = piVar1 + 0xc;
            piVar4 = piVar16;
          } while (uVar18 * 0x30 - lVar7 != 0);
        }
        if (piVar16 != piVar4) {
          if (bVar5) {
LAB_00dfd450:
                    /* try { // try from 00dfd450 to 00efd457 has its CatchHandler @ 00dfd7ec */
            if (piVar19 != piVar16) {
                    /* try { // try from 00dfd458 to 00efd4ab has its CatchHandler @ 00dfd2c8 */
              if ((*(byte *)((long)piVar19 + 0x2e) >> 5 & 1) == 0) goto LAB_00dfd4ec;
              uVar2 = *(uint *)this_00;
              piVar16 = *(int **)(pbVar15 + 0x20);
              piVar19 = piVar16;
              if (uVar2 == 0) {
LAB_00dfd568:
                    /* try { // try from 00dfd56c to 00efd5bf has its CatchHandler @ 00dfd2c8 */
                if (piVar19 == piVar16 + (ulong)uVar2 * 0xc) goto LAB_00dfd580;
                plVar10 = (long *)(piVar19 + 6);
              }
              else {
                lVar7 = (ulong)uVar2 * 0x30;
                do {
                  iVar6 = *piVar19;
                  if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                    iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
                  }
                    /* try { // try from 00dfd4ac to 00efd4b3 has its CatchHandler @ 00dfd7e8 */
                  if (iVar6 == 0xd) {
                    /* try { // try from 00dfd4b4 to 00efd507 has its CatchHandler @ 00dfd2c8 */
                    piVar17 = *(int **)(piVar19 + 2);
                    if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                      piVar17 = piVar19;
                    }
                    if ((piVar17 == (int *)"downloadState") ||
                       (iVar6 = memcmp("downloadState",piVar17,0xd), iVar6 == 0)) goto LAB_00dfd568;
                  }
                  lVar7 = lVar7 + -0x30;
                  piVar19 = piVar19 + 0xc;
                } while (lVar7 != 0);
LAB_00dfd580:
                plVar10 = &rapidjson::
                           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                           ::
                           operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                           ::buffer;
                rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::
                operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                ::buffer = 0;
                DAT_01785a58 = 0;
                DAT_01785a60 = 0;
              }
              iVar6 = *(int *)param_2;
              plVar10[1] = 0;
              plVar10[2] = 0;
              *plVar10 = (long)iVar6;
              uVar11 = 0x1f6;
              if ((long)iVar6 < 0) {
                uVar11 = 0xb6;
              }
              *(undefined2 *)((long)plVar10 + 0x16) = uVar11;
              goto LAB_00dfd530;
            }
          }
          else {
            do {
              iVar6 = *piVar19;
              if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
              }
              if (iVar6 == 0xd) {
                piVar17 = *(int **)(piVar19 + 2);
                if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                  piVar17 = piVar19;
                }
                if ((piVar17 == (int *)"downloadState") ||
                   (iVar6 = memcmp("downloadState",piVar17,0xd), iVar6 == 0)) goto LAB_00dfd450;
              }
              piVar19 = piVar19 + 0xc;
                    /* try { // try from 00dfd3fc to 00efd44f has its CatchHandler @ 00dfd2c8 */
            } while (piVar16 != piVar19);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
        }
      }
      else {
        lVar7 = uVar18 * 0x30;
        do {
          iVar6 = *(int *)pbVar15;
          if ((*(ushort *)(pbVar15 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - (char)pbVar15[0x15];
          }
          if (iVar6 == (int)((long)pbVar20 - (long)__s1)) {
            pbVar9 = *(basic_string **)(pbVar15 + 8);
            if ((*(ushort *)(pbVar15 + 0x16) & 0x1000) != 0) {
              pbVar9 = pbVar15;
            }
            if ((pbVar9 == __s1) ||
               (iVar6 = memcmp(__s1,pbVar9,(long)pbVar20 - (long)__s1 & 0xffffffff), iVar6 == 0))
            goto LAB_00dfd2c4;
          }
          lVar7 = lVar7 + -0x30;
          pbVar15 = pbVar15 + 0x30;
        } while (lVar7 != 0);
LAB_00dfd370:
        this_00 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a60 = 0;
        DAT_01785a58 = 0;
                    /* try { // try from 00dfd398 to 00efd39f has its CatchHandler @ 00dfd7f4 */
                    /* try { // try from 00dfd3a0 to 00efd3f3 has its CatchHandler @ 00dfd2c8 */
      }
LAB_00dfd4ec:
      lStack_80 = (long)*(int *)param_2;
      local_98 = 0xd;
      pcStack_90 = "downloadState";
                    /* try { // try from 00dfd508 to 00efd50f has its CatchHandler @ 00dfd7e4 */
      local_78 = 0;
      local_88 = 0x405000000000000;
                    /* try { // try from 00dfd510 to 00efd563 has its CatchHandler @ 00dfd2c8 */
      uVar8 = 0x1f6;
      if (lStack_80 < 0) {
        uVar8 = 0xb6;
      }
      lStack_70 = (ulong)uVar8 << 0x30;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      AddMember(this_00,(GenericValue *)&local_98,(GenericValue *)&lStack_80,
                *(MemoryPoolAllocator **)(this + 0x158));
      goto LAB_00dfd530;
    }
  }
  else {
    lVar7 = uVar18 * 0x30;
    do {
      iVar6 = *piVar16;
      if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
      }
      if (iVar6 == 6) {
        piVar19 = *(int **)(piVar16 + 2);
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar19 = piVar16;
        }
        if ((piVar19 == (int *)"assets") || (iVar6 = memcmp("assets",piVar19,6), iVar6 == 0))
        goto LAB_00dfd14c;
      }
      lVar7 = lVar7 + -0x30;
      piVar16 = piVar16 + 0xc;
    } while (lVar7 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00dfd530:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

