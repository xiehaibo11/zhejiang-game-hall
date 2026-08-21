
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Value const&) const */

bool __thiscall cocos2d::Value::operator==(Value *this,Value *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  long *plVar16;
  byte *__s1;
  byte *__s2;
  ulong uVar17;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *this_00;
  long *plVar18;
  long *plVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  
  if (this == param_1) goto LAB_00fbd07c;
  if (*(int *)(param_1 + 8) != *(int *)(this + 8)) goto switchD_00fbcde0_default;
  bVar5 = true;
  switch(*(int *)(param_1 + 8)) {
  case 0:
    break;
  case 1:
  case 6:
    uVar11 = (uint)(byte)*param_1;
    uVar9 = (uint)(byte)*this;
    goto LAB_00fbcdf8;
  case 2:
  case 3:
    uVar11 = *(uint *)param_1;
    uVar9 = *(uint *)this;
LAB_00fbcdf8:
    bVar5 = uVar11 == uVar9;
    break;
  case 4:
    bVar5 = ABS(*(float *)param_1 - *(float *)this) <= 1.1920929e-07;
    break;
  case 5:
    bVar5 = ABS(*(double *)param_1 - *(double *)this) <= 2.220446049250313e-16;
    break;
  case 7:
    pbVar12 = *(byte **)param_1;
    pbVar14 = *(byte **)this;
    bVar2 = *pbVar12;
    bVar3 = *pbVar14;
    uVar10 = (ulong)(bVar2 >> 1);
    __n = uVar10;
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(pbVar12 + 8);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if (__n == sVar1) {
      __s1 = *(byte **)(pbVar12 + 0x10);
      __s2 = *(byte **)(pbVar14 + 0x10);
      if ((bVar2 & 1) == 0) {
        __s1 = pbVar12 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = pbVar14 + 1;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          while (pbVar12 = pbVar12 + 1, *pbVar12 == *__s2) {
            uVar10 = uVar10 - 1;
            __s2 = __s2 + 1;
            if (uVar10 == 0) {
              return true;
            }
          }
          goto switchD_00fbcde0_default;
        }
      }
      else if (__n != 0) {
        iVar6 = memcmp(__s1,__s2,__n);
        return iVar6 == 0;
      }
      goto LAB_00fbd07c;
    }
  default:
switchD_00fbcde0_default:
    bVar5 = false;
    break;
  case 8:
    plVar18 = *(long **)this;
    plVar19 = *(long **)param_1;
    lVar8 = plVar18[1] - *plVar18;
    uVar10 = lVar8 >> 4;
    if (uVar10 == plVar19[1] - *plVar19 >> 4) {
      if (lVar8 != 0) {
        uVar13 = operator==((Value *)*plVar18,(Value *)*plVar19);
        if ((uVar13 & 1) == 0) goto switchD_00fbcde0_default;
        uVar13 = 0;
        lVar8 = 0x10;
        while (uVar13 = uVar13 + 1, uVar13 < uVar10) {
          uVar7 = operator==((Value *)(*plVar18 + lVar8),(Value *)(*plVar19 + lVar8));
          lVar8 = lVar8 + 0x10;
          if ((uVar7 & 1) == 0) {
            return false;
          }
        }
      }
      goto LAB_00fbd07c;
    }
    goto switchD_00fbcde0_default;
  case 9:
    plVar18 = *(long **)(*(long *)this + 0x10);
    if (plVar18 == (long *)0x0) goto LAB_00fbd07c;
    this_00 = *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                **)param_1;
    while( true ) {
      lVar8 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (this_00,(basic_string *)(plVar18 + 2));
      if (lVar8 == 0) {
        return false;
      }
      uVar10 = operator==((Value *)(lVar8 + 0x28),(Value *)(plVar18 + 5));
      if ((uVar10 & 1) == 0) break;
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        return true;
      }
    }
    goto switchD_00fbcde0_default;
  case 10:
    plVar18 = *(long **)(*(long *)this + 0x10);
    if (plVar18 != (long *)0x0) {
      plVar19 = *(long **)param_1;
LAB_00fbcf88:
      uVar10 = plVar19[1];
      if (uVar10 != 0) {
        uVar13 = (ulong)(int)plVar18[2];
        uVar21 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar10 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10))))))));
        uVar20 = NEON_uaddlv(uVar21,1);
        uVar7 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
        if (uVar7 < 2) {
          uVar15 = uVar10 - 1 & uVar13;
        }
        else {
          uVar15 = uVar13;
          if (uVar10 <= uVar13) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar13 / uVar10;
            }
            uVar15 = uVar13 - uVar15 * uVar10;
          }
        }
        plVar16 = *(long **)(*plVar19 + uVar15 * 8);
        if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
          do {
            uVar17 = plVar16[1];
            if (uVar17 == uVar13) {
              if ((int)plVar16[2] == (int)plVar18[2]) goto LAB_00fbd040;
            }
            else {
              if (uVar7 < 2) {
                uVar17 = uVar17 & uVar10 - 1;
              }
              else if (uVar10 <= uVar17) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar17 / uVar10;
                }
                uVar17 = uVar17 - uVar4 * uVar10;
              }
              if (uVar17 != uVar15) break;
            }
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) {
              return false;
            }
          } while( true );
        }
      }
      goto switchD_00fbcde0_default;
    }
LAB_00fbd07c:
    bVar5 = true;
  }
  return bVar5;
LAB_00fbd040:
  uVar10 = operator==((Value *)(plVar16 + 3),(Value *)(plVar18 + 3));
  if ((uVar10 & 1) == 0) goto switchD_00fbcde0_default;
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
    return true;
  }
  goto LAB_00fbcf88;
}

