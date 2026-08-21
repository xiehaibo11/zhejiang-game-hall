
/* std::__ndk1::vector<cocos2d::Node*, std::__ndk1::allocator<cocos2d::Node*> >::reserve(unsigned
   long) */

void __thiscall
std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::reserve
          (vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *this,ulong param_1)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
                    /* try { // try from 00f2dfbc to 0102dfcb has its CatchHandler @ 00f2e068 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < param_1) {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 00f2dfcc to 0102e07b has its CatchHandler @ 00f2dcd8 */
    __n = *(long *)(this + 8) - (long)__src;
    __dest = operator_new(param_1 * 8);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(size_t *)(this + 8) = (long)__dest + __n;
    *(void **)(this + 0x10) = (void *)((long)__dest + param_1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

