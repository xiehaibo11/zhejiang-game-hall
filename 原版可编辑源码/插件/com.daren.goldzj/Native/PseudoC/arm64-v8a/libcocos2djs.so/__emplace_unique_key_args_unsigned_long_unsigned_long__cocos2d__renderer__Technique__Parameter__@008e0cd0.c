
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::Technique::Parameter>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Technique::Parameter>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Technique::Parameter>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Technique::Parameter>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Technique::Parameter> > >::__emplace_unique_key_args<unsigned long, unsigned
   long&, cocos2d::renderer::Technique::Parameter&>(unsigned long const&, unsigned long&,
   cocos2d::renderer::Technique::Parameter&) */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
::__emplace_unique_key_args<unsigned_long,unsigned_long&,cocos2d::renderer::Technique::Parameter&>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
           *this,ulong *param_1,ulong *param_2,Parameter *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
  *p_Var5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  undefined1 auVar11 [16];
  
  uVar9 = *(ulong *)(this + 8);
  uVar10 = *param_1;
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar3 & uVar9) == 0) {
      unaff_x25 = uVar3 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_008e0d8c;
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
            if (uVar7 - uVar1 * uVar9 == unaff_x25) goto LAB_008e0d78;
            goto LAB_008e0d8c;
          }
          if (uVar7 != unaff_x25) goto LAB_008e0d8c;
        }
LAB_008e0d78:
      } while (plVar8[2] != uVar10);
      uVar2 = 0;
      goto LAB_008e0ebc;
    }
  }
LAB_008e0d8c:
  plVar8 = operator_new(0x60);
  plVar8[2] = *param_2;
  cocos2d::renderer::Technique::Parameter::Parameter((Parameter *)(plVar8 + 3),param_3);
  *plVar8 = 0;
  plVar8[1] = uVar10;
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
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *(long *)this;
  plVar4 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar8 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
      **)(lVar6 + unaff_x25 * 8) = p_Var5;
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
      goto LAB_008e0ea8;
    }
  }
  else {
    *plVar8 = *plVar4;
LAB_008e0ea8:
    *plVar4 = (long)plVar8;
  }
  uVar2 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_008e0ebc:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}

