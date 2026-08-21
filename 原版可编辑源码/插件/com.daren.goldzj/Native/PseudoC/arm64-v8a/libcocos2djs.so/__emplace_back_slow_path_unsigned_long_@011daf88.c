
/* void std::__ndk1::vector<unsigned long, std::__ndk1::allocator<unsigned long>
   >::__emplace_back_slow_path<unsigned long>(unsigned long&&) */

void __thiscall
std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
__emplace_back_slow_path<unsigned_long>
          (vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *this,ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar3 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0xffffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_011db070;
      __dest = operator_new(uVar1 << 3);
    }
    puVar2 = (ulong *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = *param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(ulong **)(this + 8) = puVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_011db070:
                    /* WARNING: Subroutine does not return */
  abort();
}

