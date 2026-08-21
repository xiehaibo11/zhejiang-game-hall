
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> >,
   std::__ndk1::__unordered_map_hasher<cocos2d::renderer::Texture*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> >,
   std::__ndk1::hash<cocos2d::renderer::Texture*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::renderer::Texture*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> >,
   std::__ndk1::equal_to<cocos2d::renderer::Texture*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> > >
   >::__emplace_unique_key_args<cocos2d::renderer::Texture*, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<cocos2d::renderer::Texture* const&>, std::__ndk1::tuple<>
   >(cocos2d::renderer::Texture* const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<cocos2d::renderer::Texture* const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::hash<cocos2d::renderer::Texture*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::equal_to<cocos2d::renderer::Texture*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>>>
::
__emplace_unique_key_args<cocos2d::renderer::Texture*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::renderer::Texture*const&>,std::__ndk1::tuple<>>
          (Texture **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  Texture **ppTVar3;
  Texture *pTVar4;
  ulong uVar5;
  Texture *pTVar6;
  Texture *pTVar7;
  Texture *pTVar8;
  Texture *pTVar9;
  Texture *unaff_x24;
  undefined1 auVar10 [16];
  
  uVar1 = *(ulong *)param_2;
                    /* try { // try from 009b15e0 to 00ab1623 has its CatchHandler @ 009b16a4 */
  uVar5 = ((uVar1 & 0x1fffffff) * 8 + 8 ^ uVar1 >> 0x20) * -0x622015f714c7d297;
  pTVar8 = param_1[1];
  uVar5 = (uVar5 ^ uVar1 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
  pTVar9 = (Texture *)((uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297);
                    /* try { // try from 009b1624 to 00ab171b has its CatchHandler @ 009b14f4 */
  if (pTVar8 != (Texture *)0x0) {
    pTVar4 = pTVar8 + -1;
    if (((ulong)pTVar4 & (ulong)pTVar8) == 0) {
      unaff_x24 = (Texture *)((ulong)pTVar9 & (ulong)pTVar4);
    }
    else {
      unaff_x24 = pTVar9;
      if (pTVar8 <= pTVar9) {
        uVar5 = 0;
        if (pTVar8 != (Texture *)0x0) {
          uVar5 = (ulong)pTVar9 / (ulong)pTVar8;
        }
        unaff_x24 = pTVar9 + -(uVar5 * (long)pTVar8);
      }
    }
    pTVar7 = *(Texture **)(*param_1 + (long)unaff_x24 * 8);
    if (pTVar7 != (Texture *)0x0) {
      do {
        pTVar7 = *(Texture **)pTVar7;
        if (pTVar7 == (Texture *)0x0) goto LAB_009b16b4;
        pTVar6 = *(Texture **)(pTVar7 + 8);
        if (pTVar6 != pTVar9) {
          if (((ulong)pTVar4 & (ulong)pTVar8) == 0) {
            pTVar6 = (Texture *)((ulong)pTVar6 & (ulong)pTVar4);
          }
          else if (pTVar8 <= pTVar6) {
            uVar5 = 0;
            if (pTVar8 != (Texture *)0x0) {
              uVar5 = (ulong)pTVar6 / (ulong)pTVar8;
            }
            if (pTVar6 + -(uVar5 * (long)pTVar8) == unaff_x24) goto LAB_009b16a0;
            goto LAB_009b16b4;
          }
          if (pTVar6 != unaff_x24) goto LAB_009b16b4;
        }
LAB_009b16a0:
                    /* catch() { ... } // from try @ 009b158c with catch @ 009b16a0 */
                    /* catch() { ... } // from try @ 009b15e0 with catch @ 009b16a4 */
                    /* catch() { ... } // from try @ 009b15c4 with catch @ 009b16a8 */
      } while (*(ulong *)(pTVar7 + 0x10) != uVar1);
                    /* catch() { ... } // from try @ 009b15a0 with catch @ 009b16ac */
      uVar2 = 0;
                    /* catch() { ... } // from try @ 009b1574 with catch @ 009b16b0 */
      goto LAB_009b17dc;
    }
  }
LAB_009b16b4:
                    /* catch() { ... } // from try @ 009b15a4 with catch @ 009b16b4 */
  pTVar7 = operator_new(0x28);
  uVar2 = **(undefined8 **)param_4;
  *(undefined8 *)(pTVar7 + 0x18) = 0;
  *(undefined8 *)(pTVar7 + 0x20) = 0;
                    /* catch() { ... } // from try @ 009b1544 with catch @ 009b16cc */
  *(undefined8 *)pTVar7 = 0;
  *(Texture **)(pTVar7 + 8) = pTVar9;
  *(undefined8 *)(pTVar7 + 0x10) = uVar2;
  if ((pTVar8 == (Texture *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pTVar8 < (float)(param_1[3] + 1))) {
    if (pTVar8 < (Texture *)0x3) {
      uVar1 = 1;
    }
    else {
      uVar1 = (ulong)(((ulong)(pTVar8 + -1) & (ulong)pTVar8) != 0);
    }
    uVar1 = uVar1 | (long)pTVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::hash<cocos2d::renderer::Texture*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::equal_to<cocos2d::renderer::Texture*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>>>
            *)param_1,uVar5);
    pTVar8 = param_1[1];
    if (((ulong)(pTVar8 + -1) & (ulong)pTVar8) == 0) {
      unaff_x24 = (Texture *)((ulong)(pTVar8 + -1) & (ulong)pTVar9);
    }
    else {
                    /* try { // try from 009b1744 to 00ab179f has its CatchHandler @ 009b1744
                       catch() { ... } // from try @ 009b1744 with catch @ 009b1744
                       catch() { ... } // from try @ 009b19b4 with catch @ 009b1744
                       catch() { ... } // from try @ 009b1c34 with catch @ 009b1744 */
      unaff_x24 = pTVar9;
      if (pTVar8 <= pTVar9) {
        uVar1 = 0;
        if (pTVar8 != (Texture *)0x0) {
          uVar1 = (ulong)pTVar9 / (ulong)pTVar8;
        }
        unaff_x24 = pTVar9 + -(uVar1 * (long)pTVar8);
      }
    }
  }
  pTVar4 = *param_1;
  pTVar9 = *(Texture **)(pTVar4 + (long)unaff_x24 * 8);
  if (pTVar9 == (Texture *)0x0) {
    ppTVar3 = param_1 + 2;
    *(Texture **)pTVar7 = *ppTVar3;
    *ppTVar3 = pTVar7;
    *(Texture ***)(pTVar4 + (long)unaff_x24 * 8) = ppTVar3;
    if (*(long *)pTVar7 != 0) {
      pTVar9 = *(Texture **)(*(long *)pTVar7 + 8);
                    /* try { // try from 009b17a0 to 00ab17b7 has its CatchHandler @ 009b1d84 */
      if (((ulong)(pTVar8 + -1) & (ulong)pTVar8) == 0) {
        pTVar9 = (Texture *)((ulong)pTVar9 & (ulong)(pTVar8 + -1));
      }
      else if (pTVar8 <= pTVar9) {
        uVar1 = 0;
        if (pTVar8 != (Texture *)0x0) {
          uVar1 = (ulong)pTVar9 / (ulong)pTVar8;
        }
        pTVar9 = pTVar9 + -(uVar1 * (long)pTVar8);
      }
                    /* try { // try from 009b17c0 to 00ab17cb has its CatchHandler @ 009b1d80 */
      pTVar9 = *param_1 + (long)pTVar9 * 8;
      goto LAB_009b17c8;
    }
  }
  else {
    *(undefined8 *)pTVar7 = *(undefined8 *)pTVar9;
LAB_009b17c8:
    *(Texture **)pTVar9 = pTVar7;
  }
                    /* try { // try from 009b17cc to 00ab17d7 has its CatchHandler @ 009b1d7c */
  uVar2 = 1;
                    /* try { // try from 009b17d8 to 00ab17ef has its CatchHandler @ 009b1d94 */
  param_1[3] = param_1[3] + 1;
LAB_009b17dc:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = pTVar7;
  return auVar10;
}

