
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::FontLetterDefinition>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::FontLetterDefinition>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::FontLetterDefinition>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::FontLetterDefinition>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::FontLetterDefinition> > >::__emplace_unique_key_args<unsigned long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long const&>,
   std::__ndk1::tuple<> >(unsigned long const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>>>
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
        if (puVar6 == (ulong *)0x0) goto LAB_009f35dc;
        uVar5 = puVar6[1];
        if (uVar5 != uVar8) {
          if ((uVar3 & uVar7) == 0) {
            uVar5 = uVar5 & uVar3;
          }
          else {
                    /* try { // try from 009f35a0 to 00af35a7 has its CatchHandler @ 009f35ac */
            if (uVar7 <= uVar5) {
                    /* try { // try from 009f35a8 to 00af35c7 has its CatchHandler @ 009f3374 */
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar5 / uVar7;
              }
                    /* catch() { ... } // from try @ 009f3460 with catch @ 009f35ac
                       catch() { ... } // from try @ 009f35a0 with catch @ 009f35ac */
              if (uVar5 - uVar1 * uVar7 == unaff_x24) goto LAB_009f35c8;
              goto LAB_009f35dc;
            }
          }
          if (uVar5 != unaff_x24) goto LAB_009f35dc;
        }
LAB_009f35c8:
      } while (puVar6[2] != uVar8);
      uVar2 = 0;
      goto LAB_009f3724;
    }
  }
LAB_009f35dc:
  puVar6 = operator_new(0x48);
  uVar3 = **(ulong **)param_4;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[2] = uVar3;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 5) = 0;
  cocos2d::Rect::Rect((Rect *)(puVar6 + 5));
  *(undefined1 *)((long)puVar6 + 0x44) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *puVar6 = 0;
  puVar6[1] = uVar8;
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
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>>>
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
        unaff_x24 = uVar8 - uVar3 * uVar7;
      }
    }
  }
  uVar8 = *param_1;
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
      goto LAB_009f3710;
    }
  }
  else {
    *puVar6 = *puVar4;
LAB_009f3710:
    *puVar4 = (ulong)puVar6;
  }
  uVar2 = 1;
  param_1[3] = param_1[3] + 1;
LAB_009f3724:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = puVar6;
  return auVar9;
}

