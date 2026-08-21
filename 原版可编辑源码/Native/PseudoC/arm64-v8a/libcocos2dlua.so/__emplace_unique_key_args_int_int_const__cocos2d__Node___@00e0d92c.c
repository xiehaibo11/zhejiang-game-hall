
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Node*>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::Node*>, std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::Node*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::Node*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::Node*> >
   >::__emplace_unique_key_args<int, int const&, cocos2d::Node*&>(int const&, int const&,
   cocos2d::Node*&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Node*>>>
::__emplace_unique_key_args<int,int_const&,cocos2d::Node*&>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Node*>>>
           *this,int *param_1,int *param_2,Node **param_3)

{
  ulong uVar1;
  Node *pNVar2;
  long *plVar3;
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Node*>>>
  *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar9 = *(ulong *)(this + 8);
  uVar10 = (ulong)*param_1;
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
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
                    /* try { // try from 00e0d980 to 00f0da13 has its CatchHandler @ 00e0db10 */
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if (uVar5 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            if (uVar7 - uVar1 * uVar9 == unaff_x25) goto LAB_00e0d9c0;
            break;
          }
          if (uVar7 != unaff_x25) break;
        }
LAB_00e0d9c0:
        if (*(int *)(plVar8 + 2) == *param_1) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
  *(int *)(plVar8 + 2) = *param_2;
  pNVar2 = *param_3;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[3] = (long)pNVar2;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
                    /* try { // try from 00e0da50 to 00f0da5f has its CatchHandler @ 00e0db04 */
                    /* try { // try from 00e0da60 to 00f0db53 has its CatchHandler @ 00e0d3f0 */
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    rehash(this,uVar5);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar5 * uVar9;
      }
    }
  }
  lVar6 = *(long *)this;
  plVar3 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x10;
    *plVar8 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Node*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Node*>>>
      **)(lVar6 + unaff_x25 * 8) = p_Var4;
    if (*plVar8 == 0) goto LAB_00e0db18;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
                    /* catch() { ... } // from try @ 00e0d82c with catch @ 00e0db08 */
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar5 * uVar9;
                    /* catch() { ... } // from try @ 00e0da50 with catch @ 00e0db04 */
    }
                    /* catch() { ... } // from try @ 00e0d5dc with catch @ 00e0db0c */
                    /* catch() { ... } // from try @ 00e0d980 with catch @ 00e0db10 */
    plVar3 = (long *)(*(long *)this + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar3;
  }
                    /* catch() { ... } // from try @ 00e0d50c with catch @ 00e0db14 */
  *plVar3 = (long)plVar8;
LAB_00e0db18:
                    /* catch() { ... } // from try @ 00e0d730 with catch @ 00e0db18 */
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar8;
}

