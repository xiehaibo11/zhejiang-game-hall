
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Sprite3DMaterial*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Sprite3DMaterial*>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Sprite3DMaterial*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Sprite3DMaterial*> >
   >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>>>
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3490c with catch @ 00d349f4
                        */
    if (pvVar8 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d348d8 with catch @ 00d349f8
                        */
      operator_delete(pvVar8);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d34760 with catch @ 00d349fc
                        */
    *(undefined8 *)(this + 8) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3492c with catch @ 00d34a00
                        */
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d34bb0 to 00e34bb7 has its CatchHandler @ 00d34d04 */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
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
                    /* try { // try from 00d349a8 to 00e349b7 has its CatchHandler @ 00d349bc */
    } while (param_1 != uVar10);
    plVar15 = *(long **)(this + 0x10);
                    /* try { // try from 00d349b8 to 00e34a1b has its CatchHandler @ 00d3461c */
    if (plVar15 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d346f4 with catch @ 00d349bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00d349a8 with catch @ 00d349bc
                        */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d347ec with catch @ 00d349d0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d34728 with catch @ 00d349d4
                        */
      if (uVar13 < 2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d34774 with catch @ 00d34a04
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d34828 with catch @ 00d34a08
                        */
        uVar10 = uVar10 & param_1 - 1;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3489c with catch @ 00d349d8
                       catch(type#1 @ 00000000) { ... } // from try @ 00d348f4 with catch @ 00d349d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d34820 with catch @ 00d349dc
                        */
        if (param_1 <= uVar10) {
          uVar17 = 0;
          if (param_1 != 0) {
            uVar17 = uVar10 / param_1;
          }
          uVar10 = uVar10 - uVar17 * param_1;
        }
      }
      *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>>>
        **)(*(long *)this + uVar10 * 8) = this + 0x10;
      if ((long *)*plVar15 != (long *)0x0) {
                    /* try { // try from 00d34a1c to 00e34a1f has its CatchHandler @ 00d34a78 */
        plVar16 = (long *)*plVar15;
                    /* try { // try from 00d34a20 to 00e34a8b has its CatchHandler @ 00d3461c */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d34a1c with catch @ 00d34a78
                        */
            if (*(long *)(*(long *)this + uVar17 * 8) == 0) {
              *(long **)(*(long *)this + uVar17 * 8) = plVar15;
              uVar10 = uVar17;
            }
            else {
              plVar11 = (long *)*plVar16;
              plVar14 = plVar16;
              if (plVar11 != (long *)0x0) {
                bVar2 = *(byte *)(plVar16 + 2);
                    /* try { // try from 00d34a8c to 00e34b57 has its CatchHandler @ 00d34a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d34a8c with catch @ 00d34a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d34b60 with catch @ 00d34a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d34d00 with catch @ 00d34a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d34d5c with catch @ 00d34a8c
                        */
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
                      if (*pcVar5 != *__s2) goto LAB_00d34b4c;
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
LAB_00d34b4c:
              *plVar15 = *plVar14;
                    /* try { // try from 00d34b58 to 00e34b5f has its CatchHandler @ 00d34d08 */
                    /* try { // try from 00d34b60 to 00e34b87 has its CatchHandler @ 00d34a8c */
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
                    /* try { // try from 00d34b88 to 00e34b8f has its CatchHandler @ 00d34d18 */
  return;
}

