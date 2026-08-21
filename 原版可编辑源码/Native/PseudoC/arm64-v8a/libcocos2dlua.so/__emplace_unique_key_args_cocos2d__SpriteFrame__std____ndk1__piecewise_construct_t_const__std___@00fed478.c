
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
   >::__emplace_unique_key_args<cocos2d::SpriteFrame*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<cocos2d::SpriteFrame* const&>, std::__ndk1::tuple<> >(cocos2d::SpriteFrame*
   const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<cocos2d::SpriteFrame*
   const&>&&, std::__ndk1::tuple<>&&) */

SpriteFrame *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
::
__emplace_unique_key_args<cocos2d::SpriteFrame*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::SpriteFrame*const&>,std::__ndk1::tuple<>>
          (SpriteFrame **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  SpriteFrame **ppSVar3;
  SpriteFrame *pSVar4;
  ulong uVar5;
  SpriteFrame *pSVar6;
  SpriteFrame *pSVar7;
  SpriteFrame *pSVar8;
  SpriteFrame *unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar2 = *(ulong *)param_2;
                    /* try { // try from 00fed4a4 to 010ed4a7 has its CatchHandler @ 00fed5e4 */
  uVar5 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pSVar7 = param_1[1];
  uVar5 = (uVar5 ^ uVar2 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
  pSVar8 = (SpriteFrame *)((uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297);
  if (pSVar7 != (SpriteFrame *)0x0) {
    uVar10 = CONCAT17(POPCOUNT((char)((ulong)pSVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)pSVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)pSVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)pSVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)pSVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)pSVar7 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  pSVar7 >> 8)),POPCOUNT((char)pSVar7))))))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = (SpriteFrame *)((ulong)pSVar8 & (ulong)(pSVar7 + -1));
    }
    else {
      unaff_x24 = pSVar8;
      if (pSVar7 <= pSVar8) {
        uVar1 = 0;
        if (pSVar7 != (SpriteFrame *)0x0) {
          uVar1 = (ulong)pSVar8 / (ulong)pSVar7;
        }
        unaff_x24 = pSVar8 + -(uVar1 * (long)pSVar7);
      }
    }
                    /* try { // try from 00fed51c to 010ed527 has its CatchHandler @ 00fed52c */
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
                    /* try { // try from 00fed528 to 010ed63f has its CatchHandler @ 00fed05c */
      for (pSVar6 = (SpriteFrame *)**(long **)(*param_1 + (long)unaff_x24 * 8);
          pSVar6 != (SpriteFrame *)0x0; pSVar6 = *(SpriteFrame **)pSVar6) {
        pSVar4 = *(SpriteFrame **)(pSVar6 + 8);
        if (pSVar4 != pSVar8) {
                    /* catch() { ... } // from try @ 00fed1f4 with catch @ 00fed55c */
                    /* catch() { ... } // from try @ 00fed380 with catch @ 00fed560 */
          if (uVar5 < 2) {
            pSVar4 = (SpriteFrame *)((ulong)pSVar4 & (ulong)(pSVar7 + -1));
          }
          else {
                    /* catch() { ... } // from try @ 00fed0e8 with catch @ 00fed564 */
                    /* catch() { ... } // from try @ 00fed0f0 with catch @ 00fed568 */
            if (pSVar7 <= pSVar4) {
                    /* catch() { ... } // from try @ 00fed104 with catch @ 00fed56c */
              uVar1 = 0;
              if (pSVar7 != (SpriteFrame *)0x0) {
                uVar1 = (ulong)pSVar4 / (ulong)pSVar7;
              }
                    /* catch() { ... } // from try @ 00fed130 with catch @ 00fed570 */
                    /* catch() { ... } // from try @ 00fed178 with catch @ 00fed574 */
              if (pSVar4 + -(uVar1 * (long)pSVar7) == unaff_x24) goto LAB_00fed53c;
              break;
            }
          }
          if (pSVar4 != unaff_x24) break;
        }
LAB_00fed53c:
                    /* catch() { ... } // from try @ 00fed434 with catch @ 00fed544 */
        if (*(ulong *)(pSVar6 + 0x10) == uVar2) {
          return pSVar6;
        }
      }
    }
  }
  pSVar6 = operator_new(0x28);
                    /* catch() { ... } // from try @ 00fed398 with catch @ 00fed584 */
  *(undefined8 *)(pSVar6 + 0x10) = **(undefined8 **)param_4;
                    /* catch() { ... } // from try @ 00fed144 with catch @ 00fed594 */
                    /* catch() { ... } // from try @ 00fed18c with catch @ 00fed598 */
  cocos2d::Rect::Rect((Rect *)(pSVar6 + 0x18));
  *(undefined8 *)pSVar6 = 0;
  *(SpriteFrame **)(pSVar6 + 8) = pSVar8;
  if ((pSVar7 == (SpriteFrame *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pSVar7 < (float)(param_1[3] + 1))) {
                    /* catch() { ... } // from try @ 00fed3dc with catch @ 00fed5c4
                       catch() { ... } // from try @ 00fed468 with catch @ 00fed5c4 */
                    /* catch() { ... } // from try @ 00fed2e4 with catch @ 00fed5c8 */
                    /* catch() { ... } // from try @ 00fed288 with catch @ 00fed5cc */
                    /* catch() { ... } // from try @ 00fed2d0 with catch @ 00fed5d0 */
                    /* catch() { ... } // from try @ 00fed224 with catch @ 00fed5d4 */
                    /* catch() { ... } // from try @ 00fed230 with catch @ 00fed5d8 */
                    /* catch() { ... } // from try @ 00fed274 with catch @ 00fed5e0 */
    uVar2 = (ulong)(pSVar7 < (SpriteFrame *)0x3 || ((ulong)pSVar7 & (ulong)(pSVar7 + -1)) != 0) |
            (long)pSVar7 << 1;
                    /* catch() { ... } // from try @ 00fed4a4 with catch @ 00fed5e4 */
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
                    /* catch() { ... } // from try @ 00fed29c with catch @ 00fed5e8 */
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
            *)param_1,uVar5);
    pSVar7 = param_1[1];
    if (((ulong)pSVar7 & (ulong)(pSVar7 + -1)) == 0) {
      unaff_x24 = (SpriteFrame *)((ulong)(pSVar7 + -1) & (ulong)pSVar8);
                    /* catch() { ... } // from try @ 00fed240 with catch @ 00fed61c */
    }
    else {
                    /* catch() { ... } // from try @ 00fed328 with catch @ 00fed608 */
      unaff_x24 = pSVar8;
      if (pSVar7 <= pSVar8) {
        uVar2 = 0;
        if (pSVar7 != (SpriteFrame *)0x0) {
          uVar2 = (ulong)pSVar8 / (ulong)pSVar7;
        }
        unaff_x24 = pSVar8 + -(uVar2 * (long)pSVar7);
      }
    }
  }
  pSVar4 = *param_1;
  pSVar8 = *(SpriteFrame **)(pSVar4 + (long)unaff_x24 * 8);
  if (pSVar8 == (SpriteFrame *)0x0) {
    ppSVar3 = param_1 + 2;
    *(SpriteFrame **)pSVar6 = *ppSVar3;
    *ppSVar3 = pSVar6;
    *(SpriteFrame ***)(pSVar4 + (long)unaff_x24 * 8) = ppSVar3;
    if (*(long *)pSVar6 == 0) goto LAB_00fed698;
    pSVar8 = *(SpriteFrame **)(*(long *)pSVar6 + 8);
                    /* catch() { ... } // from try @ 00fed640 with catch @ 00fed668 */
    if (((ulong)pSVar7 & (ulong)(pSVar7 + -1)) == 0) {
      pSVar8 = (SpriteFrame *)((ulong)pSVar8 & (ulong)(pSVar7 + -1));
    }
    else if (pSVar7 <= pSVar8) {
                    /* try { // try from 00fed67c to 010ed747 has its CatchHandler @ 00fed67c
                       catch() { ... } // from try @ 00fed67c with catch @ 00fed67c
                       catch() { ... } // from try @ 00fed74c with catch @ 00fed67c
                       catch() { ... } // from try @ 00fed788 with catch @ 00fed67c
                       catch() { ... } // from try @ 00fed824 with catch @ 00fed67c
                       catch() { ... } // from try @ 00fed890 with catch @ 00fed67c */
      uVar2 = 0;
      if (pSVar7 != (SpriteFrame *)0x0) {
        uVar2 = (ulong)pSVar8 / (ulong)pSVar7;
      }
      pSVar8 = pSVar8 + -(uVar2 * (long)pSVar7);
    }
    pSVar8 = *param_1 + (long)pSVar8 * 8;
  }
  else {
                    /* try { // try from 00fed640 to 010ed643 has its CatchHandler @ 00fed668 */
    *(undefined8 *)pSVar6 = *(undefined8 *)pSVar8;
  }
  *(SpriteFrame **)pSVar8 = pSVar6;
LAB_00fed698:
  param_1[3] = param_1[3] + 1;
  return pSVar6;
}

