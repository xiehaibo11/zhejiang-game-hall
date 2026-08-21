
/* void std::__ndk1::vector<cocos2d::renderer::InputAssembler*,
   std::__ndk1::allocator<cocos2d::renderer::InputAssembler*>
   >::__push_back_slow_path<cocos2d::renderer::InputAssembler*
   const&>(cocos2d::renderer::InputAssembler* const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::InputAssembler*,std::__ndk1::allocator<cocos2d::renderer::InputAssembler*>>
::__push_back_slow_path<cocos2d::renderer::InputAssembler*const&>
          (vector<cocos2d::renderer::InputAssembler*,std::__ndk1::allocator<cocos2d::renderer::InputAssembler*>>
           *this,InputAssembler **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 009ceaf8 to 00aceaff has its CatchHandler @ 009cec5c */
                    /* try { // try from 009ceb08 to 00aceb17 has its CatchHandler @ 009cec30 */
  __src = *(void **)this;
                    /* try { // try from 009ceb18 to 00aceb27 has its CatchHandler @ 009cec2c */
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 009ceb34 to 00aceb3b has its CatchHandler @ 009cec5c */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
                    /* try { // try from 009ceb44 to 00aceb53 has its CatchHandler @ 009cec28 */
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_009ceb78;
    }
                    /* try { // try from 009ceb54 to 00aceb63 has its CatchHandler @ 009cec24 */
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
                    /* try { // try from 009ceb6c to 00aceb7f has its CatchHandler @ 009cec5c */
  __dest = operator_new(uVar3 << 3);
LAB_009ceb78:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* try { // try from 009ceb94 to 00aceba3 has its CatchHandler @ 009cec60 */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
                    /* try { // try from 009ceba4 to 00acecd7 has its CatchHandler @ 009ce81c */
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

