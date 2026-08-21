
/* std::__ndk1::vector<cocos2d::renderer::VertexBuffer*,
   std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>::
__append(vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
         *this,ulong param_1)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *__src;
  size_t __n;
  ulong uVar5;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 3)) {
    do {
      *puVar4 = 0;
      param_1 = param_1 - 1;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar4;
    } while (param_1 != 0);
    return;
  }
  __src = *(void **)this;
  __n = (long)puVar4 - (long)__src;
  uVar1 = ((long)__n >> 3) + param_1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar2 = *(long *)(this + 0x10) - (long)__src;
                    /* try { // try from 009b86f8 to 00ab87df has its CatchHandler @ 009b8510 */
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    uVar5 = uVar1;
    if (uVar1 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
      goto LAB_009b8754;
    }
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar5 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar5 << 3);
LAB_009b8754:
  memset((void *)((long)__dest + ((long)__n >> 3) * 8),0,param_1 << 3);
                    /* catch() { ... } // from try @ 009b8594 with catch @ 009b8770 */
  if (0 < (long)__n) {
                    /* catch() { ... } // from try @ 009b8588 with catch @ 009b8774 */
                    /* catch() { ... } // from try @ 009b8568 with catch @ 009b8778 */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
                    /* catch() { ... } // from try @ 009b85a0 with catch @ 009b8788 */
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar5 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

