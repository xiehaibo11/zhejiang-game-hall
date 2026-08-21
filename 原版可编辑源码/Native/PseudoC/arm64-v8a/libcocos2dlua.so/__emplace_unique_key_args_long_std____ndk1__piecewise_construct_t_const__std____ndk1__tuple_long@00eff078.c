
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<long,
   cocos2d::Texture2D*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<long, cocos2d::Texture2D*>,
   std::__ndk1::__unordered_map_hasher<long, std::__ndk1::__hash_value_type<long,
   cocos2d::Texture2D*>, std::__ndk1::hash<long>, true>, std::__ndk1::__unordered_map_equal<long,
   std::__ndk1::__hash_value_type<long, cocos2d::Texture2D*>, std::__ndk1::equal_to<long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<long, cocos2d::Texture2D*> >
   >::__emplace_unique_key_args<long, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<long&&>, std::__ndk1::tuple<> >(long const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<long&&>&&, std::__ndk1::tuple<>&&)
    */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
       ::
       __emplace_unique_key_args<long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<long&&>,std::__ndk1::tuple<>>
                 (long *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar7 = param_1[1];
  uVar8 = *(ulong *)param_2;
  if (uVar7 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar4 < 2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00efedac with catch @ 00eff0d8
                        */
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
                    /* try { // try from 00eff0dc to 00fff11b has its CatchHandler @ 00eff0dc
                       catch() { ... } // from try @ 00eff0dc with catch @ 00eff0dc
                       catch() { ... } // from try @ 00eff144 with catch @ 00eff0dc */
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar5 = plVar6[1];
                    /* try { // try from 00eff11c to 00fff127 has its CatchHandler @ 00eff1b4 */
        if (uVar5 != uVar8) {
          if (uVar4 < 2) {
            uVar5 = uVar5 & uVar7 - 1;
          }
          else {
                    /* try { // try from 00eff12c to 00fff137 has its CatchHandler @ 00eff19c */
            if (uVar7 <= uVar5) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar5 / uVar7;
              }
                    /* try { // try from 00eff140 to 00fff143 has its CatchHandler @ 00eff17c */
              if (uVar5 - uVar1 * uVar7 == unaff_x24) goto LAB_00eff104;
              break;
            }
          }
          if (uVar5 != unaff_x24) break;
        }
LAB_00eff104:
        if (plVar6[2] == uVar8) {
          return plVar6;
        }
      }
    }
  }
                    /* try { // try from 00eff144 to 00fff1cb has its CatchHandler @ 00eff0dc */
  plVar6 = operator_new(0x20);
  lVar2 = **(long **)param_4;
  *plVar6 = 0;
  plVar6[1] = uVar8;
  plVar6[2] = lVar2;
  plVar6[3] = 0;
                    /* catch() { ... } // from try @ 00eff140 with catch @ 00eff17c */
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
                    /* catch() { ... } // from try @ 00eff12c with catch @ 00eff19c */
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
                    /* catch() { ... } // from try @ 00eff11c with catch @ 00eff1b4 */
    rehash((__hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
            *)param_1,uVar4);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar4 * uVar7;
      }
    }
  }
  lVar2 = *param_1;
  plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar6 = *plVar3;
    *plVar3 = (long)plVar6;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar3;
    if (*plVar6 == 0) goto LAB_00eff258;
    uVar8 = *(ulong *)(*plVar6 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar4 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar6 = *plVar3;
  }
  *plVar3 = (long)plVar6;
LAB_00eff258:
  param_1[3] = param_1[3] + 1;
  return plVar6;
}

