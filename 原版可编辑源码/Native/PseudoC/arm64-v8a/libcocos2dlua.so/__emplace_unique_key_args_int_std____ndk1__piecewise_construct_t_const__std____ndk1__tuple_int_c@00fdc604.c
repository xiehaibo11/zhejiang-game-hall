
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue> >
   >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
       ::
       __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                 (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined2 uVar13;
  long *local_70;
  int *piStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar11 = *(ulong *)(param_1 + 2);
  uVar12 = (ulong)*(int *)param_2;
  if (uVar11 != 0) {
    uVar5 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar11 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar11))))
                                               ))));
    uVar13 = NEON_uaddlv(uVar5,1);
    uVar7 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
                    /* catch() { ... } // from try @ 00fdc6d4 with catch @ 00fdc674 */
      unaff_x25 = uVar11 - 1 & uVar12;
    }
    else {
                    /* catch() { ... } // from try @ 00fdc5ec with catch @ 00fdc658 */
      unaff_x25 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        unaff_x25 = uVar12 - uVar8 * uVar11;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)param_1 + unaff_x25 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar9; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar8 = plVar10[1];
        if (uVar8 != uVar12) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar11 - 1;
          }
          else {
                    /* try { // try from 00fdc6d0 to 010dc6d3 has its CatchHandler @ 00fdc7f0 */
            if (uVar11 <= uVar8) {
                    /* try { // try from 00fdc6d4 to 010dc80b has its CatchHandler @ 00fdc674 */
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar8 / uVar11;
              }
              if (uVar8 - uVar3 * uVar11 == unaff_x25) goto LAB_00fdc6a4;
              break;
            }
          }
          if (uVar8 != unaff_x25) break;
        }
LAB_00fdc6a4:
        if ((int)plVar10[2] == *(int *)param_2) {
          uVar5 = 0;
          goto LAB_00fdc84c;
        }
      }
    }
  }
  piVar1 = param_1 + 4;
  local_70 = operator_new(0x70);
  uVar2 = **(undefined4 **)param_4;
  local_60 = 1;
  local_70[3] = 0;
  local_70[4] = 0;
  *(undefined4 *)(local_70 + 5) = 0;
  local_70[7] = 0;
  local_70[6] = 0;
  local_70[9] = 0;
  local_70[8] = 0;
  local_70[0xb] = 0;
  local_70[10] = 0;
  local_70[0xd] = 0;
  local_70[0xc] = 0;
  *(undefined4 *)(local_70 + 2) = uVar2;
  *local_70 = 0;
  local_70[1] = uVar12;
  piStack_68 = piVar1;
  if ((uVar11 == 0) || ((float)param_1[8] * (float)uVar11 < (float)(*(long *)(param_1 + 6) + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar7 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
            *)param_1,uVar7);
    uVar11 = *(ulong *)(param_1 + 2);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x25 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x25 = uVar12 - uVar7 * uVar11;
      }
    }
  }
  plVar10 = local_70;
  plVar6 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *local_70 = *(long *)(param_1 + 4);
    *(long **)(param_1 + 4) = local_70;
    *(int **)(*(long *)param_1 + unaff_x25 * 8) = piVar1;
                    /* catch() { ... } // from try @ 00fdc6d0 with catch @ 00fdc7f0 */
    if (*local_70 != 0) {
      uVar12 = *(ulong *)(*local_70 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar7 * uVar11;
      }
      *(long **)(*(long *)param_1 + uVar12 * 8) = local_70;
    }
  }
  else {
    *local_70 = *plVar6;
    *plVar6 = (long)local_70;
  }
  local_70 = (long *)0x0;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  param_1 = (int *)FUN_00fdc1e8(&local_70);
  uVar5 = 1;
LAB_00fdc84c:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar5);
}

