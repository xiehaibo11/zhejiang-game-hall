
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
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  byte *__s1;
  long *plVar16;
  byte *__s2;
  ulong uVar17;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *this_00;
  long *plVar18;
  long *plVar19;
  
  if (this == param_1) goto LAB_0088423c;
  if (*(int *)(param_1 + 8) != *(int *)(this + 8)) goto switchD_00883fb4_default;
  bVar5 = true;
  switch(*(int *)(param_1 + 8)) {
  case 0:
    break;
  case 1:
  case 6:
    uVar10 = (uint)(byte)*param_1;
    uVar8 = (uint)(byte)*this;
    goto LAB_00883fcc;
  case 2:
  case 3:
    uVar10 = *(uint *)param_1;
    uVar8 = *(uint *)this;
LAB_00883fcc:
    bVar5 = uVar10 == uVar8;
    break;
  case 4:
    bVar5 = ABS(*(float *)param_1 - *(float *)this) <= 1.1920929e-07;
    break;
  case 5:
    bVar5 = ABS(*(double *)param_1 - *(double *)this) <= 2.220446049250313e-16;
    break;
  case 7:
    pbVar11 = *(byte **)param_1;
    pbVar13 = *(byte **)this;
    bVar2 = *pbVar11;
    bVar3 = *pbVar13;
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(pbVar11 + 8);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if (__n == sVar1) {
      __s1 = *(byte **)(pbVar11 + 0x10);
      __s2 = *(byte **)(pbVar13 + 0x10);
      if ((bVar2 & 1) == 0) {
        __s1 = pbVar11 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = pbVar13 + 1;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          lVar7 = -(ulong)(bVar2 >> 1);
          while (pbVar11 = pbVar11 + 1, *pbVar11 == *__s2) {
            __s2 = __s2 + 1;
            lVar7 = lVar7 + 1;
            if (lVar7 == 0) {
              return true;
            }
          }
          goto switchD_00883fb4_default;
        }
      }
      else if (__n != 0) {
        iVar6 = memcmp(__s1,__s2,__n);
        return iVar6 == 0;
      }
      goto LAB_0088423c;
    }
  default:
switchD_00883fb4_default:
    bVar5 = false;
    break;
  case 8:
    plVar18 = *(long **)this;
    plVar19 = *(long **)param_1;
    lVar7 = plVar18[1] - *plVar18;
    uVar9 = lVar7 >> 4;
    if (uVar9 == plVar19[1] - *plVar19 >> 4) {
      if (lVar7 != 0) {
        uVar12 = operator==((Value *)*plVar18,(Value *)*plVar19);
        if ((uVar12 & 1) == 0) goto switchD_00883fb4_default;
        uVar12 = 0;
        lVar7 = 0x10;
        while (uVar12 = uVar12 + 1, uVar12 < uVar9) {
          uVar14 = operator==((Value *)(*plVar18 + lVar7),(Value *)(*plVar19 + lVar7));
          lVar7 = lVar7 + 0x10;
          if ((uVar14 & 1) == 0) {
            return false;
          }
        }
      }
      goto LAB_0088423c;
    }
    goto switchD_00883fb4_default;
  case 9:
    plVar18 = *(long **)(*(long *)this + 0x10);
    if (plVar18 == (long *)0x0) goto LAB_0088423c;
    this_00 = *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                **)param_1;
    while( true ) {
      lVar7 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (this_00,(basic_string *)(plVar18 + 2));
      if (lVar7 == 0) {
        return false;
      }
      uVar9 = operator==((Value *)(lVar7 + 0x28),(Value *)(plVar18 + 5));
      if ((uVar9 & 1) == 0) break;
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        return true;
      }
    }
    goto switchD_00883fb4_default;
  case 10:
    plVar18 = *(long **)(*(long *)this + 0x10);
    if (plVar18 != (long *)0x0) {
      plVar19 = *(long **)param_1;
LAB_00884160:
      uVar9 = plVar19[1];
      if (uVar9 != 0) {
        uVar12 = (ulong)(int)plVar18[2];
        uVar14 = uVar9 - 1;
        if ((uVar14 & uVar9) == 0) {
          uVar15 = uVar14 & uVar12;
        }
        else {
          uVar15 = uVar12;
          if (uVar9 <= uVar12) {
            uVar15 = 0;
            if (uVar9 != 0) {
              uVar15 = uVar12 / uVar9;
            }
            uVar15 = uVar12 - uVar15 * uVar9;
          }
        }
        plVar16 = *(long **)(*plVar19 + uVar15 * 8);
        if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
          do {
            uVar17 = plVar16[1];
            if (uVar17 == uVar12) {
              if ((int)plVar16[2] == (int)plVar18[2]) goto LAB_00884200;
            }
            else {
              if ((uVar14 & uVar9) == 0) {
                uVar17 = uVar17 & uVar14;
              }
              else if (uVar9 <= uVar17) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar17 / uVar9;
                }
                if (uVar17 - uVar4 * uVar9 == uVar15) goto LAB_008841f0;
                break;
              }
              if (uVar17 != uVar15) break;
            }
LAB_008841f0:
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) {
              return false;
            }
          } while( true );
        }
      }
      goto switchD_00883fb4_default;
    }
LAB_0088423c:
    bVar5 = true;
  }
  return bVar5;
LAB_00884200:
  uVar9 = operator==((Value *)(plVar16 + 3),(Value *)(plVar18 + 3));
  if ((uVar9 & 1) == 0) goto switchD_00883fb4_default;
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
    return true;
  }
  goto LAB_00884160;
}

