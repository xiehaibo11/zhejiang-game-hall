
long * FUN_00fdb7b8(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                    *param_1,ulong param_2,byte *param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *__s2;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  void *__s1;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  
  uVar12 = *(ulong *)(param_1 + 8);
  if ((uVar12 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar12 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar8 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
    ::rehash(param_1,uVar8);
    uVar12 = *(ulong *)(param_1 + 8);
  }
  uVar16 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar12 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar12 >>
                                                                                         8)),
                                                                          POPCOUNT((char)uVar12)))))
                                     )));
  uVar15 = NEON_uaddlv(uVar16,1);
  uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
  if (uVar8 < 2) {
    uVar13 = uVar12 - 1 & param_2;
  }
  else {
    uVar13 = param_2;
    if (uVar12 <= param_2) {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = param_2 / uVar12;
      }
      uVar13 = param_2 - uVar13 * uVar12;
    }
  }
  plVar14 = *(long **)(*(long *)param_1 + uVar13 * 8);
  if (plVar14 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    bVar5 = 0;
LAB_00fdb8a8:
    do {
      bVar4 = bVar5;
      plVar11 = plVar14;
      plVar14 = (long *)*plVar11;
      if (plVar14 == (long *)0x0) {
        return plVar11;
      }
      uVar7 = plVar14[1];
      if (uVar8 < 2) {
        uVar10 = uVar7 & uVar12 - 1;
      }
      else {
        uVar10 = uVar7;
        if (uVar12 <= uVar7) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = uVar7 / uVar12;
          }
          uVar10 = uVar7 - uVar10 * uVar12;
        }
      }
      if (uVar10 != uVar13) {
        return plVar11;
      }
      bVar5 = bVar4;
      if (uVar7 == param_2) {
        bVar2 = *(byte *)(plVar14 + 2);
        bVar3 = *param_3;
        uVar7 = (ulong)(bVar2 >> 1);
        __n = uVar7;
        if ((bVar2 & 1) != 0) {
          __n = plVar14[3];
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_3 + 8);
        }
        if (__n == sVar1) {
          __s1 = (void *)plVar14[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar14 + 0x11);
          }
          __s2 = param_3 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(param_3 + 0x10);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar9 = (byte *)((long)plVar14 + 0x11);
              do {
                if (*pbVar9 != *__s2) goto LAB_00fdb8a0;
                uVar7 = uVar7 - 1;
                pbVar9 = pbVar9 + 1;
                __s2 = __s2 + 1;
              } while (uVar7 != 0);
            }
          }
          else if (__n != 0) {
            iVar6 = memcmp(__s1,__s2,__n);
            bVar5 = bVar4 | iVar6 == 0;
            if (iVar6 != 0) goto LAB_00fdb8a0;
            goto LAB_00fdb8a8;
          }
          bVar5 = 1;
          goto LAB_00fdb8a8;
        }
      }
LAB_00fdb8a0:
    } while ((bool)(bVar4 ^ 1));
  }
  return plVar11;
}

