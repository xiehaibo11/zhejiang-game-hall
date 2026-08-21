
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::BMFontConfiguration*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::BMFontConfiguration*>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::BMFontConfiguration*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::BMFontConfiguration*> >
   >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
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
  
                    /* try { // try from 00f03d88 to 01003da3 has its CatchHandler @ 00f03eb0 */
                    /* try { // try from 00f03da4 to 01003dcf has its CatchHandler @ 00f03cf0 */
  if (param_1 == 0) {
    pvVar8 = *(void **)this;
    *(undefined8 *)this = 0;
                    /* try { // try from 00f03e30 to 01003e3b has its CatchHandler @ 00f03ea8 */
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00f03e3c to 01003e57 has its CatchHandler @ 00f03ea0 */
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* try { // try from 00f03fe8 to 01003ff3 has its CatchHandler @ 00f04118 */
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar8 = operator_new(param_1 << 3);
    pvVar9 = *(void **)this;
    *(void **)this = pvVar8;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
                    /* try { // try from 00f03dd0 to 01003ddb has its CatchHandler @ 00f03eac */
    uVar10 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
                    /* try { // try from 00f03ddc to 01003df7 has its CatchHandler @ 00f03ea4 */
      *(undefined8 *)(*(long *)this + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_1 != uVar10);
    plVar15 = *(long **)(this + 0x10);
    if (plVar15 != (long *)0x0) {
                    /* try { // try from 00f03df8 to 01003e2f has its CatchHandler @ 00f03cf0 */
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
      *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BMFontConfiguration*>>>
        **)(*(long *)this + uVar10 * 8) = this + 0x10;
      if ((long *)*plVar15 != (long *)0x0) {
                    /* try { // try from 00f03e58 to 01003efb has its CatchHandler @ 00f03cf0 */
        plVar16 = (long *)*plVar15;
        do {
          uVar17 = plVar16[1];
          if (uVar13 < 2) {
                    /* catch() { ... } // from try @ 00f03e3c with catch @ 00f03ea0 */
            uVar17 = uVar17 & param_1 - 1;
          }
          else if (param_1 <= uVar17) {
            uVar4 = 0;
            if (param_1 != 0) {
              uVar4 = uVar17 / param_1;
            }
            uVar17 = uVar17 - uVar4 * param_1;
          }
                    /* catch() { ... } // from try @ 00f03ddc with catch @ 00f03ea4 */
                    /* catch() { ... } // from try @ 00f03e30 with catch @ 00f03ea8 */
          if (uVar17 != uVar10) {
                    /* catch() { ... } // from try @ 00f03dd0 with catch @ 00f03eac */
                    /* catch() { ... } // from try @ 00f03d88 with catch @ 00f03eb0 */
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
                    /* try { // try from 00f03efc to 01003f87 has its CatchHandler @ 00f03efc
                       catch() { ... } // from try @ 00f03efc with catch @ 00f03efc
                       catch() { ... } // from try @ 00f03fb0 with catch @ 00f03efc
                       catch() { ... } // from try @ 00f04010 with catch @ 00f03efc
                       catch() { ... } // from try @ 00f0409c with catch @ 00f03efc */
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
                      if (*pcVar5 != *__s2) goto LAB_00f03f88;
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
LAB_00f03f88:
                    /* try { // try from 00f03f88 to 01003f93 has its CatchHandler @ 00f040e4 */
              *plVar15 = *plVar14;
                    /* try { // try from 00f03f94 to 01003faf has its CatchHandler @ 00f040dc */
              *plVar14 = **(long **)(*(long *)this + uVar17 * 8);
              **(undefined8 **)(*(long *)this + uVar17 * 8) = plVar16;
              plVar16 = plVar15;
                    /* try { // try from 00f03fb0 to 01003fe7 has its CatchHandler @ 00f03efc */
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

