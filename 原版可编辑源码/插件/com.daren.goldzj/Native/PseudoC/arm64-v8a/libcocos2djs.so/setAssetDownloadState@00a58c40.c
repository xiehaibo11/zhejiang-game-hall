
/* cocos2d::extension::Manifest::setAssetDownloadState(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::extension::Manifest::DownloadState const&) */

void __thiscall
cocos2d::extension::Manifest::setAssetDownloadState
          (Manifest *this,basic_string *param_1,DownloadState *param_2)

{
  basic_string *__s2;
  int *piVar1;
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
  int *piVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  basic_string *pbVar19;
  int *piVar20;
  basic_string *pbVar21;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *this_00;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a58c78 to 00b58cbb has its CatchHandler @ 00a58c78
                       catch() { ... } // from try @ 00a58c78 with catch @ 00a58c78
                       catch() { ... } // from try @ 00a58cd4 with catch @ 00a58c78 */
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                      *)(this + 0xe8),param_1);
  if ((lVar7 == 0) ||
     (*(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)param_2, *(short *)(this + 0x13e) != 3))
  goto LAB_00a58ee8;
  piVar16 = *(int **)(this + 0x130);
  uVar2 = *(uint *)(this + 0x128);
  uVar18 = (ulong)uVar2;
  piVar17 = piVar16 + uVar18 * 0xc;
  piVar15 = piVar16;
  if (uVar2 != 0) {
                    /* try { // try from 00a58cbc to 00b58cd3 has its CatchHandler @ 00a58d04 */
    lVar7 = uVar18 * 0x30;
    piVar20 = piVar16;
    do {
                    /* try { // try from 00a58cd4 to 00b58d17 has its CatchHandler @ 00a58c78 */
      iVar6 = *piVar20;
      if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar20 + 0x15);
      }
      if (iVar6 == 6) {
        piVar1 = *(int **)(piVar20 + 2);
        if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar20;
        }
        piVar15 = piVar20;
                    /* catch() { ... } // from try @ 00a58cbc with catch @ 00a58d04 */
        if ((piVar1 == (int *)"assets") || (iVar6 = memcmp("assets",piVar1,6), iVar6 == 0)) break;
      }
      lVar7 = lVar7 + -0x30;
      piVar20 = piVar20 + 0xc;
      piVar15 = piVar17;
                    /* try { // try from 00a58d18 to 00b58d67 has its CatchHandler @ 00a58d18
                       catch() { ... } // from try @ 00a58d18 with catch @ 00a58d18
                       catch() { ... } // from try @ 00a58e20 with catch @ 00a58d18 */
    } while (lVar7 != 0);
  }
  if (piVar17 == piVar15) goto LAB_00a58ee8;
  if (uVar2 == 0) {
LAB_00a58d94:
                    /* try { // try from 00a58d94 to 00b58da7 has its CatchHandler @ 00a58ee4 */
    if (piVar16 != piVar17) {
      if (*(short *)((long)piVar16 + 0x2e) != 3) goto LAB_00a58ee8;
                    /* try { // try from 00a58da8 to 00b58db7 has its CatchHandler @ 00a58eb8 */
      __s1 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        __s1 = param_1 + 1;
      }
      pbVar19 = __s1 + -1;
      pbVar9 = pbVar19;
      do {
        pbVar9 = pbVar9 + 1;
      } while (*pbVar9 != (basic_string)0x0);
      pbVar21 = *(basic_string **)(piVar16 + 8);
      uVar2 = piVar16[6];
      uVar18 = (ulong)uVar2;
                    /* try { // try from 00a58dd0 to 00b58dd7 has its CatchHandler @ 00a58e9c */
                    /* try { // try from 00a58dd8 to 00b58de7 has its CatchHandler @ 00a58ecc */
      pbVar12 = pbVar21 + uVar18 * 0x30;
      pbVar14 = pbVar21;
      if (uVar2 != 0) {
                    /* try { // try from 00a58de8 to 00b58def has its CatchHandler @ 00a58eb4 */
                    /* try { // try from 00a58df0 to 00b58e1f has its CatchHandler @ 00a58ebc */
        lVar7 = uVar18 * 0x30;
        pbVar13 = pbVar21;
        do {
          iVar6 = *(int *)pbVar13;
          if ((*(ushort *)(pbVar13 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - (char)pbVar13[0x15];
          }
          if (iVar6 == (int)((long)pbVar9 - (long)__s1)) {
                    /* try { // try from 00a58e20 to 00b58f37 has its CatchHandler @ 00a58d18 */
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
      if (pbVar12 == pbVar14) goto LAB_00a58ee8;
      do {
        pbVar19 = pbVar19 + 1;
      } while (*pbVar19 != (basic_string)0x0);
      if (uVar2 == 0) {
LAB_00a58f18:
        if (pbVar21 == pbVar12) goto LAB_00a58fcc;
        this_00 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   *)(pbVar21 + 0x18);
        uVar18 = (ulong)*(uint *)this_00;
        piVar16 = *(int **)(pbVar21 + 0x20);
        bVar5 = uVar18 == 0;
                    /* catch() { ... } // from try @ 00a58f9c with catch @ 00a58f38 */
        piVar15 = piVar16 + uVar18 * 0xc;
        if (*(uint *)this_00 == 0) {
          bVar5 = true;
          piVar4 = piVar16;
        }
        else {
          lVar7 = 0;
          piVar17 = piVar16;
          do {
            piVar20 = (int *)((long)piVar16 + lVar7);
            iVar6 = *piVar20;
            if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
              iVar6 = 0x15 - *(char *)((long)piVar20 + 0x15);
            }
            if (iVar6 == 0xd) {
                    /* try { // try from 00a58f8c to 00b58f9b has its CatchHandler @ 00a59070 */
              piVar1 = *(int **)(piVar20 + 2);
              if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar20;
              }
              piVar4 = piVar17;
                    /* try { // try from 00a58f9c to 00b5908b has its CatchHandler @ 00a58f38 */
              if ((piVar1 == (int *)"downloadState") ||
                 (iVar6 = memcmp("downloadState",piVar1,0xd), iVar6 == 0)) break;
            }
            lVar7 = lVar7 + 0x30;
            piVar17 = piVar20 + 0xc;
            piVar4 = piVar15;
          } while (uVar18 * 0x30 - lVar7 != 0);
        }
        if (piVar15 != piVar4) {
          if (bVar5) {
LAB_00a5909c:
            if (piVar16 != piVar15) {
              if ((*(byte *)((long)piVar16 + 0x2e) >> 5 & 1) == 0) goto LAB_00a59138;
              uVar2 = *(uint *)this_00;
              piVar15 = *(int **)(pbVar21 + 0x20);
              piVar16 = piVar15;
              if (uVar2 == 0) {
LAB_00a59198:
                if (piVar16 == piVar15 + (ulong)uVar2 * 0xc) goto LAB_00a591b0;
                plVar10 = (long *)(piVar16 + 6);
              }
              else {
                lVar7 = (ulong)uVar2 * 0x30;
                do {
                    /* try { // try from 00a590dc to 00b590f3 has its CatchHandler @ 00a5925c */
                  iVar6 = *piVar16;
                  if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                    iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
                  }
                  if (iVar6 == 0xd) {
                    piVar17 = *(int **)(piVar16 + 2);
                    if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                      piVar17 = piVar16;
                    }
                    /* try { // try from 00a59108 to 00b5911b has its CatchHandler @ 00a59258 */
                    if ((piVar17 == (int *)"downloadState") ||
                       (iVar6 = memcmp("downloadState",piVar17,0xd), iVar6 == 0)) goto LAB_00a59198;
                  }
                  lVar7 = lVar7 + -0x30;
                    /* try { // try from 00a5911c to 00b5912b has its CatchHandler @ 00a5922c */
                  piVar16 = piVar16 + 0xc;
                } while (lVar7 != 0);
LAB_00a591b0:
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
                DAT_01d38c18 = 0;
                DAT_01d38c20 = 0;
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
              goto LAB_00a58ee8;
            }
          }
          else {
            do {
              iVar6 = *piVar16;
              if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
              }
              if (iVar6 == 0xd) {
                piVar17 = *(int **)(piVar16 + 2);
                if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                  piVar17 = piVar16;
                }
                    /* catch() { ... } // from try @ 00a58f8c with catch @ 00a59070 */
                if ((piVar17 == (int *)"downloadState") ||
                   (iVar6 = memcmp("downloadState",piVar17,0xd), iVar6 == 0)) goto LAB_00a5909c;
              }
              piVar16 = piVar16 + 0xc;
                    /* try { // try from 00a5908c to 00b590db has its CatchHandler @ 00a5908c
                       catch() { ... } // from try @ 00a5908c with catch @ 00a5908c
                       catch() { ... } // from try @ 00a59194 with catch @ 00a5908c */
            } while (piVar15 != piVar16);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
        }
      }
      else {
        lVar7 = uVar18 * 0x30;
        do {
          iVar6 = *(int *)pbVar21;
          if ((*(ushort *)(pbVar21 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - (char)pbVar21[0x15];
          }
                    /* catch() { ... } // from try @ 00a58dd0 with catch @ 00a58e9c */
          if (iVar6 == (int)((long)pbVar19 - (long)__s1)) {
            pbVar9 = *(basic_string **)(pbVar21 + 8);
            if ((*(ushort *)(pbVar21 + 0x16) & 0x1000) != 0) {
              pbVar9 = pbVar21;
            }
                    /* catch() { ... } // from try @ 00a58de8 with catch @ 00a58eb4 */
                    /* catch() { ... } // from try @ 00a58da8 with catch @ 00a58eb8 */
                    /* catch() { ... } // from try @ 00a58df0 with catch @ 00a58ebc */
            if ((pbVar9 == __s1) ||
               (iVar6 = memcmp(__s1,pbVar9,(long)pbVar19 - (long)__s1 & 0xffffffff), iVar6 == 0))
            goto LAB_00a58f18;
          }
          lVar7 = lVar7 + -0x30;
                    /* catch() { ... } // from try @ 00a58dd8 with catch @ 00a58ecc */
          pbVar21 = pbVar21 + 0x30;
        } while (lVar7 != 0);
LAB_00a58fcc:
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
        DAT_01d38c20 = 0;
        DAT_01d38c18 = 0;
      }
LAB_00a59138:
                    /* try { // try from 00a59144 to 00b5914b has its CatchHandler @ 00a59210 */
      lStack_80 = (long)*(int *)param_2;
      local_78 = 0;
                    /* try { // try from 00a5914c to 00b5915b has its CatchHandler @ 00a59240 */
      local_88 = 0x405000000000000;
                    /* try { // try from 00a5915c to 00b59163 has its CatchHandler @ 00a59228 */
      pcStack_90 = "downloadState";
                    /* try { // try from 00a59164 to 00b59193 has its CatchHandler @ 00a59230 */
      local_98 = 0xd;
      uVar8 = 0x1f6;
      if (lStack_80 < 0) {
        uVar8 = 0xb6;
      }
      lStack_70 = (ulong)uVar8 << 0x30;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      AddMember(this_00,(GenericValue *)&local_98,(GenericValue *)&lStack_80,
                *(MemoryPoolAllocator **)(this + 0x140));
      goto LAB_00a58ee8;
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
        piVar15 = *(int **)(piVar16 + 2);
                    /* try { // try from 00a58d68 to 00b58d7f has its CatchHandler @ 00a58ee8 */
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          piVar15 = piVar16;
        }
        if ((piVar15 == (int *)"assets") || (iVar6 = memcmp("assets",piVar15,6), iVar6 == 0))
        goto LAB_00a58d94;
      }
      lVar7 = lVar7 + -0x30;
      piVar16 = piVar16 + 0xc;
    } while (lVar7 != 0);
  }
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
                    /* catch() { ... } // from try @ 00a58d94 with catch @ 00a58ee4 */
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
LAB_00a58ee8:
                    /* catch() { ... } // from try @ 00a58d68 with catch @ 00a58ee8 */
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

