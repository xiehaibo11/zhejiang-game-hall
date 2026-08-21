
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, std::__ndk1::__unordered_map_hasher<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::hash<char32_t>, true>, std::__ndk1::__unordered_map_equal<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::equal_to<char32_t>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition> >
   >::__emplace_unique_key_args<char32_t, std::__ndk1::pair<char32_t const,
   cocos2d::FontLetterDefinition> const&>(char32_t const&, std::__ndk1::pair<char32_t const,
   cocos2d::FontLetterDefinition> const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
::
__emplace_unique_key_args<char32_t,std::__ndk1::pair<char32_t_const,cocos2d::FontLetterDefinition>const&>
          (__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
           *this,wchar32 *param_1,pair *param_2)

{
  wchar32 wVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
  *p_Var5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar9 = *(ulong *)(this + 8);
  wVar1 = *param_1;
  uVar10 = (ulong)(uint)wVar1;
  if (uVar9 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)(uint)((int)uVar9 - 1U & wVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar7 / uVar9;
            }
            if (uVar7 - uVar2 * uVar9 == unaff_x24) goto LAB_00f14464;
            break;
          }
          if (uVar7 != unaff_x24) break;
        }
LAB_00f14464:
        if (*(wchar32 *)(plVar8 + 2) == wVar1) {
          return plVar8;
        }
                    /* catch() { ... } // from try @ 00f144b4 with catch @ 00f14470 */
      }
    }
  }
  plVar8 = operator_new(0x38);
  lVar14 = *(long *)(param_2 + 8);
  lVar13 = *(long *)param_2;
                    /* try { // try from 00f144ac to 010144b3 has its CatchHandler @ 00f144f0 */
  lVar16 = *(long *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x20);
                    /* try { // try from 00f144b4 to 0101450b has its CatchHandler @ 00f14470 */
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[3] = lVar14;
  plVar8[2] = lVar13;
  plVar8[5] = lVar16;
  plVar8[4] = lVar15;
  plVar8[6] = lVar3;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
                    /* catch() { ... } // from try @ 00f144ac with catch @ 00f144f0 */
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    rehash(this,uVar6);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)(uint)((int)uVar9 - 1U & wVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *(long *)this;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar8 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
      **)(lVar3 + unaff_x24 * 8) = p_Var5;
    if (*plVar8 == 0) goto LAB_00f145c0;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar6 * uVar9;
    }
    plVar4 = (long *)(*(long *)this + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_00f145c0:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
                    /* try { // try from 00f145e0 to 0101464b has its CatchHandler @ 00f145e0
                       catch() { ... } // from try @ 00f145e0 with catch @ 00f145e0
                       catch() { ... } // from try @ 00f1467c with catch @ 00f145e0 */
  return plVar8;
}

