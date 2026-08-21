
/* void std::__ndk1::vector<fairygui::ControllerAction*,
   std::__ndk1::allocator<fairygui::ControllerAction*>
   >::__push_back_slow_path<fairygui::ControllerAction* const&>(fairygui::ControllerAction* const&)
    */

void __thiscall
std::__ndk1::vector<fairygui::ControllerAction*,std::__ndk1::allocator<fairygui::ControllerAction*>>
::__push_back_slow_path<fairygui::ControllerAction*const&>
          (vector<fairygui::ControllerAction*,std::__ndk1::allocator<fairygui::ControllerAction*>>
           *this,ControllerAction **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 00a6bc54 to 00b6bc67 has its CatchHandler @ 00a6bcec */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
                    /* try { // try from 00a6bc6c to 00b6bc9f has its CatchHandler @ 00a6bcf0 */
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
      goto LAB_00a6bcbc;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* try { // try from 00a6bca0 to 00b6bd3b has its CatchHandler @ 00a6b820 */
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00a6bcbc:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
                    /* catch() { ... } // from try @ 00a6bc54 with catch @ 00a6bcec */
  if (__src != (void *)0x0) {
                    /* catch() { ... } // from try @ 00a6bc6c with catch @ 00a6bcf0 */
    operator_delete(__src);
    return;
  }
                    /* catch() { ... } // from try @ 00a6bc20 with catch @ 00a6bd20 */
  return;
}

