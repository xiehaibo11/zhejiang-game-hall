
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::ProgramLib::Template>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::ProgramLib::Template>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::ProgramLib::Template>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::ProgramLib::Template>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::ProgramLib::Template> > >::__emplace_unique_key_args<unsigned long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long const&>,
   std::__ndk1::tuple<> >(unsigned long const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>>>
::
__emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
          (ulong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined1 auVar10 [16];
  
  uVar8 = param_1[1];
  uVar9 = *(ulong *)param_2;
                    /* try { // try from 009c788c to 00ac7927 has its CatchHandler @ 009c7588 */
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar4 & uVar8) == 0) {
      unaff_x25 = uVar4 & uVar9;
    }
    else {
                    /* catch() { ... } // from try @ 009c760c with catch @ 009c78a0 */
      unaff_x25 = uVar9;
                    /* catch() { ... } // from try @ 009c7600 with catch @ 009c78a4 */
                    /* catch() { ... } // from try @ 009c766c with catch @ 009c78a8
                       catch() { ... } // from try @ 009c7700 with catch @ 009c78a8
                       catch() { ... } // from try @ 009c7834 with catch @ 009c78a8 */
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar6 * uVar8;
      }
    }
                    /* catch() { ... } // from try @ 009c75e0 with catch @ 009c78c0 */
    puVar7 = *(ulong **)(*param_1 + unaff_x25 * 8);
    if (puVar7 != (ulong *)0x0) {
      do {
        puVar7 = (ulong *)*puVar7;
                    /* catch() { ... } // from try @ 009c7618 with catch @ 009c78d0
                       catch() { ... } // from try @ 009c76b8 with catch @ 009c78d0
                       catch() { ... } // from try @ 009c775c with catch @ 009c78d0 */
        if (puVar7 == (ulong *)0x0) goto LAB_009c7920;
        uVar6 = puVar7[1];
        if (uVar6 != uVar9) {
          if ((uVar4 & uVar8) == 0) {
            uVar6 = uVar6 & uVar4;
          }
          else if (uVar8 <= uVar6) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar6 / uVar8;
            }
            if (uVar6 - uVar2 * uVar8 == unaff_x25) goto LAB_009c790c;
            goto LAB_009c7920;
          }
          if (uVar6 != unaff_x25) goto LAB_009c7920;
        }
LAB_009c790c:
      } while (puVar7[2] != uVar9);
      uVar3 = 0;
      goto LAB_009c7a68;
    }
  }
LAB_009c7920:
  puVar1 = param_1 + 2;
                    /* try { // try from 009c7928 to 00ac797f has its CatchHandler @ 009c7928
                       catch() { ... } // from try @ 009c7928 with catch @ 009c7928
                       catch() { ... } // from try @ 009c7c14 with catch @ 009c7928 */
  puVar7 = operator_new(0x80);
  puVar7[2] = **(ulong **)param_4;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = uVar9;
                    /* try { // try from 009c7980 to 00ac7997 has its CatchHandler @ 009c7c48 */
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    if (uVar8 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar8 - 1 & uVar8) != 0);
                    /* try { // try from 009c79a0 to 00ac79ab has its CatchHandler @ 009c7c2c */
    }
                    /* try { // try from 009c79ac to 00ac79b7 has its CatchHandler @ 009c7c28 */
    uVar4 = uVar4 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
                    /* try { // try from 009c79b8 to 00ac79f7 has its CatchHandler @ 009c7c58 */
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>>>
            *)param_1,uVar8);
    uVar8 = param_1[1];
    if ((uVar8 - 1 & uVar8) == 0) {
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  uVar9 = *param_1;
  puVar5 = *(ulong **)(uVar9 + unaff_x25 * 8);
  if (puVar5 == (ulong *)0x0) {
                    /* try { // try from 009c7a0c to 00ac7a53 has its CatchHandler @ 009c7c30 */
    *puVar7 = *puVar1;
    *puVar1 = (ulong)puVar7;
    *(ulong **)(uVar9 + unaff_x25 * 8) = puVar1;
    if (*puVar7 != 0) {
      uVar9 = *(ulong *)(*puVar7 + 8);
      if ((uVar8 - 1 & uVar8) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      puVar5 = (ulong *)(*param_1 + uVar9 * 8);
      goto LAB_009c7a54;
    }
  }
  else {
    *puVar7 = *puVar5;
LAB_009c7a54:
    *puVar5 = (ulong)puVar7;
  }
                    /* try { // try from 009c7a58 to 00ac7a9b has its CatchHandler @ 009c7c58 */
  uVar3 = 1;
  param_1[3] = param_1[3] + 1;
LAB_009c7a68:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = puVar7;
  return auVar10;
}

