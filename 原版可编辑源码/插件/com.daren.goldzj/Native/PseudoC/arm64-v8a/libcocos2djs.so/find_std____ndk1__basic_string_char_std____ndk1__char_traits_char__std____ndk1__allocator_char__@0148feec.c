
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, int>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, int>, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int> >
   >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
::find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
           *this,basic_string *param_1)

{
  size_t sVar1;
  basic_string *pbVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  void *__s1;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_58 [8];
  
  uVar6 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar6 = (ulong)((byte)*param_1 >> 1);
  }
  uVar6 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_58,pbVar2,uVar6);
  uVar11 = *(ulong *)(this + 8);
  if (uVar11 != 0) {
    uVar15 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar6;
    }
    else {
      uVar13 = uVar6;
      if (uVar11 <= uVar6) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar6 / uVar11;
        }
        uVar13 = uVar6 - uVar13 * uVar11;
      }
    }
    plVar7 = *(long **)(*(long *)this + uVar13 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      __n = (ulong)((byte)*param_1 >> 1);
      pbVar2 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
        pbVar2 = *(basic_string **)(param_1 + 0x10);
      }
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar6) {
          bVar3 = *(byte *)(plVar7 + 2);
          uVar8 = (ulong)(bVar3 >> 1);
          sVar1 = uVar8;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar7[3];
          }
          if (sVar1 == __n) {
            __s1 = (void *)plVar7[4];
            if ((bVar3 & 1) == 0) {
              __s1 = (void *)((long)plVar7 + 0x11);
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return plVar7;
              }
              pbVar9 = (basic_string *)((long)plVar7 + 0x11);
              pbVar10 = pbVar2;
              while (*pbVar9 == *pbVar10) {
                uVar8 = uVar8 - 1;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
                if (uVar8 == 0) {
                  return plVar7;
                }
              }
            }
            else {
              if (__n == 0) {
                return plVar7;
              }
              iVar5 = memcmp(__s1,pbVar2,__n);
              if (iVar5 == 0) {
                return plVar7;
              }
            }
          }
        }
        else {
          if (uVar12 < 2) {
            uVar8 = uVar8 & uVar11 - 1;
          }
          else if (uVar11 <= uVar8) {
            uVar4 = 0;
            if (uVar11 != 0) {
              uVar4 = uVar8 / uVar11;
            }
            if (uVar8 - uVar4 * uVar11 != uVar13) {
              return (long *)0x0;
            }
            goto LAB_0148ffb8;
          }
          if (uVar8 != uVar13) {
            return (long *)0x0;
          }
        }
LAB_0148ffb8:
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}

