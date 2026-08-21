
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::Program*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Program*>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Program*>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Program*>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Program*>
   > >::__emplace_unique_key_args<unsigned long, unsigned long&,
   cocos2d::renderer::Program*&>(unsigned long const&, unsigned long&, cocos2d::renderer::Program*&)
    */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
::__emplace_unique_key_args<unsigned_long,unsigned_long&,cocos2d::renderer::Program*&>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
           *this,ulong *param_1,ulong *param_2,Program **param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  Program *pPVar4;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
  *p_Var6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined1 auVar12 [16];
  
                    /* try { // try from 009c7d04 to 00ac7d1b has its CatchHandler @ 009c7ed8 */
  uVar10 = *(ulong *)(this + 8);
  uVar11 = *param_1;
                    /* try { // try from 009c7d24 to 00ac7d2f has its CatchHandler @ 009c7ed4 */
                    /* try { // try from 009c7d30 to 00ac7d3b has its CatchHandler @ 009c7ed0 */
  if (uVar10 != 0) {
    uVar3 = uVar10 - 1;
                    /* try { // try from 009c7d3c to 00ac7e5b has its CatchHandler @ 009c7ee8 */
    if ((uVar3 & uVar10) == 0) {
      unaff_x25 = uVar3 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_009c7dc0;
        uVar8 = plVar9[1];
        if (uVar8 != uVar11) {
          if ((uVar3 & uVar10) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            if (uVar8 - uVar1 * uVar10 == unaff_x25) goto LAB_009c7dac;
            goto LAB_009c7dc0;
          }
          if (uVar8 != unaff_x25) goto LAB_009c7dc0;
        }
LAB_009c7dac:
      } while (plVar9[2] != uVar11);
      uVar2 = 0;
      goto LAB_009c7ee8;
    }
  }
LAB_009c7dc0:
  plVar9 = operator_new(0x20);
  uVar3 = *param_2;
  plVar9[1] = uVar11;
  plVar9[2] = uVar3;
  pPVar4 = *param_3;
  *plVar9 = 0;
  plVar9[3] = (long)pPVar4;
  if ((uVar10 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar10 < (float)(*(long *)(this + 0x18) + 1))) {
    if (uVar10 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar10 - 1 & uVar10) != 0);
    }
    uVar3 = uVar3 | uVar10 << 1;
    uVar10 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar10 <= uVar3) {
      uVar10 = uVar3;
    }
    rehash(this,uVar10);
    uVar10 = *(ulong *)(this + 8);
    if ((uVar10 - 1 & uVar10) == 0) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar3 * uVar10;
      }
    }
  }
  lVar7 = *(long *)this;
  plVar5 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x10;
    *plVar9 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar9;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
      **)(lVar7 + unaff_x25 * 8) = p_Var6;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 - 1 & uVar10) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar3 * uVar10;
      }
                    /* catch() { ... } // from try @ 009c7d30 with catch @ 009c7ed0 */
      plVar5 = (long *)(*(long *)this + uVar11 * 8);
      goto LAB_009c7ed4;
    }
  }
  else {
    *plVar9 = *plVar5;
LAB_009c7ed4:
                    /* catch() { ... } // from try @ 009c7d24 with catch @ 009c7ed4 */
    *plVar5 = (long)plVar9;
  }
                    /* catch() { ... } // from try @ 009c7d04 with catch @ 009c7ed8 */
  uVar2 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_009c7ee8:
                    /* catch() { ... } // from try @ 009c7d3c with catch @ 009c7ee8 */
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar9;
  return auVar12;
}

