
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, void (*)(int, int, void const*, cocos2d::renderer::UniformElementType)>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, void (*)(int, int, void
   const*, cocos2d::renderer::UniformElementType)>, std::__ndk1::__unordered_map_hasher<unsigned
   int, std::__ndk1::__hash_value_type<unsigned int, void (*)(int, int, void const*,
   cocos2d::renderer::UniformElementType)>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   void (*)(int, int, void const*, cocos2d::renderer::UniformElementType)>,
   std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, void (*)(int, int, void
   const*, cocos2d::renderer::UniformElementType)> > >::__emplace_unique_key_args<unsigned int,
   std::__ndk1::pair<unsigned int const, void (*)(int, int, void const*,
   cocos2d::renderer::UniformElementType)> const&>(unsigned int const&, std::__ndk1::pair<unsigned
   int const, void (*)(int, int, void const*, cocos2d::renderer::UniformElementType)> const&) */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
::
__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int_const,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>const&>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
           *this,uint *param_1,pair *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
  *p_Var5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar9 = *(ulong *)(this + 8);
  uVar10 = (ulong)*param_1;
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar3 & uVar9) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_009b76f0;
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if ((uVar3 & uVar9) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            if (uVar7 - uVar1 * uVar9 == unaff_x24) goto LAB_009b76dc;
            goto LAB_009b76f0;
          }
          if (uVar7 != unaff_x24) goto LAB_009b76f0;
        }
LAB_009b76dc:
      } while (*(uint *)(plVar8 + 2) != *param_1);
      uVar2 = 0;
      goto LAB_009b7810;
    }
  }
LAB_009b76f0:
  plVar8 = operator_new(0x20);
  lVar11 = *(long *)(param_2 + 8);
  lVar6 = *(long *)param_2;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[3] = lVar11;
  plVar8[2] = lVar6;
                    /* try { // try from 009b7720 to 00ab7807 has its CatchHandler @ 009b7544 */
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    if (uVar9 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar9 - 1 & uVar9) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    rehash(this,uVar9);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
                    /* catch() { ... } // from try @ 009b75c8 with catch @ 009b7798 */
  lVar6 = *(long *)this;
                    /* catch() { ... } // from try @ 009b75bc with catch @ 009b779c */
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
                    /* catch() { ... } // from try @ 009b759c with catch @ 009b77a0 */
  if (plVar4 == (long *)0x0) {
                    /* catch() { ... } // from try @ 009b75d4 with catch @ 009b77b0 */
    p_Var5 = this + 0x10;
    *plVar8 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
      **)(lVar6 + unaff_x24 * 8) = p_Var5;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 - 1 & uVar9) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar3 * uVar9;
      }
      plVar4 = (long *)(*(long *)this + uVar10 * 8);
      goto LAB_009b77fc;
    }
  }
  else {
    *plVar8 = *plVar4;
LAB_009b77fc:
    *plVar4 = (long)plVar8;
  }
  uVar2 = 1;
                    /* try { // try from 009b7808 to 00ab785b has its CatchHandler @ 009b7808
                       catch() { ... } // from try @ 009b7808 with catch @ 009b7808
                       catch() { ... } // from try @ 009b7a08 with catch @ 009b7808 */
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_009b7810:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar8;
  return auVar12;
}

