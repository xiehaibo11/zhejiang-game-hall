
/* void std::__ndk1::vector<cocos2d::renderer::DrawItem*,
   std::__ndk1::allocator<cocos2d::renderer::DrawItem*>
   >::__push_back_slow_path<cocos2d::renderer::DrawItem* const&>(cocos2d::renderer::DrawItem*
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::DrawItem*,std::__ndk1::allocator<cocos2d::renderer::DrawItem*>>::
__push_back_slow_path<cocos2d::renderer::DrawItem*const&>
          (vector<cocos2d::renderer::DrawItem*,std::__ndk1::allocator<cocos2d::renderer::DrawItem*>>
           *this,DrawItem **param_1)

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
                    /* try { // try from 009bda0c to 00abda5f has its CatchHandler @ 009bda0c
                       catch() { ... } // from try @ 009bda0c with catch @ 009bda0c
                       catch() { ... } // from try @ 009bdb9c with catch @ 009bda0c */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_009bda4c;
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
LAB_009bda4c:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
                    /* try { // try from 009bda60 to 00abda77 has its CatchHandler @ 009bdc18 */
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* try { // try from 009bda80 to 00abda8b has its CatchHandler @ 009bdc14 */
                    /* try { // try from 009bda8c to 00abda97 has its CatchHandler @ 009bdc10 */
                    /* try { // try from 009bda98 to 00abdb9b has its CatchHandler @ 009bdc28 */
    operator_delete(__src);
    return;
  }
  return;
}

