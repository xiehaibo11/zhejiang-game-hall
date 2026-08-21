
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
                    /* try { // try from 009ba238 to 00aba263 has its CatchHandler @ 009ba2cc */
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar6 = param_1 - 1;
      if ((uVar6 & param_1) == 0) {
        uVar4 = uVar4 & uVar6;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
joined_r0x009ba250:
      if (plVar7 != (long *)0x0) {
        do {
                    /* try { // try from 009ba264 to 00aba323 has its CatchHandler @ 009b9d78 */
          uVar8 = plVar7[1];
          if ((uVar6 & param_1) == 0) {
            uVar8 = uVar8 & uVar6;
                    /* catch() { ... } // from try @ 009b9ec0 with catch @ 009ba28c */
            if (uVar8 != uVar4) goto LAB_009ba294;
LAB_009ba258:
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
          }
          else {
                    /* catch() { ... } // from try @ 009ba178 with catch @ 009ba26c */
            if (param_1 <= uVar8) {
              uVar1 = 0;
              if (param_1 != 0) {
                uVar1 = uVar8 / param_1;
              }
              uVar8 = uVar8 - uVar1 * param_1;
            }
                    /* catch() { ... } // from try @ 009ba100 with catch @ 009ba27c */
            if (uVar8 == uVar4) goto LAB_009ba258;
LAB_009ba294:
            plVar10 = plVar7;
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) goto LAB_009ba2f0;
            do {
                    /* catch() { ... } // from try @ 009b9e8c with catch @ 009ba2a4 */
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
                    /* catch() { ... } // from try @ 009b9e04 with catch @ 009ba2b4 */
                    /* catch() { ... } // from try @ 009b9df8 with catch @ 009ba2b8 */
                    /* catch() { ... } // from try @ 009b9dd8 with catch @ 009ba2bc */
            } while (plVar7[2] == plVar10[2]);
            *plVar5 = (long)plVar10;
                    /* catch() { ... } // from try @ 009b9e10 with catch @ 009ba2cc
                       catch() { ... } // from try @ 009b9f10 with catch @ 009ba2cc
                       catch() { ... } // from try @ 009ba238 with catch @ 009ba2cc */
            *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
            **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar7 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_009ba2f0:
  *(long **)(*(long *)this + uVar8 * 8) = plVar5;
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x009ba250;
}

