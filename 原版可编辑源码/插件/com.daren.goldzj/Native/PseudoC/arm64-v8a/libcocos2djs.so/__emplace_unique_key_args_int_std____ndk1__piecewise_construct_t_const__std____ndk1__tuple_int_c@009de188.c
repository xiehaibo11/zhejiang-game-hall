
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::WebViewImpl*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::WebViewImpl*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*> >
   >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
::
__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
          (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar9 = *(ulong *)(param_1 + 2);
  uVar10 = (ulong)*(int *)param_2;
                    /* try { // try from 009de1a4 to 00ade1ab has its CatchHandler @ 009de214 */
                    /* try { // try from 009de1ac to 00ade1bf has its CatchHandler @ 009de210 */
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar4 & uVar9) == 0) {
                    /* try { // try from 009de1d8 to 00ade243 has its CatchHandler @ 009de10c */
      unaff_x24 = uVar4 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
                    /* try { // try from 009de1c8 to 00ade1d7 has its CatchHandler @ 009de20c */
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_009de23c;
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if ((uVar4 & uVar9) == 0) {
                    /* catch() { ... } // from try @ 009de178 with catch @ 009de21c */
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar7 / uVar9;
            }
                    /* catch() { ... } // from try @ 009de1c8 with catch @ 009de20c */
                    /* catch() { ... } // from try @ 009de1ac with catch @ 009de210 */
                    /* catch() { ... } // from try @ 009de1a4 with catch @ 009de214 */
            if (uVar7 - uVar2 * uVar9 == unaff_x24) goto LAB_009de228;
            goto LAB_009de23c;
          }
                    /* catch() { ... } // from try @ 009de154 with catch @ 009de220 */
          if (uVar7 != unaff_x24) goto LAB_009de23c;
        }
LAB_009de228:
                    /* catch() { ... } // from try @ 009de14c with catch @ 009de230 */
      } while ((int)plVar8[2] != *(int *)param_2);
      uVar3 = 0;
      goto LAB_009de364;
    }
  }
LAB_009de23c:
  plVar8 = operator_new(0x20);
                    /* try { // try from 009de244 to 00ade297 has its CatchHandler @ 009de244
                       catch() { ... } // from try @ 009de244 with catch @ 009de244
                       catch() { ... } // from try @ 009de2e8 with catch @ 009de244 */
  uVar1 = **(undefined4 **)param_4;
  plVar8[3] = 0;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = uVar1;
  if ((uVar9 == 0) || ((float)param_1[8] * (float)uVar9 < (float)(*(long *)(param_1 + 6) + 1))) {
    if (uVar9 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar9 - 1 & uVar9) != 0);
                    /* try { // try from 009de298 to 00ade2a7 has its CatchHandler @ 009de338 */
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
            *)param_1,uVar9);
    uVar9 = *(ulong *)(param_1 + 2);
                    /* try { // try from 009de2c0 to 00ade2cb has its CatchHandler @ 009de340 */
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
                    /* try { // try from 009de2cc to 00ade2e7 has its CatchHandler @ 009de348 */
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
                    /* try { // try from 009de2e8 to 00ade363 has its CatchHandler @ 009de244 */
        unaff_x24 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar6 = *(long *)param_1;
  plVar5 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_1 + 4);
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar5;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 - 1 & uVar9) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
                    /* catch() { ... } // from try @ 009de298 with catch @ 009de338 */
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
                    /* catch() { ... } // from try @ 009de2c0 with catch @ 009de340 */
      }
                    /* catch() { ... } // from try @ 009de2cc with catch @ 009de348 */
      plVar5 = (long *)(*(long *)param_1 + uVar10 * 8);
      goto LAB_009de350;
    }
  }
  else {
    *plVar8 = *plVar5;
LAB_009de350:
    *plVar5 = (long)plVar8;
  }
  uVar3 = 1;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
LAB_009de364:
                    /* try { // try from 009de364 to 00ade3a3 has its CatchHandler @ 009de364
                       catch() { ... } // from try @ 009de364 with catch @ 009de364
                       catch() { ... } // from try @ 009de45c with catch @ 009de364 */
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar8;
  return auVar11;
}

