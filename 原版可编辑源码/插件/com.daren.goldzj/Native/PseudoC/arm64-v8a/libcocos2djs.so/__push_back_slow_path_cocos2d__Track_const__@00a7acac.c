
/* void std::__ndk1::vector<cocos2d::Track*, std::__ndk1::allocator<cocos2d::Track*>
   >::__push_back_slow_path<cocos2d::Track* const&>(cocos2d::Track* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Track*,std::__ndk1::allocator<cocos2d::Track*>>::
__push_back_slow_path<cocos2d::Track*const&>
          (vector<cocos2d::Track*,std::__ndk1::allocator<cocos2d::Track*>> *this,Track **param_1)

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
LAB_00a7ad10:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
                    /* try { // try from 00a7ad00 to 00b7ad07 has its CatchHandler @ 00a7ae30 */
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
                    /* try { // try from 00a7ad8c to 00b7ada7 has its CatchHandler @ 00a7ae68 */
      __dest = (void *)0x0;
      goto LAB_00a7ad24;
    }
                    /* try { // try from 00a7ad08 to 00b7ad33 has its CatchHandler @ 00a7ac38 */
    if (uVar3 >> 0x3d != 0) goto LAB_00a7ad10;
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00a7ad24:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 00a7ad34 to 00b7ad3b has its CatchHandler @ 00a7ae48 */
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
                    /* try { // try from 00a7ad54 to 00b7ad5b has its CatchHandler @ 00a7ae80 */
  if (__src != (void *)0x0) {
                    /* try { // try from 00a7ad5c to 00b7ad63 has its CatchHandler @ 00a7ae38 */
    operator_delete(__src);
    return;
  }
                    /* try { // try from 00a7ad74 to 00b7ad77 has its CatchHandler @ 00a7ae2c */
                    /* try { // try from 00a7ad88 to 00b7ad8b has its CatchHandler @ 00a7ae34 */
  return;
}

