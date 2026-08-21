
/* void std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,
   std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>
   >::__push_back_slow_path<cocos2d::renderer::RenderFlow::LevelInfo
   const&>(cocos2d::renderer::RenderFlow::LevelInfo const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>
::__push_back_slow_path<cocos2d::renderer::RenderFlow::LevelInfo_const&>
          (vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>
           *this,LevelInfo *param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 6) + 1;
  if (uVar3 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 6) < 0x1ffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 5;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00925db4;
    }
    if (uVar3 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x3ffffffffffffff;
  }
  __dest = operator_new(uVar3 << 6);
LAB_00925db4:
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 6) * 0x40);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 8;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 0x40);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

