
/* void std::__ndk1::vector<fairygui::GObject*, std::__ndk1::allocator<fairygui::GObject*>
   >::__push_back_slow_path<fairygui::GObject* const&>(fairygui::GObject* const&) */

void __thiscall
std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
__push_back_slow_path<fairygui::GObject*const&>
          (vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *this,
          GObject **param_1)

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
      goto LAB_00a73cc4;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00a73cc4:
                    /* try { // try from 00a73cc4 to 00b73ccb has its CatchHandler @ 00a73cf4 */
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 00a73cd0 to 00b73cd7 has its CatchHandler @ 00a73cec */
  *puVar1 = *param_1;
                    /* try { // try from 00a73cd8 to 00b73d17 has its CatchHandler @ 00a73b00 */
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
                    /* catch() { ... } // from try @ 00a73be8 with catch @ 00a73cec
                       catch() { ... } // from try @ 00a73cd0 with catch @ 00a73cec */
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
                    /* catch() { ... } // from try @ 00a73bc8 with catch @ 00a73cf0 */
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
                    /* catch() { ... } // from try @ 00a73b64 with catch @ 00a73cf4
                       catch() { ... } // from try @ 00a73cc4 with catch @ 00a73cf4 */
  if (__src != (void *)0x0) {
                    /* catch() { ... } // from try @ 00a73bac with catch @ 00a73cf8 */
                    /* catch() { ... } // from try @ 00a73b48 with catch @ 00a73cfc */
    operator_delete(__src);
    return;
  }
  return;
}

