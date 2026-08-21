
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,
   cocos2d::Rect>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*, cocos2d::Rect>,
   std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,
   std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*, cocos2d::Rect>,
   std::__ndk1::hash<cocos2d::SpriteFrame*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,
   std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*, cocos2d::Rect>,
   std::__ndk1::equal_to<cocos2d::SpriteFrame*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*, cocos2d::Rect> >
   >::__emplace_unique_key_args<cocos2d::SpriteFrame*, std::__ndk1::pair<cocos2d::SpriteFrame*
   const, cocos2d::Rect> const&>(cocos2d::SpriteFrame* const&,
   std::__ndk1::pair<cocos2d::SpriteFrame* const, cocos2d::Rect> const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
::
__emplace_unique_key_args<cocos2d::SpriteFrame*,std::__ndk1::pair<cocos2d::SpriteFrame*const,cocos2d::Rect>const&>
          (__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
           *this,SpriteFrame **param_1,pair *param_2)

{
  ulong uVar1;
  SpriteFrame *pSVar2;
  long *plVar3;
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
  *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  
                    /* try { // try from 00fed94c to 010eda2f has its CatchHandler @ 00fed8c8 */
  pSVar2 = *param_1;
  uVar7 = ((ulong)(uint)((int)pSVar2 << 3) + 8 ^ (ulong)pSVar2 >> 0x20) * -0x622015f714c7d297;
  uVar10 = *(ulong *)(this + 8);
  uVar7 = (uVar7 ^ (ulong)pSVar2 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
                    /* catch() { ... } // from try @ 00fed934 with catch @ 00fed9d8 */
      unaff_x24 = uVar7 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar10 <= uVar7) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar7 / uVar10;
        }
        unaff_x24 = uVar7 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 != uVar7) {
          if (uVar5 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            if (uVar8 - uVar1 * uVar10 == unaff_x24) goto LAB_00feda08;
            break;
          }
          if (uVar8 != unaff_x24) break;
        }
LAB_00feda08:
        if ((SpriteFrame *)plVar9[2] == pSVar2) {
          return plVar9;
        }
      }
    }
  }
  plVar9 = operator_new(0x28);
  plVar9[2] = *(long *)param_2;
  cocos2d::Rect::Rect((Rect *)(plVar9 + 3),(Rect *)(param_2 + 8));
  *plVar9 = 0;
  plVar9[1] = uVar7;
  if ((uVar10 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar10 < (float)(*(long *)(this + 0x18) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar5 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    rehash(this,uVar5);
    uVar10 = *(ulong *)(this + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar7;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar10 <= uVar7) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar7 / uVar10;
        }
        unaff_x24 = uVar7 - uVar5 * uVar10;
      }
    }
  }
  lVar6 = *(long *)this;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x10;
    *plVar9 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar9;
    *(__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
      **)(lVar6 + unaff_x24 * 8) = p_Var4;
    if (*plVar9 == 0) goto LAB_00fedb64;
    uVar7 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar7 = uVar7 & uVar10 - 1;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fedba0 with catch @ 00fedb44
                       catch(type#1 @ 00000000) { ... } // from try @ 00fedd6c with catch @ 00fedb44
                        */
      if (uVar10 <= uVar7) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar5 * uVar10;
      }
    }
    plVar3 = (long *)(*(long *)this + uVar7 * 8);
  }
  else {
    *plVar9 = *plVar3;
  }
  *plVar3 = (long)plVar9;
LAB_00fedb64:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar9;
}

