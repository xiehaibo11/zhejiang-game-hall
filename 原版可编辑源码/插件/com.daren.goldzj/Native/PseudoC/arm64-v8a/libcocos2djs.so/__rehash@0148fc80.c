
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
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
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int> > >::__rehash(unsigned long)
    */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
           *this,ulong param_1)

{
  size_t __n;
  char *__s1;
  byte bVar1;
  byte bVar2;
  size_t sVar3;
  ulong uVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  char *__s2;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  
  if (param_1 == 0) {
    pvVar8 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(param_1 << 3);
    pvVar9 = *(void **)this;
    *(void **)this = pvVar8;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    uVar10 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_1 != uVar10);
    plVar15 = *(long **)(this + 0x10);
    if (plVar15 != (long *)0x0) {
      uVar10 = plVar15[1];
      uVar19 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar18 = NEON_uaddlv(uVar19,1);
      uVar13 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
      if (uVar13 < 2) {
        uVar10 = uVar10 & param_1 - 1;
      }
      else if (param_1 <= uVar10) {
        uVar17 = 0;
        if (param_1 != 0) {
          uVar17 = uVar10 / param_1;
        }
        uVar10 = uVar10 - uVar17 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
        **)(*(long *)this + uVar10 * 8) = this + 0x10;
      if ((long *)*plVar15 != (long *)0x0) {
        plVar16 = (long *)*plVar15;
        do {
          uVar17 = plVar16[1];
          if (uVar13 < 2) {
            uVar17 = uVar17 & param_1 - 1;
          }
          else if (param_1 <= uVar17) {
            uVar4 = 0;
            if (param_1 != 0) {
              uVar4 = uVar17 / param_1;
            }
            uVar17 = uVar17 - uVar4 * param_1;
          }
          if (uVar17 != uVar10) {
            if (*(long *)(*(long *)this + uVar17 * 8) == 0) {
              *(long **)(*(long *)this + uVar17 * 8) = plVar15;
              uVar10 = uVar17;
            }
            else {
              plVar11 = (long *)*plVar16;
              plVar14 = plVar16;
              if (plVar11 != (long *)0x0) {
                bVar2 = *(byte *)(plVar16 + 2);
                __n = (ulong)(bVar2 >> 1);
                if ((bVar2 & 1) != 0) {
                  __n = plVar16[3];
                }
                do {
                  plVar12 = plVar11;
                  bVar1 = *(byte *)(plVar12 + 2);
                  sVar3 = (ulong)(bVar1 >> 1);
                  if ((bVar1 & 1) != 0) {
                    sVar3 = plVar12[3];
                  }
                  if (__n != sVar3) break;
                  __s2 = (char *)plVar12[4];
                  __s1 = (char *)((long)plVar16 + 0x11);
                  if ((bVar2 & 1) != 0) {
                    __s1 = (char *)plVar16[4];
                  }
                  if ((bVar1 & 1) == 0) {
                    __s2 = (char *)((long)plVar12 + 0x11);
                  }
                  pcVar5 = (char *)((long)plVar16 + 0x11);
                  sVar3 = (ulong)(bVar2 >> 1);
                  sVar6 = __n;
                  if ((bVar2 & 1) == 0) {
                    while (sVar6 != 0) {
                      if (*pcVar5 != *__s2) goto LAB_0148fe8c;
                      __s2 = __s2 + 1;
                      sVar3 = sVar3 - 1;
                      pcVar5 = pcVar5 + 1;
                      sVar6 = sVar3;
                    }
                  }
                  else if ((__n != 0) && (iVar7 = memcmp(__s1,__s2,__n), iVar7 != 0)) break;
                  plVar11 = (long *)*plVar12;
                  plVar14 = plVar12;
                } while ((long *)*plVar12 != (long *)0x0);
              }
LAB_0148fe8c:
              *plVar15 = *plVar14;
              *plVar14 = **(long **)(*(long *)this + uVar17 * 8);
              **(undefined8 **)(*(long *)this + uVar17 * 8) = plVar16;
              plVar16 = plVar15;
            }
          }
          plVar11 = (long *)*plVar16;
          plVar15 = plVar16;
          plVar16 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  return;
}

