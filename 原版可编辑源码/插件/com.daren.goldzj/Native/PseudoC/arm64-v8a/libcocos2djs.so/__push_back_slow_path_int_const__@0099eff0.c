
/* void std::__ndk1::vector<int, std::__ndk1::allocator<int> >::__push_back_slow_path<int
   const&>(int const&) */

void __thiscall
std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
          (vector<int,std::__ndk1::allocator<int>> *this,int *param_1)

{
  int *piVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
                    /* try { // try from 0099f018 to 00a9f02f has its CatchHandler @ 0099f204 */
  uVar3 = ((long)__n >> 2) + 1;
  if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 0099f038 to 00a9f043 has its CatchHandler @ 0099f200 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 2) < 0x1fffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 1;
                    /* try { // try from 0099f044 to 00a9f04f has its CatchHandler @ 0099f1fc */
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_0099f070;
    }
                    /* try { // try from 0099f050 to 00a9f187 has its CatchHandler @ 0099f214 */
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x3fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 2);
LAB_0099f070:
  piVar1 = (int *)((long)__dest + ((long)__n >> 2) * 4);
  *piVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(int **)(this + 8) = piVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 4);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

