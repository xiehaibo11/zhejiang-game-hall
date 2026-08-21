
/* void std::__ndk1::vector<cocos2d::network::HttpResponse*,
   std::__ndk1::allocator<cocos2d::network::HttpResponse*>
   >::__push_back_slow_path<cocos2d::network::HttpResponse* const&>(cocos2d::network::HttpResponse*
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::network::HttpResponse*,std::__ndk1::allocator<cocos2d::network::HttpResponse*>>::
__push_back_slow_path<cocos2d::network::HttpResponse*const&>
          (vector<cocos2d::network::HttpResponse*,std::__ndk1::allocator<cocos2d::network::HttpResponse*>>
           *this,HttpResponse **param_1)

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
                    /* try { // try from 009ade78 to 00aadf8b has its CatchHandler @ 009adc70 */
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
                    /* catch() { ... } // from try @ 009adcfc with catch @ 009adf34
                       catch() { ... } // from try @ 009adda8 with catch @ 009adf34
                       catch() { ... } // from try @ 009ade3c with catch @ 009adf34 */
      __dest = (void *)0x0;
      goto LAB_009adecc;
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
LAB_009adecc:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* catch() { ... } // from try @ 009add50 with catch @ 009adeec */
                    /* catch() { ... } // from try @ 009add70 with catch @ 009adef0 */
    memcpy(__dest,__src,__n);
  }
                    /* catch() { ... } // from try @ 009adcf0 with catch @ 009adef4 */
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
                    /* catch() { ... } // from try @ 009adce4 with catch @ 009adef8 */
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
                    /* catch() { ... } // from try @ 009add2c with catch @ 009adefc
                       catch() { ... } // from try @ 009addc8 with catch @ 009adefc */
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
                    /* catch() { ... } // from try @ 009adcc4 with catch @ 009adf24 */
  return;
}

