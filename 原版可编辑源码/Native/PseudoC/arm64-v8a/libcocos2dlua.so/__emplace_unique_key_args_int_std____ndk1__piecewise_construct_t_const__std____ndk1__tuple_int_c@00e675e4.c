
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::AudioEngine::AudioInfo>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::AudioEngine::AudioInfo>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::experimental::AudioEngine::AudioInfo>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::experimental::AudioEngine::AudioInfo>,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::AudioEngine::AudioInfo> > >::__emplace_unique_key_args<int,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<>
   >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
       ::
       __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                 (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar7 = *(ulong *)(param_1 + 2);
  uVar8 = (ulong)*(int *)param_2;
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
    uVar3 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar3 < 2) {
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
    plVar6 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar5 = plVar6[1];
        if (uVar5 != uVar8) {
          if (uVar3 < 2) {
            uVar5 = uVar5 & uVar7 - 1;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            if (uVar5 - uVar1 * uVar7 == unaff_x24) goto LAB_00e67670;
            break;
          }
          if (uVar5 != unaff_x24) break;
        }
LAB_00e67670:
        if (*(int *)(plVar6 + 2) == *(int *)param_2) {
          return plVar6;
        }
      }
    }
  }
  plVar6 = operator_new(0x38);
  *(undefined4 *)(plVar6 + 2) = **(undefined4 **)param_4;
  cocos2d::experimental::AudioEngine::AudioInfo::AudioInfo((AudioInfo *)(plVar6 + 3));
  *plVar6 = 0;
  plVar6[1] = uVar8;
  if ((uVar7 == 0) || ((float)param_1[8] * (float)uVar7 < (float)(*(long *)(param_1 + 6) + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar3 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::AudioEngine::AudioInfo>>>
            *)param_1,uVar3);
    uVar7 = *(ulong *)(param_1 + 2);
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar3 * uVar7;
      }
    }
  }
  lVar4 = *(long *)param_1;
  plVar2 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)(param_1 + 4);
    *plVar6 = *plVar2;
    *plVar2 = (long)plVar6;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar2;
    if (*plVar6 == 0) goto LAB_00e677cc;
    uVar8 = *(ulong *)(*plVar6 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar3 * uVar7;
    }
    plVar2 = (long *)(*(long *)param_1 + uVar8 * 8);
  }
  else {
    *plVar6 = *plVar2;
  }
  *plVar2 = (long)plVar6;
LAB_00e677cc:
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return plVar6;
}

