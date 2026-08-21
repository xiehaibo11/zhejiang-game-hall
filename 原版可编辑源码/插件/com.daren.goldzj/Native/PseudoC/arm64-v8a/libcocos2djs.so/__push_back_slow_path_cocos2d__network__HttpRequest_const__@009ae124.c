
/* void std::__ndk1::vector<cocos2d::network::HttpRequest*,
   std::__ndk1::allocator<cocos2d::network::HttpRequest*>
   >::__push_back_slow_path<cocos2d::network::HttpRequest* const&>(cocos2d::network::HttpRequest*
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>::
__push_back_slow_path<cocos2d::network::HttpRequest*const&>
          (vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
           *this,HttpRequest **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 009ae130 to 00aae13b has its CatchHandler @ 009ae4c0 */
  __src = *(void **)this;
                    /* try { // try from 009ae140 to 00aae147 has its CatchHandler @ 009ae4b0 */
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 009ae15c to 00aae167 has its CatchHandler @ 009ae4a0 */
                    /* try { // try from 009ae16c to 00aae173 has its CatchHandler @ 009ae490 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_009ae1a4;
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
LAB_009ae1a4:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 009ae1b0 to 00aae1b7 has its CatchHandler @ 009ae5d4 */
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
                    /* try { // try from 009ae1cc to 00aae1d3 has its CatchHandler @ 009ae594 */
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* try { // try from 009ae1f0 to 00aae1ff has its CatchHandler @ 009ae518 */
    operator_delete(__src);
    return;
  }
                    /* try { // try from 009ae200 to 00aae20f has its CatchHandler @ 009ae590 */
  return;
}

