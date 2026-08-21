
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,
   cocos2d::renderer::MeshBuffer*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,
   cocos2d::renderer::MeshBuffer*>,
   std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*, cocos2d::renderer::MeshBuffer*>,
   std::__ndk1::hash<cocos2d::renderer::VertexFormat*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*, cocos2d::renderer::MeshBuffer*>,
   std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,
   cocos2d::renderer::MeshBuffer*> > >::__emplace_unique_key_args<cocos2d::renderer::VertexFormat*,
   cocos2d::renderer::VertexFormat*&,
   cocos2d::renderer::MeshBuffer*&>(cocos2d::renderer::VertexFormat* const&,
   cocos2d::renderer::VertexFormat*&, cocos2d::renderer::MeshBuffer*&) */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
::
__emplace_unique_key_args<cocos2d::renderer::VertexFormat*,cocos2d::renderer::VertexFormat*&,cocos2d::renderer::MeshBuffer*&>
          (__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
           *this,VertexFormat **param_1,VertexFormat **param_2,MeshBuffer **param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  VertexFormat *pVVar3;
  MeshBuffer *pMVar4;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
  *p_Var6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined1 auVar13 [16];
  
  pVVar3 = *param_1;
  uVar9 = (((ulong)pVVar3 & 0x1fffffff) * 8 + 8 ^ (ulong)pVVar3 >> 0x20) * -0x622015f714c7d297;
  uVar12 = *(ulong *)(this + 8);
  uVar9 = (uVar9 ^ (ulong)pVVar3 >> 0x20 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  if (uVar12 != 0) {
    uVar7 = uVar12 - 1;
    if ((uVar7 & uVar12) == 0) {
      unaff_x25 = uVar9 & uVar7;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar12 <= uVar9) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar9 / uVar12;
        }
        unaff_x25 = uVar9 - uVar10 * uVar12;
      }
    }
    plVar11 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_009d3230;
        uVar10 = plVar11[1];
        if (uVar10 != uVar9) {
          if ((uVar7 & uVar12) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar12 <= uVar10) {
            uVar1 = 0;
            if (uVar12 != 0) {
              uVar1 = uVar10 / uVar12;
            }
            if (uVar10 - uVar1 * uVar12 == unaff_x25) goto LAB_009d321c;
            goto LAB_009d3230;
          }
          if (uVar10 != unaff_x25) goto LAB_009d3230;
        }
LAB_009d321c:
      } while ((VertexFormat *)plVar11[2] != pVVar3);
      uVar2 = 0;
      goto LAB_009d3358;
    }
  }
LAB_009d3230:
  plVar11 = operator_new(0x20);
  pVVar3 = *param_2;
  plVar11[1] = uVar9;
  plVar11[2] = (long)pVVar3;
  pMVar4 = *param_3;
  *plVar11 = 0;
  plVar11[3] = (long)pMVar4;
  if ((uVar12 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar12 < (float)(*(long *)(this + 0x18) + 1))) {
    if (uVar12 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar12 - 1 & uVar12) != 0);
    }
    uVar7 = uVar7 | uVar12 << 1;
    uVar12 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    rehash(this,uVar12);
    uVar12 = *(ulong *)(this + 8);
    if ((uVar12 - 1 & uVar12) == 0) {
                    /* try { // try from 009d32d0 to 00ad32d7 has its CatchHandler @ 009d332c */
      unaff_x25 = uVar12 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar12 <= uVar9) {
                    /* try { // try from 009d32d8 to 00ad33a3 has its CatchHandler @ 009d2270 */
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar9 / uVar12;
        }
        unaff_x25 = uVar9 - uVar7 * uVar12;
      }
    }
  }
  lVar8 = *(long *)this;
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x10;
    *plVar11 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar11;
    *(__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
      **)(lVar8 + unaff_x25 * 8) = p_Var6;
    if (*plVar11 != 0) {
      uVar9 = *(ulong *)(*plVar11 + 8);
      if ((uVar12 - 1 & uVar12) == 0) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
                    /* catch() { ... } // from try @ 009d32d0 with catch @ 009d332c */
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar7 * uVar12;
      }
      plVar5 = (long *)(*(long *)this + uVar9 * 8);
      goto LAB_009d3344;
    }
  }
  else {
    *plVar11 = *plVar5;
LAB_009d3344:
    *plVar5 = (long)plVar11;
  }
  uVar2 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_009d3358:
  auVar13._8_8_ = uVar2;
  auVar13._0_8_ = plVar11;
                    /* catch() { ... } // from try @ 009d25d4 with catch @ 009d3364 */
                    /* catch() { ... } // from try @ 009d2568 with catch @ 009d3368 */
                    /* catch() { ... } // from try @ 009d24f8 with catch @ 009d336c */
                    /* catch() { ... } // from try @ 009d2490 with catch @ 009d3370 */
  return auVar13;
}

