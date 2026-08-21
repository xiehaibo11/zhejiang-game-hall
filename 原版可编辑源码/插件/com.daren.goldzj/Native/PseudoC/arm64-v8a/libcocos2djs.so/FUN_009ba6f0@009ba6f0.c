
long * FUN_009ba6f0(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
                    *param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 8);
                    /* try { // try from 009ba728 to 00aba77f has its CatchHandler @ 009ba728
                       catch() { ... } // from try @ 009ba728 with catch @ 009ba728
                       catch() { ... } // from try @ 009ba904 with catch @ 009ba728 */
  if ((uVar4 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar4 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    if (uVar4 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar4 - 1 & uVar4) != 0);
    }
    uVar5 = uVar5 | uVar4 << 1;
    uVar4 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
    ::rehash(param_1,uVar4);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  uVar5 = uVar4 - 1;
  if ((uVar5 & uVar4) == 0) {
    uVar6 = uVar5 & param_2;
  }
  else {
                    /* try { // try from 009ba780 to 00aba797 has its CatchHandler @ 009ba984 */
    uVar6 = param_2;
    if (uVar4 <= param_2) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = param_2 / uVar4;
      }
      uVar6 = param_2 - uVar6 * uVar4;
    }
  }
                    /* try { // try from 009ba7a0 to 00aba7ab has its CatchHandler @ 009ba980 */
  plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
                    /* try { // try from 009ba7ac to 00aba7b7 has its CatchHandler @ 009ba97c */
    bVar2 = false;
    while (bVar1 = bVar2, plVar3 = plVar7, plVar7 = (long *)*plVar3, plVar7 != (long *)0x0) {
      uVar8 = plVar7[1];
      if ((uVar5 & uVar4) == 0) {
        uVar9 = uVar8 & uVar5;
      }
      else {
        uVar9 = uVar8;
        if (uVar4 <= uVar8) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = uVar8 / uVar4;
          }
          uVar9 = uVar8 - uVar9 * uVar4;
        }
      }
      if (uVar9 != uVar6) {
        return plVar3;
      }
      bVar2 = bVar1;
      if (((uVar8 != param_2) ||
          (bVar2 = (bool)(bVar1 | plVar7[2] == *param_3), plVar7[2] != *param_3)) && (bVar1)) {
        return plVar3;
      }
    }
  }
  return plVar3;
}

