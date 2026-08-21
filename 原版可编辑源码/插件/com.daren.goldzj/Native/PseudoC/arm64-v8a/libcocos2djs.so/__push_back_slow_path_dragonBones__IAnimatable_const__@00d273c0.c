
/* void std::__ndk1::vector<dragonBones::IAnimatable*,
   std::__ndk1::allocator<dragonBones::IAnimatable*>
   >::__push_back_slow_path<dragonBones::IAnimatable* const&>(dragonBones::IAnimatable* const&) */

void __thiscall
std::__ndk1::vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>>::
__push_back_slow_path<dragonBones::IAnimatable*const&>
          (vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>> *this
          ,IAnimatable **param_1)

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
LAB_00d27424:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d27438;
    }
    if (uVar3 >> 0x3d != 0) goto LAB_00d27424;
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00d27438:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

