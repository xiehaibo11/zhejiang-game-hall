
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, void (*)(int, int, void
   const*, cocos2d::renderer::UniformElementType)>, std::__ndk1::__unordered_map_hasher<unsigned
   int, std::__ndk1::__hash_value_type<unsigned int, void (*)(int, int, void const*,
   cocos2d::renderer::UniformElementType)>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   void (*)(int, int, void const*, cocos2d::renderer::UniformElementType)>,
   std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, void (*)(int, int, void
   const*, cocos2d::renderer::UniformElementType)> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
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
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* catch() { ... } // from try @ 009b7894 with catch @ 009b7a94 */
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
      *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
joined_r0x009b79d0:
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if ((uVar6 & param_1) == 0) {
                    /* try { // try from 009b7a08 to 00ab7aeb has its CatchHandler @ 009b7808 */
            uVar8 = uVar8 & uVar6;
            if (uVar8 != uVar4) goto LAB_009b7a14;
LAB_009b79d8:
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
          }
          else {
            if (param_1 <= uVar8) {
              uVar1 = 0;
              if (param_1 != 0) {
                uVar1 = uVar8 / param_1;
              }
              uVar8 = uVar8 - uVar1 * param_1;
            }
            if (uVar8 == uVar4) goto LAB_009b79d8;
LAB_009b7a14:
            plVar10 = plVar7;
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) goto LAB_009b7a70;
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while ((int)plVar7[2] == (int)plVar10[2]);
            *plVar5 = (long)plVar10;
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
                    /* catch() { ... } // from try @ 009b785c with catch @ 009b7a84 */
  return;
LAB_009b7a70:
  *(long **)(*(long *)this + uVar8 * 8) = plVar5;
                    /* catch() { ... } // from try @ 009b7888 with catch @ 009b7a7c */
                    /* catch() { ... } // from try @ 009b787c with catch @ 009b7a80 */
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x009b79d0;
}

