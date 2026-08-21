
void FUN_00fa544c(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,long param_6,
                 long *param_7,long param_8)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *local_b0;
  long *local_a8;
  long local_98;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b0 = param_3;
  local_98 = param_6;
  if (param_6 != 0) {
    while( true ) {
      if ((local_98 <= param_8) || (param_5 <= param_8)) break;
      if (param_5 == 0) goto LAB_00fa5b3c;
      lVar11 = -param_5;
      while( true ) {
        lVar8 = *param_4;
        lVar14 = *param_1;
        local_80[0] = *(undefined8 *)(*param_2 + 0x88);
        local_70 = local_80;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                ::
                __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                          ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)local_80,
                           (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
        local_88 = *(undefined8 *)(lVar14 + 0x88);
        iVar1 = *(int *)(lVar4 + 0x18);
                    /* catch() { ... } // from try @ 00fa5570 with catch @ 00fa5504 */
        local_70 = &local_88;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                ::
                __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                          ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)&local_88,
                           (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
        if (*(int *)(lVar4 + 0x18) < iVar1) break;
        bVar3 = lVar11 == -1;
        lVar11 = lVar11 + 1;
        param_1 = param_1 + 1;
        if (bVar3) goto LAB_00fa5b3c;
      }
      param_5 = -lVar11;
      if (param_5 < local_98) {
        lVar4 = local_98;
        if (local_98 < 0) {
          lVar4 = local_98 + 1;
        }
        lVar4 = lVar4 >> 1;
                    /* try { // try from 00fa5568 to 010a556f has its CatchHandler @ 00fa5590 */
        plVar7 = param_2 + lVar4;
        plVar9 = param_1;
                    /* try { // try from 00fa5570 to 010a55a3 has its CatchHandler @ 00fa5504 */
        if ((long)param_2 - (long)param_1 != 0) {
          uVar10 = (long)param_2 - (long)param_1 >> 3;
          do {
            uVar15 = uVar10 >> 1;
            lVar12 = plVar9[uVar15];
                    /* catch() { ... } // from try @ 00fa5568 with catch @ 00fa5590 */
            local_80[0] = *(undefined8 *)(*plVar7 + 0x88);
            lVar14 = *param_4;
                    /* try { // try from 00fa55a4 to 010a56bb has its CatchHandler @ 00fa55a4
                       catch() { ... } // from try @ 00fa55a4 with catch @ 00fa55a4
                       catch() { ... } // from try @ 00fa65c8 with catch @ 00fa55a4
                       catch() { ... } // from try @ 00fa6edc with catch @ 00fa55a4
                       catch() { ... } // from try @ 00fa6f74 with catch @ 00fa55a4 */
            local_70 = local_80;
            lVar8 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                    ::
                    __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                              ((Node **)(lVar14 + 0xa0),(piecewise_construct_t *)local_80,
                               (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
            local_88 = *(undefined8 *)(lVar12 + 0x88);
            iVar1 = *(int *)(lVar8 + 0x18);
            local_70 = &local_88;
            lVar8 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                    ::
                    __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                              ((Node **)(lVar14 + 0xa0),(piecewise_construct_t *)&local_88,
                               (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
            uVar13 = uVar10 + ~uVar15;
            uVar10 = uVar15;
            if (iVar1 <= *(int *)(lVar8 + 0x18)) {
              plVar9 = plVar9 + uVar15 + 1;
              uVar10 = uVar13;
            }
          } while (uVar10 != 0);
        }
        param_5 = (long)plVar9 - (long)param_1 >> 3;
      }
      else {
        if (lVar11 == -1) {
          lVar11 = *param_1;
          *param_1 = *param_2;
          *param_2 = lVar11;
          goto LAB_00fa5b3c;
        }
        if (param_5 < 0) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        plVar9 = param_1 + param_5;
        plVar7 = param_2;
        if ((long)local_b0 - (long)param_2 != 0) {
          uVar10 = (long)local_b0 - (long)param_2 >> 3;
          plVar5 = param_2;
          do {
            uVar13 = uVar10 >> 1;
            lVar8 = *param_4;
            lVar14 = *plVar9;
            local_80[0] = *(undefined8 *)(plVar5[uVar13] + 0x88);
            local_70 = local_80;
            lVar4 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                    ::
                    __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                              ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)local_80,
                               (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
            local_88 = *(undefined8 *)(lVar14 + 0x88);
            iVar1 = *(int *)(lVar4 + 0x18);
            local_70 = &local_88;
            lVar4 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                    ::
                    __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                              ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)&local_88,
                               (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
                    /* try { // try from 00fa56bc to 010a56d3 has its CatchHandler @ 00fa705c */
            plVar7 = plVar5 + uVar13 + 1;
            uVar10 = uVar10 + ~uVar13;
            if (iVar1 <= *(int *)(lVar4 + 0x18)) {
              plVar7 = plVar5;
              uVar10 = uVar13;
            }
            plVar5 = plVar7;
          } while (uVar10 != 0);
        }
        lVar4 = (long)plVar7 - (long)param_2 >> 3;
      }
      plVar5 = plVar7;
      if ((plVar9 != param_2) && (plVar5 = plVar9, param_2 != plVar7)) {
                    /* try { // try from 00fa5740 to 010a5777 has its CatchHandler @ 00fa70f0 */
        plVar5 = (long *)FUN_00fa5dc8(plVar9,param_2,plVar7);
      }
      if (param_5 + lVar4 < (local_98 - (param_5 + lVar4)) - lVar11) {
        FUN_00fa544c(param_1,plVar9,plVar5,param_4,param_5,lVar4,param_7,param_8);
        param_1 = plVar5;
        lVar4 = local_98 - lVar4;
        param_5 = -(param_5 + lVar11);
        param_2 = plVar7;
      }
      else {
        FUN_00fa544c(plVar5,plVar7,local_b0,param_4,-(param_5 + lVar11),local_98 - lVar4,param_7,
                     param_8);
        param_2 = plVar9;
        local_b0 = plVar5;
      }
      local_98 = lVar4;
      if (lVar4 == 0) goto LAB_00fa5b3c;
    }
    if (local_98 < param_5) {
      if ((long)local_b0 - (long)param_2 == 0) goto LAB_00fa5b3c;
      uVar13 = ((long)local_b0 - (long)param_2) - 8;
                    /* try { // try from 00fa5818 to 010a581f has its CatchHandler @ 00fa6ff0 */
      uVar10 = (uVar13 >> 3) + 1;
      plVar7 = param_2;
      plVar9 = param_7;
      if ((uVar10 < 4) ||
         ((lVar11 = (uVar13 & 0xfffffffffffffff8) + 8, param_7 < (long *)((long)param_2 + lVar11) &&
          (param_2 < (long *)((long)param_7 + lVar11))))) goto LAB_00fa5894;
      uVar15 = uVar10 & 0x3ffffffffffffffc;
      plVar7 = param_2 + 2;
      plVar5 = param_7 + uVar15;
      plVar9 = param_7 + 2;
      uVar13 = uVar15;
      do {
        plVar6 = plVar7 + -1;
        lVar11 = plVar7[-2];
        lVar8 = plVar7[1];
        lVar4 = *plVar7;
        plVar7 = plVar7 + 4;
        uVar13 = uVar13 - 4;
        plVar9[-1] = *plVar6;
        plVar9[-2] = lVar11;
        plVar9[1] = lVar8;
        *plVar9 = lVar4;
        plVar9 = plVar9 + 4;
      } while (uVar13 != 0);
      plVar7 = param_2 + uVar15;
      plVar9 = plVar5;
      if (uVar10 != uVar15) {
LAB_00fa5894:
        do {
          plVar6 = plVar7 + 1;
          plVar5 = plVar9 + 1;
          *plVar9 = *plVar7;
          plVar7 = plVar6;
          plVar9 = plVar5;
        } while (local_b0 != plVar6);
      }
      while (plVar5 != param_7) {
        local_b0 = local_b0 + -1;
        if (param_2 == param_1) {
          lVar11 = 0;
                    /* try { // try from 00fa5b04 to 010a5b3b has its CatchHandler @ 00fa70cc */
          do {
            *(undefined8 *)((long)local_b0 + lVar11) = *(undefined8 *)((long)plVar5 + lVar11 + -8);
            lVar11 = lVar11 + -8;
          } while ((long)param_7 - (long)plVar5 != lVar11);
          break;
        }
        plVar9 = param_2 + -1;
        lVar8 = *plVar9;
        plVar7 = plVar5 + -1;
        lVar4 = *param_4;
        local_80[0] = *(undefined8 *)(*plVar7 + 0x88);
        local_70 = local_80;
        lVar11 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                 ::
                 __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                           ((Node **)(lVar4 + 0xa0),(piecewise_construct_t *)local_80,
                            (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
        local_88 = *(undefined8 *)(lVar8 + 0x88);
        iVar1 = *(int *)(lVar11 + 0x18);
        local_70 = &local_88;
        lVar11 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                 ::
                 __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                           ((Node **)(lVar4 + 0xa0),(piecewise_construct_t *)&local_88,
                            (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
        if (*(int *)(lVar11 + 0x18) < iVar1) {
          lVar11 = *plVar9;
          param_2 = plVar9;
          plVar7 = plVar5;
        }
        else {
          lVar11 = *plVar7;
        }
        *local_b0 = lVar11;
        plVar5 = plVar7;
      }
    }
    else {
      if (param_1 == param_2) goto LAB_00fa5b3c;
      uVar13 = (long)param_2 + (-8 - (long)param_1);
      uVar10 = (uVar13 >> 3) + 1;
      plVar7 = param_1;
      plVar9 = param_7;
      if ((uVar10 < 4) ||
         ((lVar11 = (uVar13 & 0xfffffffffffffff8) + 8, param_7 < (long *)((long)param_1 + lVar11) &&
          (param_1 < (long *)((long)param_7 + lVar11))))) goto LAB_00fa5a20;
      uVar15 = uVar10 & 0x3ffffffffffffffc;
      plVar7 = param_1 + 2;
                    /* try { // try from 00fa59f0 to 010a59f7 has its CatchHandler @ 00fa7030 */
      plVar5 = param_7 + uVar15;
      plVar9 = param_7 + 2;
      uVar13 = uVar15;
      do {
        plVar6 = plVar7 + -1;
        lVar11 = plVar7[-2];
        lVar8 = plVar7[1];
        lVar4 = *plVar7;
        plVar7 = plVar7 + 4;
        uVar13 = uVar13 - 4;
        plVar9[-1] = *plVar6;
        plVar9[-2] = lVar11;
        plVar9[1] = lVar8;
        *plVar9 = lVar4;
        plVar9 = plVar9 + 4;
      } while (uVar13 != 0);
      plVar7 = param_1 + uVar15;
      plVar9 = plVar5;
      if (uVar10 != uVar15) {
LAB_00fa5a20:
        do {
          plVar6 = plVar7 + 1;
          plVar5 = plVar9 + 1;
          *plVar9 = *plVar7;
          plVar7 = plVar6;
          plVar9 = plVar5;
        } while (param_2 != plVar6);
      }
      if (plVar5 == param_7) goto LAB_00fa5b3c;
      lVar11 = *param_4;
      local_a8 = param_7;
      do {
        if (param_2 == local_b0) {
          if ((long)plVar5 - (long)local_a8 != 0) {
            memmove(param_1,local_a8,(long)plVar5 - (long)local_a8);
          }
          break;
        }
        local_80[0] = *(undefined8 *)(*param_2 + 0x88);
        lVar8 = *local_a8;
        local_70 = local_80;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                ::
                __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                          ((Node **)(lVar11 + 0xa0),(piecewise_construct_t *)local_80,
                           (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
        local_88 = *(undefined8 *)(lVar8 + 0x88);
        iVar1 = *(int *)(lVar4 + 0x18);
        local_70 = &local_88;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                ::
                __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                          ((Node **)(lVar11 + 0xa0),(piecewise_construct_t *)&local_88,
                           (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
        if (*(int *)(lVar4 + 0x18) < iVar1) {
          lVar4 = *param_2;
          plVar7 = local_a8;
          param_2 = param_2 + 1;
        }
        else {
          plVar7 = local_a8 + 1;
          lVar4 = *local_a8;
        }
        *param_1 = lVar4;
        param_1 = param_1 + 1;
        local_a8 = plVar7;
      } while (plVar7 != plVar5);
    }
  }
LAB_00fa5b3c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

