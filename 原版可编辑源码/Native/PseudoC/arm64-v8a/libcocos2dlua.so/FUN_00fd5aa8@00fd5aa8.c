
long * FUN_00fd5aa8(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
                    *param_1,ulong param_2,byte *param_3)

{
  size_t sVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *__s1;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if (uVar8 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar7 < 2) {
      param_2 = uVar8 - 1 & param_2;
    }
    else if (uVar8 <= param_2) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = param_2 / uVar8;
      }
      param_2 = param_2 - uVar6 * uVar8;
    }
    plVar5 = *(long **)(*(long *)param_1 + param_2 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      __n = *(size_t *)(param_3 + 8);
      __s2 = *(byte **)(param_3 + 0x10);
      if ((*param_3 & 1) == 0) {
        __s2 = param_3 + 1;
        __n = (ulong)(*param_3 >> 1);
      }
      do {
        uVar6 = plVar5[1];
        if (uVar7 < 2) {
          uVar6 = uVar6 & uVar8 - 1;
        }
        else if (uVar8 <= uVar6) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar3 * uVar8;
        }
        if (uVar6 != param_2) break;
        bVar2 = *(byte *)(plVar5 + 2);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar5[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar5[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar5 + 0x11);
          }
          if ((bVar2 & 1) == 0) {
            if (__n == 0) {
              return plVar5;
            }
            uVar6 = 0;
            while (*(byte *)((long)plVar5 + uVar6 + 0x11) == __s2[uVar6]) {
              uVar6 = uVar6 + 1;
              if (bVar2 >> 1 == uVar6) {
                return plVar5;
              }
            }
          }
          else {
            if (__n == 0) {
              return plVar5;
            }
            iVar4 = memcmp(__s1,__s2,__n);
            if (iVar4 == 0) {
              return plVar5;
            }
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  if ((uVar8 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar8 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar7 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::GLProgram*>>>
    ::rehash(param_1,uVar7);
  }
  return (long *)0x0;
}

