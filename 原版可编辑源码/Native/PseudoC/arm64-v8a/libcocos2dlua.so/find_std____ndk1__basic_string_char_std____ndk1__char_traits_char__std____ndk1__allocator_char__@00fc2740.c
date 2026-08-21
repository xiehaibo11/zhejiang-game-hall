
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::ZipEntryInfo>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::ZipEntryInfo>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::ZipEntryInfo>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::ZipEntryInfo>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::ZipEntryInfo> >
   >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
::find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
           *this,basic_string *param_1)

{
  size_t sVar1;
  basic_string *pbVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  void *__s1;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar7 = (ulong)((byte)*param_1 >> 1);
  }
  uVar7 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,pbVar2,uVar7);
  uVar12 = *(ulong *)(this + 8);
  if (uVar12 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar12 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar12 
                                                  >> 8)),POPCOUNT((char)uVar12))))))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar13 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & uVar7;
    }
    else {
      uVar14 = uVar7;
      if (uVar12 <= uVar7) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar7 / uVar12;
        }
        uVar14 = uVar7 - uVar14 * uVar12;
      }
    }
    plVar8 = *(long **)(*(long *)this + uVar14 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        __n = (ulong)((byte)*param_1 >> 1);
        pbVar2 = param_1 + 1;
        if (((byte)*param_1 & 1) != 0) {
          __n = *(size_t *)(param_1 + 8);
          pbVar2 = *(basic_string **)(param_1 + 0x10);
        }
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar7) {
            bVar3 = *(byte *)(plVar8 + 2);
            uVar9 = (ulong)(bVar3 >> 1);
            sVar1 = uVar9;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar8[3];
            }
            if (sVar1 == __n) {
              __s1 = (void *)plVar8[4];
              if ((bVar3 & 1) == 0) {
                __s1 = (void *)((long)plVar8 + 0x11);
              }
              if ((bVar3 & 1) == 0) {
                if (__n == 0) break;
                pbVar10 = (basic_string *)((long)plVar8 + 0x11);
                pbVar11 = pbVar2;
                while (*pbVar10 == *pbVar11) {
                  uVar9 = uVar9 - 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar11 = pbVar11 + 1;
                  if (uVar9 == 0) goto LAB_00fc28d0;
                }
              }
              else if ((__n == 0) || (iVar6 = memcmp(__s1,pbVar2,__n), iVar6 == 0)) break;
            }
          }
          else {
            if (uVar13 < 2) {
              uVar9 = uVar9 & uVar12 - 1;
            }
            else if (uVar12 <= uVar9) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar9 / uVar12;
              }
              if (uVar9 - uVar4 * uVar12 == uVar14) goto LAB_00fc281c;
              goto LAB_00fc28cc;
            }
            if (uVar9 != uVar14) goto LAB_00fc28cc;
          }
LAB_00fc281c:
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_00fc28d0;
    }
  }
LAB_00fc28cc:
  plVar8 = (long *)0x0;
LAB_00fc28d0:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

