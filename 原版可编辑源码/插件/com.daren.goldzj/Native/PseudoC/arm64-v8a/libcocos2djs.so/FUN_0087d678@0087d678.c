
long * FUN_0087d678(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
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
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  void *__s1;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  uVar13 = *(ulong *)(param_1 + 8);
  if ((uVar13 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar13 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    if (uVar13 < 3) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulong)((uVar13 - 1 & uVar13) != 0);
    }
    uVar8 = uVar8 | uVar13 << 1;
    uVar13 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar13 <= uVar8) {
      uVar13 = uVar8;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::rehash(param_1,uVar13);
    uVar13 = *(ulong *)(param_1 + 8);
  }
  uVar8 = uVar13 - 1;
  if ((uVar8 & uVar13) == 0) {
    uVar14 = uVar8 & param_2;
  }
  else {
    uVar14 = param_2;
    if (uVar13 <= param_2) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = param_2 / uVar13;
      }
      uVar14 = param_2 - uVar14 * uVar13;
    }
  }
  plVar15 = *(long **)(*(long *)param_1 + uVar14 * 8);
  if (plVar15 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    __n = *(size_t *)(param_3 + 8);
    __s2 = *(byte **)(param_3 + 0x10);
    bVar4 = 0;
    if ((*param_3 & 1) == 0) {
      __s2 = param_3 + 1;
      __n = (ulong)(*param_3 >> 1);
    }
LAB_0087d848:
    do {
      bVar3 = bVar4;
      plVar12 = plVar15;
      plVar15 = (long *)*plVar12;
      if (plVar15 == (long *)0x0) {
        return plVar12;
      }
      uVar6 = plVar15[1];
      if ((uVar8 & uVar13) == 0) {
        uVar10 = uVar6 & uVar8;
      }
      else {
        uVar10 = uVar6;
        if (uVar13 <= uVar6) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar6 / uVar13;
          }
          uVar10 = uVar6 - uVar10 * uVar13;
        }
      }
      if (uVar10 != uVar14) {
        return plVar12;
      }
      bVar4 = bVar3;
      if (uVar6 == param_2) {
        bVar2 = *(byte *)(plVar15 + 2);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar15[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar15[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar15 + 0x11);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar7 = (byte *)((long)plVar15 + 0x11);
              lVar9 = -(ulong)(bVar2 >> 1);
              pbVar11 = __s2;
              do {
                if (*pbVar7 != *pbVar11) goto LAB_0087d7fc;
                pbVar7 = pbVar7 + 1;
                lVar9 = lVar9 + 1;
                pbVar11 = pbVar11 + 1;
              } while (lVar9 != 0);
            }
          }
          else if (__n != 0) {
            iVar5 = memcmp(__s1,__s2,__n);
            bVar4 = bVar3 | iVar5 == 0;
            if (iVar5 != 0) goto LAB_0087d7fc;
            goto LAB_0087d848;
          }
          bVar4 = 1;
          goto LAB_0087d848;
        }
      }
LAB_0087d7fc:
    } while ((bool)(bVar3 ^ 1));
  }
  return plVar12;
}

