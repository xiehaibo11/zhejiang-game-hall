
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::ProgramLib::Template>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::ProgramLib::Template>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::ProgramLib::Template>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::ProgramLib::Template> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>>>
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
                    /* try { // try from 009c7c14 to 00ac7caf has its CatchHandler @ 009c7928 */
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
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
                    /* try { // try from 009c7bb8 to 00ac7c13 has its CatchHandler @ 009c7c30 */
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
                    /* catch() { ... } // from try @ 009c79ac with catch @ 009c7c28 */
        uVar4 = uVar4 & uVar6;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
                    /* catch() { ... } // from try @ 009c79a0 with catch @ 009c7c2c */
                    /* catch() { ... } // from try @ 009c7a0c with catch @ 009c7c30
                       catch() { ... } // from try @ 009c7aa0 with catch @ 009c7c30
                       catch() { ... } // from try @ 009c7bb8 with catch @ 009c7c30 */
      *(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
joined_r0x009c7c38:
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if ((uVar6 & param_1) == 0) {
            uVar8 = uVar8 & uVar6;
            if (uVar8 != uVar4) goto LAB_009c7c7c;
LAB_009c7c40:
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
          }
          else {
                    /* catch() { ... } // from try @ 009c79b8 with catch @ 009c7c58
                       catch() { ... } // from try @ 009c7a58 with catch @ 009c7c58
                       catch() { ... } // from try @ 009c7afc with catch @ 009c7c58 */
            if (param_1 <= uVar8) {
              uVar1 = 0;
              if (param_1 != 0) {
                uVar1 = uVar8 / param_1;
              }
              uVar8 = uVar8 - uVar1 * param_1;
            }
            if (uVar8 == uVar4) goto LAB_009c7c40;
LAB_009c7c7c:
            plVar10 = plVar7;
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) goto LAB_009c7cd8;
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar7[2] == plVar10[2]);
            *plVar5 = (long)plVar10;
                    /* try { // try from 009c7cb0 to 00ac7d03 has its CatchHandler @ 009c7cb0
                       catch() { ... } // from try @ 009c7cb0 with catch @ 009c7cb0
                       catch() { ... } // from try @ 009c7e5c with catch @ 009c7cb0 */
            *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
            **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
                    /* catch() { ... } // from try @ 009c7980 with catch @ 009c7c48 */
          if (plVar7 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_009c7cd8:
  *(long **)(*(long *)this + uVar8 * 8) = plVar5;
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x009c7c38;
}

