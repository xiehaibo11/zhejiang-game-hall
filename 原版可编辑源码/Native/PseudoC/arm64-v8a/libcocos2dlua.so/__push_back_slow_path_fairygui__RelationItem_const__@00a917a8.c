
/* void std::__ndk1::vector<fairygui::RelationItem*, std::__ndk1::allocator<fairygui::RelationItem*>
   >::__push_back_slow_path<fairygui::RelationItem* const&>(fairygui::RelationItem* const&) */

void __thiscall
std::__ndk1::vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>>::
__push_back_slow_path<fairygui::RelationItem*const&>
          (vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>> *this,
          RelationItem **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 00a917ac to 00b917db has its CatchHandler @ 00a9197c */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 00a917dc to 00b91847 has its CatchHandler @ 00a915f0 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00a91828;
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
LAB_00a91828:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* try { // try from 00a91848 to 00b9185f has its CatchHandler @ 00a91994 */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* try { // try from 00a91864 to 00b91883 has its CatchHandler @ 00a91990 */
    operator_delete(__src);
    return;
  }
                    /* try { // try from 00a91888 to 00b918b3 has its CatchHandler @ 00a91980 */
  return;
}

