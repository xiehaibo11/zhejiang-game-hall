
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::DeviceGraphics::Uniform>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::DeviceGraphics::Uniform>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::DeviceGraphics::Uniform>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::DeviceGraphics::Uniform>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::DeviceGraphics::Uniform> > >::__emplace_unique_key_args<unsigned long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long const&>,
   std::__ndk1::tuple<> >(unsigned long const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>>>
::
__emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
          (ulong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined1 auVar9 [16];
  
  uVar7 = param_1[1];
  uVar8 = *(ulong *)param_2;
  if (uVar7 != 0) {
    uVar3 = uVar7 - 1;
    if ((uVar3 & uVar7) == 0) {
      unaff_x24 = uVar3 & uVar8;
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
    puVar6 = *(ulong **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (ulong *)0x0) {
      do {
        puVar6 = (ulong *)*puVar6;
        if (puVar6 == (ulong *)0x0) goto LAB_009b589c;
        uVar5 = puVar6[1];
        if (uVar5 != uVar8) {
          if ((uVar3 & uVar7) == 0) {
            uVar5 = uVar5 & uVar3;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            if (uVar5 - uVar1 * uVar7 == unaff_x24) goto LAB_009b5888;
            goto LAB_009b589c;
          }
          if (uVar5 != unaff_x24) goto LAB_009b589c;
        }
LAB_009b5888:
      } while (puVar6[2] != uVar8);
      uVar2 = 0;
      goto LAB_009b59d4;
    }
  }
LAB_009b589c:
  puVar6 = operator_new(0x38);
  uVar3 = **(ulong **)param_4;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[1] = uVar8;
  puVar6[2] = uVar3;
  puVar6[3] = 0;
  *(undefined2 *)(puVar6 + 6) = 1;
  *puVar6 = 0;
                    /* try { // try from 009b58e4 to 00ab59c7 has its CatchHandler @ 009b5704 */
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    if (uVar7 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar7 - 1 & uVar7) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar3) {
      uVar7 = uVar3;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>>>
            *)param_1,uVar7);
    uVar7 = param_1[1];
    if ((uVar7 - 1 & uVar7) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
                    /* catch() { ... } // from try @ 009b5784 with catch @ 009b5958 */
        unaff_x24 = uVar8 - uVar3 * uVar7;
      }
    }
  }
                    /* catch() { ... } // from try @ 009b5778 with catch @ 009b595c */
  uVar8 = *param_1;
                    /* catch() { ... } // from try @ 009b5758 with catch @ 009b5960 */
  puVar4 = *(ulong **)(uVar8 + unaff_x24 * 8);
  if (puVar4 == (ulong *)0x0) {
    puVar4 = param_1 + 2;
    *puVar6 = *puVar4;
    *puVar4 = (ulong)puVar6;
    *(ulong **)(uVar8 + unaff_x24 * 8) = puVar4;
    if (*puVar6 != 0) {
      uVar8 = *(ulong *)(*puVar6 + 8);
      if ((uVar7 - 1 & uVar7) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      puVar4 = (ulong *)(*param_1 + uVar8 * 8);
      goto LAB_009b59c0;
    }
  }
  else {
    *puVar6 = *puVar4;
                    /* catch() { ... } // from try @ 009b5790 with catch @ 009b5970 */
LAB_009b59c0:
    *puVar4 = (ulong)puVar6;
  }
                    /* try { // try from 009b59c8 to 00ab5a1b has its CatchHandler @ 009b59c8
                       catch() { ... } // from try @ 009b59c8 with catch @ 009b59c8
                       catch() { ... } // from try @ 009b5c5c with catch @ 009b59c8 */
  uVar2 = 1;
  param_1[3] = param_1[3] + 1;
LAB_009b59d4:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = puVar6;
  return auVar9;
}

