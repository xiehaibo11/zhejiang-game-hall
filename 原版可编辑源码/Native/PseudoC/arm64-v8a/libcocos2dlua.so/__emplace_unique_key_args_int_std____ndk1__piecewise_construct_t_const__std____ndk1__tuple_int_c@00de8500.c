
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::ui::WebViewImpl*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::ui::WebViewImpl*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::experimental::ui::WebViewImpl*>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::experimental::ui::WebViewImpl*>,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::ui::WebViewImpl*> > >::__emplace_unique_key_args<int,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<>
   >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>>>
       ::
       __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                 (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  
                    /* try { // try from 00de8508 to 00ee8513 has its CatchHandler @ 00de8aa8 */
  uVar8 = *(ulong *)(param_1 + 2);
  uVar9 = (ulong)*(int *)param_2;
                    /* try { // try from 00de851c to 00ee8527 has its CatchHandler @ 00de8c8c */
  if (uVar8 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00de8570 to 00ee88bf has its CatchHandler @ 00de8c90 */
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar9) {
          if (uVar4 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar6 / uVar8;
            }
            if (uVar6 - uVar2 * uVar8 == unaff_x24) goto LAB_00de858c;
            break;
          }
          if (uVar6 != unaff_x24) break;
        }
LAB_00de858c:
        if (*(int *)(plVar7 + 2) == *(int *)param_2) {
          return plVar7;
        }
      }
    }
  }
  plVar7 = operator_new(0x20);
  uVar1 = **(undefined4 **)param_4;
  plVar7[3] = 0;
  *plVar7 = 0;
  plVar7[1] = uVar9;
  *(undefined4 *)(plVar7 + 2) = uVar1;
  if ((uVar8 == 0) || ((float)param_1[8] * (float)uVar8 < (float)(*(long *)(param_1 + 6) + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>>>
            *)param_1,uVar4);
    uVar8 = *(ulong *)(param_1 + 2);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  lVar5 = *(long *)param_1;
  plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)(param_1 + 4);
    *plVar7 = *plVar3;
    *plVar3 = (long)plVar7;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar3;
    if (*plVar7 == 0) goto LAB_00de86e4;
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar4 * uVar8;
    }
    plVar3 = (long *)(*(long *)param_1 + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar3;
  }
  *plVar3 = (long)plVar7;
LAB_00de86e4:
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return plVar7;
}

