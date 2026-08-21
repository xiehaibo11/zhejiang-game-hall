
/* void std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageInfo*,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>
   >::__push_back_slow_path<cocos2d::renderer::BaseRenderer::StageInfo*
   const&>(cocos2d::renderer::BaseRenderer::StageInfo* const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::BaseRenderer::StageInfo*,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>>
::__push_back_slow_path<cocos2d::renderer::BaseRenderer::StageInfo*const&>
          (vector<cocos2d::renderer::BaseRenderer::StageInfo*,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>>
           *this,StageInfo **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_009bdb44;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_009bdb44:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
                    /* try { // try from 009bdb9c to 00abdc7f has its CatchHandler @ 009bda0c */
  return;
}

