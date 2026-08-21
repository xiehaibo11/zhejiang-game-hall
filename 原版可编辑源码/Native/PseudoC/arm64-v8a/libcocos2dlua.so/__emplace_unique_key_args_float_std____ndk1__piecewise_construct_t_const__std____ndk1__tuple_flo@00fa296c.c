
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<float,
   std::__ndk1::vector<cocos2d::Node*, std::__ndk1::allocator<cocos2d::Node*> > >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<float,
   std::__ndk1::vector<cocos2d::Node*, std::__ndk1::allocator<cocos2d::Node*> > >,
   std::__ndk1::__unordered_map_hasher<float, std::__ndk1::__hash_value_type<float,
   std::__ndk1::vector<cocos2d::Node*, std::__ndk1::allocator<cocos2d::Node*> > >,
   std::__ndk1::hash<float>, true>, std::__ndk1::__unordered_map_equal<float,
   std::__ndk1::__hash_value_type<float, std::__ndk1::vector<cocos2d::Node*,
   std::__ndk1::allocator<cocos2d::Node*> > >, std::__ndk1::equal_to<float>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<float, std::__ndk1::vector<cocos2d::Node*,
   std::__ndk1::allocator<cocos2d::Node*> > > > >::__emplace_unique_key_args<float,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<float const&>, std::__ndk1::tuple<>
   >(float const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<float const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::__unordered_map_hasher<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::hash<float>,true>,std::__ndk1::__unordered_map_equal<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::equal_to<float>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>>
       ::
       __emplace_unique_key_args<float,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<float_const&>,std::__ndk1::tuple<>>
                 (float *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  float fVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  fVar11 = *(float *)param_2;
  uVar10 = *(ulong *)(param_1 + 2);
  uVar5 = 0;
  if (fVar11 != 0.0) {
    uVar5 = (ulong)(uint)fVar11;
  }
  if (uVar10 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
                    /* catch() { ... } // from try @ 00fa2b0c with catch @ 00fa29b0 */
    if (uVar6 < 2) {
      unaff_x24 = uVar5 & uVar10 + 0xffffffff;
    }
    else {
      unaff_x24 = uVar5;
      if (uVar10 <= uVar5) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar5 / uVar10;
        }
        unaff_x24 = uVar5 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
                    /* try { // try from 00fa2a20 to 010a2a3f has its CatchHandler @ 00fa2b58 */
        if (uVar8 != uVar5) {
          if (uVar6 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            if (uVar8 - uVar2 * uVar10 == unaff_x24) goto LAB_00fa2a08;
            break;
          }
          if (uVar8 != unaff_x24) break;
        }
LAB_00fa2a08:
        if (*(float *)(plVar9 + 2) == fVar11) {
          return plVar9;
        }
      }
    }
  }
  plVar9 = operator_new(0x30);
  uVar1 = **(undefined4 **)param_4;
  plVar9[4] = 0;
  plVar9[5] = 0;
                    /* try { // try from 00fa2a64 to 010a2a67 has its CatchHandler @ 00fa2b54 */
  *(undefined4 *)(plVar9 + 2) = uVar1;
  plVar9[3] = 0;
  *plVar9 = 0;
  plVar9[1] = uVar5;
                    /* try { // try from 00fa2a7c to 010a2aaf has its CatchHandler @ 00fa2b5c */
  if ((uVar10 == 0) || (param_1[8] * (float)uVar10 < (float)(*(long *)(param_1 + 6) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
                    /* try { // try from 00fa2ab4 to 010a2ac7 has its CatchHandler @ 00fa2b38 */
    uVar6 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / param_1[8]);
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::__unordered_map_hasher<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::hash<float>,true>,std::__ndk1::__unordered_map_equal<float,std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>,std::__ndk1::equal_to<float>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<float,std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>>
            *)param_1,uVar6);
    uVar10 = *(ulong *)(param_1 + 2);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (int)uVar10 - 1 & uVar5;
    }
    else {
      unaff_x24 = uVar5;
      if (uVar10 <= uVar5) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar5 / uVar10;
        }
        unaff_x24 = uVar5 - uVar6 * uVar10;
      }
    }
  }
  lVar7 = *(long *)param_1;
  plVar3 = *(long **)(lVar7 + unaff_x24 * 8);
                    /* try { // try from 00fa2b0c to 010a2bf7 has its CatchHandler @ 00fa29b0 */
  if (plVar3 == (long *)0x0) {
    pfVar4 = param_1 + 4;
    *plVar9 = *(long *)pfVar4;
    *(long **)pfVar4 = plVar9;
    *(float **)(lVar7 + unaff_x24 * 8) = pfVar4;
    if (*plVar9 == 0) goto LAB_00fa2b6c;
                    /* catch() { ... } // from try @ 00fa2ab4 with catch @ 00fa2b38 */
    uVar5 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
                    /* catch() { ... } // from try @ 00fa2a7c with catch @ 00fa2b5c
                       catch() { ... } // from try @ 00fa2ae0 with catch @ 00fa2b5c */
      uVar5 = uVar5 & uVar10 - 1;
    }
    else if (uVar10 <= uVar5) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar5 / uVar10;
      }
                    /* catch() { ... } // from try @ 00fa2a64 with catch @ 00fa2b54 */
      uVar5 = uVar5 - uVar6 * uVar10;
                    /* catch() { ... } // from try @ 00fa2a20 with catch @ 00fa2b58 */
    }
    plVar3 = (long *)(*(long *)param_1 + uVar5 * 8);
  }
  else {
    *plVar9 = *plVar3;
  }
  *plVar3 = (long)plVar9;
LAB_00fa2b6c:
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return plVar9;
}

