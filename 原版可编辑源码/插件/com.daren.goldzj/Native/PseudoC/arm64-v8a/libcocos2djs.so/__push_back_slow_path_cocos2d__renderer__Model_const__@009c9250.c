
/* void std::__ndk1::vector<cocos2d::renderer::Model*,
   std::__ndk1::allocator<cocos2d::renderer::Model*>
   >::__push_back_slow_path<cocos2d::renderer::Model* const&>(cocos2d::renderer::Model* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>::
__push_back_slow_path<cocos2d::renderer::Model*const&>
          (vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>> *this
          ,Model **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 009c9258 to 00ac92b3 has its CatchHandler @ 009c9258
                       catch() { ... } // from try @ 009c9258 with catch @ 009c9258
                       catch() { ... } // from try @ 009c9458 with catch @ 009c9258 */
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
      goto LAB_009c92d0;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* try { // try from 009c92b4 to 00ac92cb has its CatchHandler @ 009c94dc */
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_009c92d0:
                    /* try { // try from 009c92d4 to 00ac92df has its CatchHandler @ 009c94d8 */
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 009c92e0 to 00ac92eb has its CatchHandler @ 009c94d4 */
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* try { // try from 009c92ec to 00ac9457 has its CatchHandler @ 009c94ec */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

