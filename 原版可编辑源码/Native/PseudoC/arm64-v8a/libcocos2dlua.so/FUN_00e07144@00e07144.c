
long * FUN_00e07144(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                    *param_1,ulong param_2,byte *param_3)

{
  size_t sVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
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
    uVar7 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar7 <= uVar12) {
      uVar7 = uVar12;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
    ::rehash(param_1,uVar7);
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
  uVar7 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
  if (uVar7 < 2) {
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
    __n = *(size_t *)(param_3 + 8);
    __s2 = *(byte **)(param_3 + 0x10);
    bVar4 = 0;
    if ((*param_3 & 1) == 0) {
      __s2 = param_3 + 1;
      __n = (ulong)(*param_3 >> 1);
    }
LAB_00e07248:
    do {
      bVar3 = bVar4;
      plVar11 = plVar14;
      plVar14 = (long *)*plVar11;
      if (plVar14 == (long *)0x0) {
        return plVar11;
      }
      uVar6 = plVar14[1];
      if (uVar7 < 2) {
        uVar9 = uVar6 & uVar12 - 1;
      }
      else {
        uVar9 = uVar6;
        if (uVar12 <= uVar6) {
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = uVar6 / uVar12;
          }
          uVar9 = uVar6 - uVar9 * uVar12;
        }
      }
      if (uVar9 != uVar13) {
        return plVar11;
      }
      bVar4 = bVar3;
      if (uVar6 == param_2) {
        bVar2 = *(byte *)(plVar14 + 2);
        uVar6 = (ulong)(bVar2 >> 1);
        sVar1 = uVar6;
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar14[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar14[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar14 + 0x11);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar8 = (byte *)((long)plVar14 + 0x11);
              pbVar10 = __s2;
              do {
                if (*pbVar8 != *pbVar10) goto LAB_00e07240;
                uVar6 = uVar6 - 1;
                pbVar8 = pbVar8 + 1;
                pbVar10 = pbVar10 + 1;
              } while (uVar6 != 0);
            }
          }
          else if (__n != 0) {
            iVar5 = memcmp(__s1,__s2,__n);
            bVar4 = bVar3 | iVar5 == 0;
            if (iVar5 != 0) goto LAB_00e07240;
            goto LAB_00e07248;
          }
          bVar4 = 1;
          goto LAB_00e07248;
        }
      }
LAB_00e07240:
    } while ((bool)(bVar3 ^ 1));
  }
  return plVar11;
}

