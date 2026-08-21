
/* void std::__ndk1::vector<WebSocketImpl*, std::__ndk1::allocator<WebSocketImpl*>
   >::__push_back_slow_path<WebSocketImpl*>(WebSocketImpl*&&) */

void __thiscall
std::__ndk1::vector<WebSocketImpl*,std::__ndk1::allocator<WebSocketImpl*>>::
__push_back_slow_path<WebSocketImpl*>
          (vector<WebSocketImpl*,std::__ndk1::allocator<WebSocketImpl*>> *this,
          WebSocketImpl **param_1)

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
                    /* try { // try from 009ed1f0 to 00aed243 has its CatchHandler @ 009ed1f0
                       catch() { ... } // from try @ 009ed1f0 with catch @ 009ed1f0
                       catch() { ... } // from try @ 009ed4c4 with catch @ 009ed1f0 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
                    /* try { // try from 009ed290 to 00aed4a3 has its CatchHandler @ 009ed558 */
      __dest = (void *)0x0;
      goto LAB_009ed228;
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
LAB_009ed228:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* try { // try from 009ed244 to 00aed25b has its CatchHandler @ 009ed548 */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* try { // try from 009ed264 to 00aed26f has its CatchHandler @ 009ed53c */
                    /* try { // try from 009ed270 to 00aed27b has its CatchHandler @ 009ed538 */
    operator_delete(__src);
    return;
  }
  return;
}

